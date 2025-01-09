import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from ultralytics import YOLO
import cv2
from geometry_msgs.msg import Point
from std_msgs.msg import String
from custom_srv.srv import ProcessCoordinates
from custom_srv.msg import Detection
from custom_srv.msg import Detections


class ObjectDetectionNode(Node):
    def __init__(self):
        super().__init__('object_detection_node')

        # Camera parameters
        self.u0 = 309.70325519  # Principal point x (cx)
        self.v0 = 229.95763288  # Principal point y (cy)
        self.lx = 589.10245156  # Focal length x (fx)
        self.ly = 590.96550622  # Focal length y (fy)

        # Load the YOLOv8 model
        self.model = YOLO("best.pt")

        # Get classes
        self.class_names = self.model.names

        # Initialize CvBridge to convert ROS image to OpenCV image
        self.bridge = CvBridge()

        # Create a subscription to the camera feed
        self.create_subscription(
            Image, '/video_frames', self.camera_callback, 10
        )
        
        # Publisher for detections
        self.image_pub = self.create_publisher(
            Image, '/detected_frames', 10)

        # Client for Service
        self.client = self.create_client(ProcessCoordinates, 'process_coordinates')

        # Create a publisher to publish the object class and position
        self.position_pub = self.create_publisher(Point, '/object_positions', 10)
        self.class_pub = self.create_publisher(String, '/object_classes', 10)
        self.detections_pub = self.create_publisher(
            Detections, '/detections', 10)

        self.depth = None

    def send_request(self, x, y):
        request = ProcessCoordinates.Request()
        request.x = int(x)
        request.y = int(y)
        
        self.future = self.client.call_async(request)

        # LETS CHECK IF A CALLBACK HERE IS NECESSARY OR NOT
        self.future.add_done_callback(self.response_callback)
    
    def response_callback(self, future):
            response = future.result()
            depth = response.depth  # Access the depth value from the response
            self.depth = depth

    def camera_callback(self, msg):
        # Convert ROS Image message to OpenCV format
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # Run YOLOv8 inference on the frame
        results = self.model(frame);

        detections_msg = Detections()

        # Process detections
        for result in results:
            for detection in result.boxes:
                # Extract class id, confidence score, and bounding box coordinates
                class_id = int(detection.cls)  # Object class ID
                confidence = float(detection.conf)  # Confidence score
                x1, y1, x2, y2 = map(int, detection.xyxy[0])   # Bounding box coordinates

                # Calculate the center of the bounding box (x, y position of the object)
                x_center = (x1 + x2) / 2
                y_center = (y1 + y2) / 2

                # Request the depth of these coordinates
                self.send_request(x_center, y_center)

                # Check if there's a response
                # response = self.future.result()
                # print(self.future)
                    # self.get_logger().info(f'Received response: {response.depth}')


                # Create a rectangle for the detected object
                cv2.rectangle(frame, (x1, y1), (x2, y2), (0, 255, 0), 2)

                # Text label
                class_name = self.class_names.get(class_id, f"Unknown {class_id}")
                label = f"{class_name} {confidence:.2f}"

                cv2.putText(frame, class_name, (x1, y1 - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

                if self.depth:
                    z = self.depth 
                else:
                    z = 0.0

                # Convert pixel coordinates to meters using the camera parameters
                x_m, y_m = self.convert_one_point_to_meter(x_center, y_center, z)
                cv2.putText(frame, str(z), (x1, y1 - 30),  cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

                # Ready data for publishing
                centroid = Point(x=z, y=-x_m, z=-y_m)
                detection_msg = Detection(
                    class_name=class_name,
                    confidence=confidence,
                    centroid=centroid
                )
                # Get all detections together
                detections_msg.detections.append(detection_msg)

        self.detections_pub.publish(detections_msg)
        annotated_msg = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')
        self.image_pub.publish(annotated_msg)



    def convert_one_point_to_meter(self, x_pixel, y_pixel, z):
        """
        Convert pixel coordinates to meters using camera intrinsic parameters.

        :param x_pixel: x coordinate in pixels
        :param y_pixel: y coordinate in pixels
        :return: x, y coordinates in meters
        """
        x_m = (x_pixel - self.u0)  / self.lx
        y_m = (y_pixel - self.v0)  / self.ly
        return x_m, y_m


def main(args=None):
    rclpy.init(args=args)
    node = ObjectDetectionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
