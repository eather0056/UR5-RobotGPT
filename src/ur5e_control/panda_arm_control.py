import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import numpy as np
from ikpy.chain import Chain
from ikpy.link import URDFLink


class PandaArmControl(Node):
    def __init__(self):
        super().__init__('panda_arm_control')
        self.get_logger().info("Panda Arm Control Node Initialized")

        # Publisher for the joint trajectory
        self.publisher = self.create_publisher(JointTrajectory, '/panda_arm_controller/joint_trajectory', 10)

        # Define the robot chain for IK
        self.chain = Chain(name="panda_arm", links=[
            URDFLink(name="panda_joint1", origin_translation=[0.0, 0.0, 0.0], origin_orientation=[0.0, 0.0, 0.0], rotation=[0, 0, 1]),
            URDFLink(name="panda_joint2", origin_translation=[0.0, 0.0, 0.333], origin_orientation=[0.0, 0.0, 0.0], rotation=[0, 1, 0]),
            URDFLink(name="panda_joint3", origin_translation=[0.0, 0.0, 0.0], origin_orientation=[0.0, -np.pi / 2, 0.0], rotation=[0, 0, 1]),
            URDFLink(name="panda_joint4", origin_translation=[0.0, 0.316, 0.0], origin_orientation=[0.0, np.pi / 2, 0.0], rotation=[0, 1, 0]),
            URDFLink(name="panda_joint5", origin_translation=[0.0825, 0.0, 0.0], origin_orientation=[0.0, -np.pi / 2, 0.0], rotation=[0, 0, 1]),
            URDFLink(name="panda_joint6", origin_translation=[-0.0825, 0.384, 0.0], origin_orientation=[0.0, np.pi / 2, 0.0], rotation=[0, 1, 0]),
            URDFLink(name="panda_joint7", origin_translation=[0.0, 0.0, 0.0], origin_orientation=[0.0, 0.0, 0.0], rotation=[0, 0, 1]),
        ])

    def move_to_xyz(self, x, y, z):
        # Define the target position
        target_position = [x, y, z]

        # Define the target orientation (identity rotation here)
        target_orientation = np.eye(3)

        # Compute inverse kinematics
        joint_positions = self.chain.inverse_kinematics(target_position, target_orientation)

        # Remove fixed joint positions if necessary and ensure correct size
        joint_positions = joint_positions[1:-1]  # Skip base and end-effector fixed links

        # Convert to a standard Python list of floats
        joint_positions = [float(pos) for pos in joint_positions]

        # Ensure the positions array has exactly 7 elements by padding with zeros if necessary
        while len(joint_positions) < 7:
            joint_positions.append(0.0)

        # Prepare and publish the trajectory message
        trajectory_msg = JointTrajectory()
        trajectory_msg.joint_names = [
            "panda_joint1", "panda_joint2", "panda_joint3",
            "panda_joint4", "panda_joint5", "panda_joint6", "panda_joint7"
        ]

        point = JointTrajectoryPoint()
        point.positions = joint_positions
        point.time_from_start.sec = 2

        trajectory_msg.points.append(point)
        self.publisher.publish(trajectory_msg)

        self.get_logger().info(f"Published joint trajectory: {joint_positions}")

def main():
    rclpy.init()
    control_node = PandaArmControl()

    # Define target Cartesian coordinates
    x = 0.3 # Example target X coordinate
    y = 1.5 # Example target Y coordinate
    z = -5.0  # Example target Z coordinate

    control_node.move_to_xyz(x, y, z)

    # Spin for a short duration to ensure message is sent
    rclpy.spin_once(control_node, timeout_sec=1)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
