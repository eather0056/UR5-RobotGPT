import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import time

class JointTrajectoryPublisher(Node):
    def __init__(self):
        super().__init__('joint_trajectory_publisher')
        self.publisher = self.create_publisher(JointTrajectory, '/scaled_joint_trajectory_controller/joint_trajectory', 10)

    def publish_trajectory(self, joint_names, positions, duration):
        msg = JointTrajectory()
        msg.joint_names = joint_names

        point = JointTrajectoryPoint()
        point.positions = positions
        point.time_from_start.sec = duration
        point.time_from_start.nanosec = 0

        msg.points.append(point)
        self.publisher.publish(msg)
        self.get_logger().info(f'Published trajectory: {positions}')


def main(args=None):
    rclpy.init(args=args)

    joint_trajectory_publisher = JointTrajectoryPublisher()

    joint_names = [
        'shoulder_pan_joint', 'shoulder_lift_joint', 'elbow_joint',
        'wrist_1_joint', 'wrist_2_joint', 'wrist_3_joint'
    ]

    # First trajectory
    first_positions = [0.0, -1.5, 0.0, 0.0, 0.0, 0.0]
    joint_trajectory_publisher.publish_trajectory(joint_names, first_positions, 5)
    time.sleep(6)  # Wait for the first trajectory to complete

    # Second trajectory
    second_positions = [0.0, -0.3, 0.4, -1.6, 1.5, -0.0]
    joint_trajectory_publisher.publish_trajectory(joint_names, second_positions, 5)
    time.sleep(6)  # Wait for the second trajectory to complete

    # Third trajectory
    third_positions = [0.0, -1.5, 0.0, 0.0, 0.0, 0.0]
    joint_trajectory_publisher.publish_trajectory(joint_names, third_positions, 5)
    time.sleep(6)  # Wait for the third trajectory to complete

    joint_trajectory_publisher.get_logger().info('Finished publishing all trajectories')

    joint_trajectory_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
