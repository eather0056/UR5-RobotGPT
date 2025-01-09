import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class VideoPublisherNode(Node):
    def __init__(self):
        super().__init__('video_publisher')
        # Create a publisher for the Image topic
        self.publisher_ = self.create_publisher(Image, 'video_frames', 10)
        self.timer = self.create_timer(0.1, self.publish_frame)  # Publish at ~10 Hz
        self.cap = cv2.VideoCapture(8)  # Open default camera
        self.bridge = CvBridge()

        if not self.cap.isOpened():
            self.get_logger().error('Failed to open camera')
            rclpy.shutdown()

    def publish_frame(self):
        ret, frame = self.cap.read()
        if ret:
            # Convert OpenCV image (BGR format) to ROS 2 Image message
            msg = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')
            self.publisher_.publish(msg)
            self.get_logger().info('Publishing video frame')
        else:
            self.get_logger().error('Failed to capture frame')

    def destroy_node(self):
        self.cap.release()  # Release the camera
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    video_publisher = VideoPublisherNode()
    rclpy.spin(video_publisher)
    video_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

