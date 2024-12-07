import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import numpy as np
from ikpy.chain import Chain
from scipy.spatial.transform import Rotation as R


class UR5eControl(Node):
    def __init__(self):
        super().__init__('ur5e_control')

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

        self.get_logger().info("UR5e control node initialized.")

    def move_to_xyz(self, x, y, z, orientation=(0.0, 0.0, 0.0)):
        """
        Move the robot's end-effector to the specified Cartesian position and orientation.

        :param x: X-coordinate of the target position.
        :param y: Y-coordinate of the target position.
        :param z: Z-coordinate of the target position.
        :param orientation: Tuple of (roll, pitch, yaw) in radians.
        """
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
        point.time_from_start.sec = 5  # Move to position in 5 seconds

        # Add the point to the trajectory
        traj_msg.points = [point]

        # Publish the trajectory
        self.publisher.publish(traj_msg)
        self.get_logger().info(f"Published joint trajectory: {joint_positions}")


def main():
    rclpy.init()

    # Create the control node
    control_node = UR5eControl()

    # Specify the desired target position and orientation (roll, pitch, yaw in radians)
    x = 0.4  # X-coordinate
    y = 0.2  # Y-coordinate
    z = 0.5  # Z-coordinate
    orientation = (0.0, 0.0, 0.0)  # Roll, pitch, yaw in radians

    # Move the robot to the specified position and orientation
    control_node.move_to_xyz(x, y, z, orientation)

    rclpy.spin(control_node)
    control_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
