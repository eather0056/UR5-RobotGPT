// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotiq_3f_gripper_ros2_interfaces:msg/Robotiq3FGripperOutputRegisters.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__STRUCT_H_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Robotiq3FGripperOutputRegisters in the package robotiq_3f_gripper_ros2_interfaces.
/**
  * rACT: Action request (activation bit).
  * 0x0 - Decativate gripper.
  * 0x1 - Activate gripper.
 */
typedef struct robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters
{
  uint8_t r_act;
  /// rMOD: Changes the gripper grasping mode.
  /// 0x0 - Basic mode.
  /// 0x1 - Pinch mode.
  uint8_t r_mod;
  /// rGTO: "Go To" action moves the gripper fingers to the requested position.
  /// 0x0 - Stop.
  /// 0x1 - Go to the requested position.
  uint8_t r_gto;
  /// rATR: Automatic release routine.
  /// 0x0 - Stop.
  /// 0x1 Emergency auto-release.
  uint8_t r_atr;
  /// rPRA: Target position of the fingers.
  /// 0x00 Minimum position (open).
  /// 0xFF Maximum position (close).
  uint8_t r_pra;
  /// rSPA: Gripper closing or opening speed.
  /// Setting a speed will not initiate a motion.
  /// 0x00 Minimum speed.
  /// 0xFF Maximum speed.
  uint8_t r_spa;
  /// rFRA: Final grasping force of the gripper.
  /// Setting a force will not initiate a motion.
  /// 0x00 Minimum force.
  /// 0xFF Maximum force.
  uint8_t r_fra;
} robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters.
typedef struct robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__MSG__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_REGISTERS__STRUCT_H_
