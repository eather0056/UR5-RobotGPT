// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:action/Robotiq3FGripperOutputGoal.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__TRAITS_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'output_registers_goal'
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__traits.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputGoal_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: output_registers_goal
  {
    out << "output_registers_goal: ";
    to_flow_style_yaml(msg.output_registers_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputGoal_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output_registers_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_registers_goal:\n";
    to_block_style_yaml(msg.output_registers_goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputGoal_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>()
{
  return "robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>()
{
  return "robotiq_3f_gripper_ros2_interfaces/action/Robotiq3FGripperOutputGoal_Goal";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>
  : std::integral_constant<bool, has_fixed_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>::value> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>
  : std::integral_constant<bool, has_bounded_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>::value> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputGoal_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputGoal_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputGoal_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>()
{
  return "robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>()
{
  return "robotiq_3f_gripper_ros2_interfaces/action/Robotiq3FGripperOutputGoal_Result";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'input_registers'
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_input_registers__traits.hpp"
// Member 'output_registers'
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__traits.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputGoal_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: input_registers
  {
    out << "input_registers: ";
    to_flow_style_yaml(msg.input_registers, out);
    out << ", ";
  }

  // member: output_registers
  {
    out << "output_registers: ";
    to_flow_style_yaml(msg.output_registers, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputGoal_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input_registers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_registers:\n";
    to_block_style_yaml(msg.input_registers, out, indentation + 2);
  }

  // member: output_registers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_registers:\n";
    to_block_style_yaml(msg.output_registers, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputGoal_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>()
{
  return "robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>()
{
  return "robotiq_3f_gripper_ros2_interfaces/action/Robotiq3FGripperOutputGoal_Feedback";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>
  : std::integral_constant<bool, has_fixed_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters>::value && has_fixed_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>::value> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>
  : std::integral_constant<bool, has_bounded_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters>::value && has_bounded_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>::value> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__traits.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputGoal_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputGoal_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputGoal_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request>()
{
  return "robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request>()
{
  return "robotiq_3f_gripper_ros2_interfaces/action/Robotiq3FGripperOutputGoal_SendGoal_Request";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputGoal_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputGoal_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputGoal_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response>()
{
  return "robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response>()
{
  return "robotiq_3f_gripper_ros2_interfaces/action/Robotiq3FGripperOutputGoal_SendGoal_Response";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal>()
{
  return "robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal>()
{
  return "robotiq_3f_gripper_ros2_interfaces/action/Robotiq3FGripperOutputGoal_SendGoal";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request>::value &&
    has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request>::value &&
    has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputGoal_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputGoal_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputGoal_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request>()
{
  return "robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request>()
{
  return "robotiq_3f_gripper_ros2_interfaces/action/Robotiq3FGripperOutputGoal_GetResult_Request";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__traits.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputGoal_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputGoal_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputGoal_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response>()
{
  return "robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response>()
{
  return "robotiq_3f_gripper_ros2_interfaces/action/Robotiq3FGripperOutputGoal_GetResult_Response";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>::value> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>::value> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult>()
{
  return "robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult>()
{
  return "robotiq_3f_gripper_ros2_interfaces/action/Robotiq3FGripperOutputGoal_GetResult";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request>::value &&
    has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request>::value &&
    has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response>::value
  >
{
};

template<>
struct is_service<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__traits.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputGoal_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputGoal_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputGoal_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage>()
{
  return "robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage>()
{
  return "robotiq_3f_gripper_ros2_interfaces/action/Robotiq3FGripperOutputGoal_FeedbackMessage";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal>
  : std::true_type
{
};

template<>
struct is_action_goal<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__TRAITS_HPP_
