// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_srv:srv/ProcessCoordinates.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__STRUCT_HPP_
#define CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_srv__srv__ProcessCoordinates_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_srv__srv__ProcessCoordinates_Request __declspec(deprecated)
#endif

namespace custom_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProcessCoordinates_Request_
{
  using Type = ProcessCoordinates_Request_<ContainerAllocator>;

  explicit ProcessCoordinates_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
    }
  }

  explicit ProcessCoordinates_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
    }
  }

  // field types and members
  using _x_type =
    int64_t;
  _x_type x;
  using _y_type =
    int64_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const int64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_srv__srv__ProcessCoordinates_Request
    std::shared_ptr<custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_srv__srv__ProcessCoordinates_Request
    std::shared_ptr<custom_srv::srv::ProcessCoordinates_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessCoordinates_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessCoordinates_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessCoordinates_Request_

// alias to use template instance with default allocator
using ProcessCoordinates_Request =
  custom_srv::srv::ProcessCoordinates_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_srv


#ifndef _WIN32
# define DEPRECATED__custom_srv__srv__ProcessCoordinates_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_srv__srv__ProcessCoordinates_Response __declspec(deprecated)
#endif

namespace custom_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProcessCoordinates_Response_
{
  using Type = ProcessCoordinates_Response_<ContainerAllocator>;

  explicit ProcessCoordinates_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth = 0.0;
    }
  }

  explicit ProcessCoordinates_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth = 0.0;
    }
  }

  // field types and members
  using _depth_type =
    double;
  _depth_type depth;

  // setters for named parameter idiom
  Type & set__depth(
    const double & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_srv__srv__ProcessCoordinates_Response
    std::shared_ptr<custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_srv__srv__ProcessCoordinates_Response
    std::shared_ptr<custom_srv::srv::ProcessCoordinates_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessCoordinates_Response_ & other) const
  {
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessCoordinates_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessCoordinates_Response_

// alias to use template instance with default allocator
using ProcessCoordinates_Response =
  custom_srv::srv::ProcessCoordinates_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_srv

namespace custom_srv
{

namespace srv
{

struct ProcessCoordinates
{
  using Request = custom_srv::srv::ProcessCoordinates_Request;
  using Response = custom_srv::srv::ProcessCoordinates_Response;
};

}  // namespace srv

}  // namespace custom_srv

#endif  // CUSTOM_SRV__SRV__DETAIL__PROCESS_COORDINATES__STRUCT_HPP_
