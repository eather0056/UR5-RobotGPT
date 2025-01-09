# 

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from ultralytics import YOLO


class YOLOPoseEstimationNode(Node):
    def __init__(self):
        super().__init__('yolo_pose_estimation')
        
        # Parameters
        self.declare_parameter('input_topic', 'video_frames')
        self.declare_parameter('output_topic', 'detected_frames')
        
        # Set up YOLO pose estimation model
        self.model = YOLO('yolo11n-pose.pt')  # Load the YOLO pose estimation model
        self.bridge = CvBridge()
        
        # ROS 2 subscriptions and publications
        self.subscription = self.create_subscription(
            Image,
            self.get_parameter('input_topic').get_parameter_value().string_value,
            self.frame_callback,
            10
        )
        self.publisher = self.create_publisher(
            Image,
            self.get_parameter('output_topic').get_parameter_value().string_value,
            10
        )
        
        self.get_logger().info("YOLO Pose Estimation Node initialized")

    def frame_callback(self, msg):
    # Convert ROS 2 Image message to OpenCV format
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # Perform pose estimation
        results = self.model(frame)

        # Iterate through detected results and process keypoints
        for result in results:
            for pose in result.keypoints:
                for keypoint in pose.xy.squeeze(0):
                    # Ensure that keypoint contains two elements (x, y coordinates)
                    x = int(keypoint[0].item())
                    y = int(keypoint[1].item())
                    
                    # Draw a circle at each keypoint for visualization
                    cv2.circle(frame, (x, y), 5, (0, 0, 255), -1)
    
        # Convert back to ROS 2 Image message and publish
        output_msg = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')
        self.publisher.publish(output_msg)
        self.get_logger().info("Published detected frame with pose keypoints")




def main(args=None):
    rclpy.init(args=args)
    node = YOLOPoseEstimationNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
