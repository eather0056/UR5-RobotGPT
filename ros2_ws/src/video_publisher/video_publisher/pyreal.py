# import pyrealsense2 as rs
# import numpy as np
# import cv2

# # Configure depth and color streams
# pipeline = rs.pipeline()
# config = rs.config()
# config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)

# # Start streaming
# pipeline.start(config)

# try:
#     while True:
#         # Wait for a frame
#         frames = pipeline.wait_for_frames()
#         depth_frame = frames.get_depth_frame()
#         if not depth_frame:
#             continue

#         # Convert depth frame to numpy array
#         depth_image = np.asanyarray(depth_frame.get_data())

#         # Normalize for visualization
#         depth_colormap = cv2.applyColorMap(
#             cv2.convertScaleAbs(depth_image, alpha=0.03),
#             cv2.COLORMAP_JET
#         )
#         print(depth_frame.get_distance(318, 266))
#         # Display the image
#         cv2.imshow("Depth Stream", depth_colormap)
#         if cv2.waitKey(1) & 0xFF == ord('q'):
#             break
# finally:
#     # Stop streaming
#     pipeline.stop()
#     cv2.destroyAllWindows()


import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, PointCloud2, PointField
from std_msgs.msg import Header
import pyrealsense2 as rs
import numpy as np
import cv2
import sensor_msgs_py.point_cloud2 as pc2
from cv_bridge import CvBridge
from custom_srv.srv import ProcessCoordinates


class RealSenseDepthNode(Node):
    def __init__(self):
        super().__init__('realsense_depth_node')
        self.bridge = CvBridge()
        
        # Set up publisher for depth image
        self.depth_image_pub = self.create_publisher(Image, 'camera/depth/image', 10)
        self.srv = self.create_service(ProcessCoordinates, 'process_coordinates', self.process_callback)

        # Set up RealSense pipeline
        self.pipeline = rs.pipeline()
        self.config = rs.config()
        self.config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)
        self.pipeline.start(self.config)

        self.frame = None

        # Set up timer to publish data at regular intervals
        self.timer = self.create_timer(0.1, self.timer_callback)  # 10Hz


    def process_callback(self, request, response):
        self.get_logger().info(f'Starting Service')
        x,y = request.x, request.y
        self.get_logger().info(f'Received coordinates: x={x}, y={y}')
        depth = self.frame.get_distance(x,y)
        self.get_logger().info(f"Depth at this pixel: {depth}")
        response.depth = depth
        return response

    def timer_callback(self):
        # Wait for a frame
        frames = self.pipeline.wait_for_frames()
        depth_frame = frames.get_depth_frame()
        self.frame = depth_frame
        if not depth_frame:
            return

        # Convert depth frame to numpy array
        depth_image = np.asanyarray(depth_frame.get_data())
        
        # Convert depth image to ROS Image message
        depth_colormap = cv2.applyColorMap(
            cv2.convertScaleAbs(depth_image, alpha=0.03),
            cv2.COLORMAP_JET
        )
        msg = self.bridge.cv2_to_imgmsg(depth_colormap, encoding='bgr8')
        # Publish the depth image
        self.depth_image_pub.publish(msg)
        
   

def main(args=None):
    rclpy.init(args=args)
    node = RealSenseDepthNode()
    rclpy.spin(node)
    node.pipeline.stop()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
