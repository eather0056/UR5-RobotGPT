import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from moveit_commander import MoveGroupCommander, PlanningSceneInterface
from tf_transformations import quaternion_from_euler


class UR5MoveToPosition(Node):
    def __init__(self):
        super().__init__('ur5_move_to_position')
        self.group = MoveGroupCommander("manipulator")  # MoveIt2 group name
        self.scene = PlanningSceneInterface()
        self.group.set_planning_time(10.0)  # Set longer planning time if necessary
        self.get_logger().info("MoveIt2 interface initialized for UR5 manipulator.")

    def move_to_xyz(self, x, y, z, roll=0.0, pitch=0.0, yaw=0.0):
        # Create a target pose for the end-effector
        pose_target = PoseStamped()
        pose_target.header.frame_id = "base_link"
        pose_target.pose.position.x = x
        pose_target.pose.position.y = y
        pose_target.pose.position.z = z

        # Convert roll, pitch, yaw to quaternion
        quaternion = quaternion_from_euler(roll, pitch, yaw)
        pose_target.pose.orientation.x = quaternion[0]
        pose_target.pose.orientation.y = quaternion[1]
        pose_target.pose.orientation.z = quaternion[2]
        pose_target.pose.orientation.w = quaternion[3]

        # Set the target pose
        self.group.set_pose_target(pose_target.pose)

        # Plan and execute
        self.get_logger().info(f"Planning motion to x: {x}, y: {y}, z: {z}")
        success = self.group.go(wait=True)

        # Stop and clear targets
        self.group.stop()
        self.group.clear_pose_targets()

        if success:
            self.get_logger().info("Motion successfully executed.")
        else:
            self.get_logger().error("Failed to execute motion.")


def main():
    rclpy.init()
    node = UR5MoveToPosition()

    # Example: Move to x=0.4, y=0.2, z=0.3 with no rotation
    x = 0.4
    y = 0.2
    z = 0.3
    roll = 0.0
    pitch = 0.0
    yaw = 0.0

    try:
        node.move_to_xyz(x, y, z, roll, pitch, yaw)
    except Exception as e:
        node.get_logger().error(f"An error occurred: {e}")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
