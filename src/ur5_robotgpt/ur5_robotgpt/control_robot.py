import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint

class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')
        self.publisher = self.create_publisher(JointTrajectory, '/scaled_joint_trajectory_controller/joint_trajectory', 10)
        self.get_logger().info("Robot controller node has started.")

    def move_to_position(self, positions, time):
        msg = JointTrajectory()
        msg.joint_names = [
            "shoulder_pan_joint",
            "shoulder_lift_joint",
            "elbow_joint",
            "wrist_1_joint",
            "wrist_2_joint",
            "wrist_3_joint"
        ]
        
        point = JointTrajectoryPoint()
        point.positions = positions
        point.time_from_start.sec = time  # Time to reach the position
        
        msg.points.append(point)
        self.publisher.publish(msg)
        self.get_logger().info(f"Moving robot to positions: {positions}")

def main(args=None):
    rclpy.init(args=args)
    node = RobotController()
    
    # Example: Move to a specific position in 5 seconds
    node.move_to_position([0.0, -1.57, 0.0, -1.57, 0.0, 0.0], 5)
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
