// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotiq_3f_gripper_ros2_interfaces:srv/Robotiq3FGripperOutputService.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__STRUCT_H_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'output_registers'
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__struct.h"

/// Struct defined in srv/Robotiq3FGripperOutputService in the package robotiq_3f_gripper_ros2_interfaces.
typedef struct robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Request
{
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters output_registers;
} robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Request;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Request.
typedef struct robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Request__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Robotiq3FGripperOutputService in the package robotiq_3f_gripper_ros2_interfaces.
typedef struct robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Response
{
  bool success;
} robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Response;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Response.
typedef struct robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Response__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__STRUCT_H_
