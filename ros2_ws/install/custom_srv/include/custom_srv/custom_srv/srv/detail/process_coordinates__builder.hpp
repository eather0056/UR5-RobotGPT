// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_srv:srv/ProcessCoordinates.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__BUILDER_HPP_
#define CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_srv/srv/detail/process_coordinates__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_srv
{

namespace srv
{

namespace builder
{

class Init_ProcessCoordinates_Request_y
{
public:
  explicit Init_ProcessCoordinates_Request_y(::custom_srv::srv::ProcessCoordinates_Request & msg)
  : msg_(msg)
  {}
  ::custom_srv::srv::ProcessCoordinates_Request y(::custom_srv::srv::ProcessCoordinates_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_srv::srv::ProcessCoordinates_Request msg_;
};

class Init_ProcessCoordinates_Request_x
{
public:
  Init_ProcessCoordinates_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessCoordinates_Request_y x(::custom_srv::srv::ProcessCoordinates_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ProcessCoordinates_Request_y(msg_);
  }

private:
  ::custom_srv::srv::ProcessCoordinates_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_srv::srv::ProcessCoordinates_Request>()
{
  return custom_srv::srv::builder::Init_ProcessCoordinates_Request_x();
}

}  // namespace custom_srv


namespace custom_srv
{

namespace srv
{

namespace builder
{

class Init_ProcessCoordinates_Response_depth
{
public:
  Init_ProcessCoordinates_Response_depth()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_srv::srv::ProcessCoordinates_Response depth(::custom_srv::srv::ProcessCoordinates_Response::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_srv::srv::ProcessCoordinates_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_srv::srv::ProcessCoordinates_Response>()
{
  return custom_srv::srv::builder::Init_ProcessCoordinates_Response_depth();
}

}  // namespace custom_srv

#endif  // CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__BUILDER_HPP_
