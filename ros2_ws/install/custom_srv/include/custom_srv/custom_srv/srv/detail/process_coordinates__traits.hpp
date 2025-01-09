// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_srv:srv/ProcessCoordinates.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__TRAITS_HPP_
#define CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_srv/srv/detail/process_coordinates__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProcessCoordinates_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessCoordinates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessCoordinates_Request & msg, bool use_flow_style = false)
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

}  // namespace custom_srv

namespace rosidl_generator_traits
{

[[deprecated("use custom_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_srv::srv::ProcessCoordinates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_srv::srv::ProcessCoordinates_Request & msg)
{
  return custom_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_srv::srv::ProcessCoordinates_Request>()
{
  return "custom_srv::srv::ProcessCoordinates_Request";
}

template<>
inline const char * name<custom_srv::srv::ProcessCoordinates_Request>()
{
  return "custom_srv/srv/ProcessCoordinates_Request";
}

template<>
struct has_fixed_size<custom_srv::srv::ProcessCoordinates_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_srv::srv::ProcessCoordinates_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_srv::srv::ProcessCoordinates_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProcessCoordinates_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessCoordinates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessCoordinates_Response & msg, bool use_flow_style = false)
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

}  // namespace custom_srv

namespace rosidl_generator_traits
{

[[deprecated("use custom_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_srv::srv::ProcessCoordinates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_srv::srv::ProcessCoordinates_Response & msg)
{
  return custom_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_srv::srv::ProcessCoordinates_Response>()
{
  return "custom_srv::srv::ProcessCoordinates_Response";
}

template<>
inline const char * name<custom_srv::srv::ProcessCoordinates_Response>()
{
  return "custom_srv/srv/ProcessCoordinates_Response";
}

template<>
struct has_fixed_size<custom_srv::srv::ProcessCoordinates_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_srv::srv::ProcessCoordinates_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_srv::srv::ProcessCoordinates_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_srv::srv::ProcessCoordinates>()
{
  return "custom_srv::srv::ProcessCoordinates";
}

template<>
inline const char * name<custom_srv::srv::ProcessCoordinates>()
{
  return "custom_srv/srv/ProcessCoordinates";
}

template<>
struct has_fixed_size<custom_srv::srv::ProcessCoordinates>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_srv::srv::ProcessCoordinates_Request>::value &&
    has_fixed_size<custom_srv::srv::ProcessCoordinates_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_srv::srv::ProcessCoordinates>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_srv::srv::ProcessCoordinates_Request>::value &&
    has_bounded_size<custom_srv::srv::ProcessCoordinates_Response>::value
  >
{
};

template<>
struct is_service<custom_srv::srv::ProcessCoordinates>
  : std::true_type
{
};

template<>
struct is_service_request<custom_srv::srv::ProcessCoordinates_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_srv::srv::ProcessCoordinates_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__TRAITS_HPP_
