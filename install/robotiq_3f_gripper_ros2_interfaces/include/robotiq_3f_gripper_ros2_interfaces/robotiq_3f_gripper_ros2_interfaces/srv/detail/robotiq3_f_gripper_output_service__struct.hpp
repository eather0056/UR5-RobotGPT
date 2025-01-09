// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:srv/Robotiq3FGripperOutputService.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__STRUCT_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'output_registers'
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Request __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputService_Request_
{
  using Type = Robotiq3FGripperOutputService_Request_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output_registers(_init)
  {
    (void)_init;
  }

  explicit Robotiq3FGripperOutputService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output_registers(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _output_registers_type =
    robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator>;
  _output_registers_type output_registers;

  // setters for named parameter idiom
  Type & set__output_registers(
    const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator> & _arg)
  {
    this->output_registers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Request
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Request
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputService_Request_ & other) const
  {
    if (this->output_registers != other.output_registers) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputService_Request_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputService_Request =
  robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotiq_3f_gripper_ros2_interfaces


#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Response __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputService_Response_
{
  using Type = Robotiq3FGripperOutputService_Response_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Robotiq3FGripperOutputService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Response
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__srv__Robotiq3FGripperOutputService_Response
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputService_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputService_Response_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputService_Response =
  robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace srv
{

struct Robotiq3FGripperOutputService
{
  using Request = robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Request;
  using Response = robotiq_3f_gripper_ros2_interfaces::srv::Robotiq3FGripperOutputService_Response;
};

}  // namespace srv

}  // namespace robotiq_3f_gripper_ros2_interfaces

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__SRV__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_SERVICE__STRUCT_HPP_
