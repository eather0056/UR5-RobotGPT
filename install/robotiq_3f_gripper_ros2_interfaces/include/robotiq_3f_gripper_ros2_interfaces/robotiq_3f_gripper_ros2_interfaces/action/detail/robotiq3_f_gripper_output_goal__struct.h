// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotiq_3f_gripper_ros2_interfaces:action/Robotiq3FGripperOutputGoal.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__STRUCT_H_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'output_registers_goal'
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__struct.h"

/// Struct defined in action/Robotiq3FGripperOutputGoal in the package robotiq_3f_gripper_ros2_interfaces.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal
{
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters output_registers_goal;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Robotiq3FGripperOutputGoal in the package robotiq_3f_gripper_ros2_interfaces.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result
{
  rosidl_runtime_c__String result;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'input_registers'
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_input_registers__struct.h"
// Member 'output_registers'
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__struct.h"

/// Struct defined in action/Robotiq3FGripperOutputGoal in the package robotiq_3f_gripper_ros2_interfaces.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback
{
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperInputRegisters input_registers;
  robotiq_3f_gripper_ros2_interfaces__msg__Robotiq3FGripperOutputRegisters output_registers;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.h"

/// Struct defined in action/Robotiq3FGripperOutputGoal in the package robotiq_3f_gripper_ros2_interfaces.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal goal;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Robotiq3FGripperOutputGoal in the package robotiq_3f_gripper_ros2_interfaces.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Robotiq3FGripperOutputGoal in the package robotiq_3f_gripper_ros2_interfaces.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.h"

/// Struct defined in action/Robotiq3FGripperOutputGoal in the package robotiq_3f_gripper_ros2_interfaces.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response
{
  int8_t status;
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result result;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.h"

/// Struct defined in action/Robotiq3FGripperOutputGoal in the package robotiq_3f_gripper_ros2_interfaces.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback feedback;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage;

// Struct for a sequence of robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage.
typedef struct robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence
{
  robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__STRUCT_H_
