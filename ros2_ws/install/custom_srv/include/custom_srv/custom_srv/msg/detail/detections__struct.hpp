// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_srv:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__MSG__DETAIL__DETECTIONS__STRUCT_HPP_
#define CUSTOM_SRV__MSG__DETAIL__DETECTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'detections'
#include "custom_srv/msg/detail/detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_srv__msg__Detections __attribute__((deprecated))
#else
# define DEPRECATED__custom_srv__msg__Detections __declspec(deprecated)
#endif

namespace custom_srv
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detections_
{
  using Type = Detections_<ContainerAllocator>;

  explicit Detections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Detections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _detections_type =
    std::vector<custom_srv::msg::Detection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_srv::msg::Detection_<ContainerAllocator>>>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__detections(
    const std::vector<custom_srv::msg::Detection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_srv::msg::Detection_<ContainerAllocator>>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_srv::msg::Detections_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_srv::msg::Detections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_srv::msg::Detections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_srv::msg::Detections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_srv::msg::Detections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_srv::msg::Detections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_srv::msg::Detections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_srv::msg::Detections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_srv::msg::Detections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_srv::msg::Detections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_srv__msg__Detections
    std::shared_ptr<custom_srv::msg::Detections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_srv__msg__Detections
    std::shared_ptr<custom_srv::msg::Detections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detections_ & other) const
  {
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detections_

// alias to use template instance with default allocator
using Detections =
  custom_srv::msg::Detections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_srv

#endif  // CUSTOM_SRV__MSG__DETAIL__DETECTIONS__STRUCT_HPP_
