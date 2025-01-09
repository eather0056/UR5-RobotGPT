// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:srv/Robotiq3FGripperOutputService.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__TRAITS_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotiq_3f_gripper_ros2_interfaces/srv/detail/robotiq3_f_gripper_output_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'output_registers'
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__traits.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: output_registers
  {
    out << "output_registers: ";
    to_flow_style_yaml(msg.output_registers, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output_registers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_registers:\n";
    to_block_style_yaml(msg.output_registers, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request>()
{
  return "robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request>()
{
  return "robotiq_3f_gripper_ros2_interfaces/srv/Robotiq3FGripperOutputService_Request";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request>
  : std::integral_constant<bool, has_fixed_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>::value> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request>
  : std::integral_constant<bool, has_bounded_size<robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters>::value> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Robotiq3FGripperOutputService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robotiq3FGripperOutputService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robotiq3FGripperOutputService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_3f_gripper_ros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_3f_gripper_ros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response & msg)
{
  return robotiq_3f_gripper_ros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response>()
{
  return "robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response>()
{
  return "robotiq_3f_gripper_ros2_interfaces/srv/Robotiq3FGripperOutputService_Response";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService>()
{
  return "robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService";
}

template<>
inline const char * name<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService>()
{
  return "robotiq_3f_gripper_ros2_interfaces/srv/Robotiq3FGripperOutputService";
}

template<>
struct has_fixed_size<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService>
  : std::integral_constant<
    bool,
    has_fixed_size<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request>::value &&
    has_fixed_size<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService>
  : std::integral_constant<
    bool,
    has_bounded_size<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request>::value &&
    has_bounded_size<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response>::value
  >
{
};

template<>
struct is_service<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService>
  : std::true_type
{
};

template<>
struct is_service_request<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__TRAITS_HPP_
