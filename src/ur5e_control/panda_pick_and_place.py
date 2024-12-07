import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import numpy as np
from ikpy.chain import Chain
from ikpy.link import URDFLink


class PandaPickAndPlace(Node):
    def __init__(self):
        super().__init__('panda_pick_and_place')
        self.publisher = self.create_publisher(JointTrajectory, '/panda_arm_controller/joint_trajectory', 10)

        # Define the robot chain
        self.chain = Chain(name="panda_chain", links=[
            URDFLink(
                name="panda_joint1",
                origin_translation=[0.0, 0.0, 0.0],
                origin_orientation=[0.0, 0.0, 0.0],
                bounds=(-2.8973, 2.8973),
                rotation=[0, 0, 1]
            ),
            URDFLink(
                name="panda_joint2",
                origin_translation=[0.0, 0.0, 0.333],
                origin_orientation=[-np.pi / 2, 0.0, 0.0],
                bounds=(-1.7628, 1.7628),
                rotation=[0, 1, 0]
            ),
            URDFLink(
                name="panda_joint3",
                origin_translation=[0.0, 0.0, 0.0],
                origin_orientation=[np.pi / 2, 0.0, 0.0],
                bounds=(-2.8973, 2.8973),
                rotation=[0, 0, 1]
            ),
            URDFLink(
                name="panda_joint4",
                origin_translation=[0.0, 0.0, 0.316],
                origin_orientation=[np.pi / 2, 0.0, 0.0],
                bounds=(-3.0718, -0.0698),
                rotation=[0, 1, 0]
            ),
            URDFLink(
                name="panda_joint5",
                origin_translation=[0.0825, 0.0, 0.0],
                origin_orientation=[-np.pi / 2, 0.0, 0.0],
                bounds=(-2.8973, 2.8973),
                rotation=[0, 0, 1]
            ),
            URDFLink(
                name="panda_joint6",
                origin_translation=[-0.0825, 0.0, 0.384],
                origin_orientation=[np.pi / 2, 0.0, 0.0],
                bounds=(-0.0175, 3.7525),
                rotation=[0, 1, 0]
            ),
            URDFLink(
                name="panda_joint7",
                origin_translation=[0.0, 0.0, 0.0],
                origin_orientation=[np.pi / 2, 0.0, 0.0],
                bounds=(-2.8973, 2.8973),
                rotation=[0, 0, 1]
            ),
        ])
        self.get_logger().info("Panda Pick-and-Place Node Initialized")

    def move_to_xyz(self, x, y, z, duration, initial_guess=None):
        target_position = [x, y, z]
        target_orientation = np.eye(3)  # Identity matrix for no rotation

        try:
            # Provide a fallback initial guess
            if initial_guess is None:
                initial_guess = [0.0] * len(self.chain.links)

            self.get_logger().info(f"Target position: {target_position}, Initial guess: {initial_guess}")

            # Solve IK
            joint_positions = self.chain.inverse_kinematics(
                target_position, orientation_mode="all", initial_position=initial_guess
            )[1:-1]  # Exclude fixed base and tool links
            joint_positions = [float(pos) for pos in joint_positions]

            # Create trajectory message
            trajectory_msg = JointTrajectory()
            trajectory_msg.joint_names = [
                "panda_joint1", "panda_joint2", "panda_joint3",
                "panda_joint4", "panda_joint5", "panda_joint6", "panda_joint7"
            ]
            point = JointTrajectoryPoint()
            point.positions = joint_positions
            point.time_from_start.sec = duration
            trajectory_msg.points.append(point)

            # Publish trajectory
            self.publisher.publish(trajectory_msg)
            self.get_logger().info(f"Published joint trajectory: {joint_positions}")
        except Exception as e:
            self.get_logger().error(f"IK failed: {e}")


def main():
    rclpy.init()
    node = PandaPickAndPlace()

    # Pick position
    pick_position = (0.3, 1.5, -5.0)
    initial_guess_pick = [0.0, -0.3, 0.0, -1.0, 0.0, 0.5, 0.0]
    node.get_logger().info("Moving to pick position...")
    node.move_to_xyz(*pick_position, duration=8, initial_guess=initial_guess_pick)
    rclpy.spin_once(node, timeout_sec=8)

    # Wait for 20 seconds to grab
    node.get_logger().info("Waiting for 20 seconds to grab...")
    node.get_clock().sleep_for(rclpy.duration.Duration(seconds=20))

    # Place position
    place_position = (0.2, -0.3, 0.5)
    initial_guess_place = [0.0, -0.5, 0.0, -1.2, 0.0, 0.3, 0.0]
    node.get_logger().info("Moving to place position...")
    node.move_to_xyz(*place_position, duration=8, initial_guess=initial_guess_place)
    rclpy.spin_once(node, timeout_sec=8)

    node.get_logger().info("Pick-and-place operation completed.")
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
