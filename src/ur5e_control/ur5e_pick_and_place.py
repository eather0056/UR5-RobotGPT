import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import numpy as np
from ikpy.chain import Chain
from scipy.spatial.transform import Rotation as R


class UR5ePickAndPlace(Node):
    def __init__(self):
        super().__init__('ur5e_pick_and_place')

        # Define the UR5e chain
        self.chain = Chain.from_urdf_file("ur5e.urdf")  # Replace with your UR5e URDF file path
        self.joint_names = [
            "shoulder_pan_joint",
            "shoulder_lift_joint",
            "elbow_joint",
            "wrist_1_joint",
            "wrist_2_joint",
            "wrist_3_joint",
        ]

        # Publisher for joint trajectory commands
        self.publisher = self.create_publisher(
            JointTrajectory, "/scaled_joint_trajectory_controller/joint_trajectory", 10
        )

        self.get_logger().info("UR5e Pick-and-Place node initialized.")

    def move_to_xyz(self, x, y, z, orientation=(0.0, 0.0, 0.0), duration=5):
        """
        Move the robot's end-effector to the specified Cartesian position and orientation.

        :param x: X-coordinate of the target position.
        :param y: Y-coordinate of the target position.
        :param z: Z-coordinate of the target position.
        :param orientation: Tuple of (roll, pitch, yaw) in radians.
        :param duration: Time duration for the movement (seconds).
        """
        try:
            # Define the desired pose matrix
            target_position = np.array([x, y, z])
            r = R.from_euler('xyz', orientation, degrees=False)  # Orientation in radians
            target_rotation = r.as_matrix()  # Set the rotation matrix

            # Combine position and rotation into a 4x4 transformation matrix
            target_transform = np.eye(4)
            target_transform[:3, :3] = target_rotation
            target_transform[:3, 3] = target_position

            self.get_logger().info(f"Target transform: \n{target_transform}")

            # Solve inverse kinematics to get joint angles
            joints = self.chain.inverse_kinematics_frame(target_transform)

            # Exclude the first joint (base link) from the solution
            joint_positions = joints[1:7].tolist()  # Convert to Python list

            self.get_logger().info(f"Calculated joint positions: {joint_positions}")

            # Create a JointTrajectory message
            traj_msg = JointTrajectory()
            traj_msg.joint_names = self.joint_names

            # Create a trajectory point
            point = JointTrajectoryPoint()
            point.positions = joint_positions  # Assign as a Python list
            point.time_from_start.sec = duration  # Move to position in specified seconds

            # Add the point to the trajectory
            traj_msg.points = [point]

            # Publish the trajectory
            self.publisher.publish(traj_msg)
            self.get_logger().info(f"Published joint trajectory: {joint_positions}")
        except Exception as e:
            self.get_logger().error(f"Failed to calculate IK or publish trajectory: {e}")


def main():
    rclpy.init()

    # Create the pick-and-place node
    node = UR5ePickAndPlace()

    # Define pick position
    pick_position = (0.4, 0.2, 0.5)  # Adjust X, Y, Z as needed
    pick_orientation = (0.0, 0.0, 0.0)  # Roll, pitch, yaw in radians

    # Move to pick position
    node.get_logger().info("Moving to pick position...")
    node.move_to_xyz(*pick_position, orientation=pick_orientation, duration=8)
    rclpy.spin_once(node, timeout_sec=8)

    # Wait for grabbing
    node.get_logger().info("Waiting 20 seconds for grabbing...")
    node.get_clock().sleep_for(rclpy.duration.Duration(seconds=20))

    # Define place position
    place_position = (0.2, -0.2, 0.4)  # Adjust X, Y, Z as needed
    place_orientation = (0.0, 0.0, 0.0)  # Roll, pitch, yaw in radians

    # Move to place position
    node.get_logger().info("Moving to place position...")
    node.move_to_xyz(*place_position, orientation=place_orientation, duration=8)
    rclpy.spin_once(node, timeout_sec=8)

    # Completion message
    node.get_logger().info("Pick-and-place operation completed.")

    # Shutdown node
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
