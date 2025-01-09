// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_srv:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__MSG__DETAIL__DETECTIONS__BUILDER_HPP_
#define CUSTOM_SRV__MSG__DETAIL__DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_srv/msg/detail/detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_srv
{

namespace msg
{

namespace builder
{

class Init_Detections_detections
{
public:
  Init_Detections_detections()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_srv::msg::Detections detections(::custom_srv::msg::Detections::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_srv::msg::Detections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_srv::msg::Detections>()
{
  return custom_srv::msg::builder::Init_Detections_detections();
}

}  // namespace custom_srv

#endif  // CUSTOM_SRV__MSG__DETAIL__DETECTIONS__BUILDER_HPP_
