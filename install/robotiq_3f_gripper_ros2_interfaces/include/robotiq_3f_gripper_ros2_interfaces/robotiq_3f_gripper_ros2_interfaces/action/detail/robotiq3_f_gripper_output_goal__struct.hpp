// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:action/Robotiq3FGripperOutputGoal.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__STRUCT_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'output_registers_goal'
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputGoal_Goal_
{
  using Type = Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputGoal_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output_registers_goal(_init)
  {
    (void)_init;
  }

  explicit Robotiq3FGripperOutputGoal_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output_registers_goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _output_registers_goal_type =
    robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator>;
  _output_registers_goal_type output_registers_goal;

  // setters for named parameter idiom
  Type & set__output_registers_goal(
    const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator> & _arg)
  {
    this->output_registers_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Goal
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputGoal_Goal_ & other) const
  {
    if (this->output_registers_goal != other.output_registers_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputGoal_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputGoal_Goal_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputGoal_Goal =
  robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputGoal_Result_
{
  using Type = Robotiq3FGripperOutputGoal_Result_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputGoal_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit Robotiq3FGripperOutputGoal_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Result
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputGoal_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputGoal_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputGoal_Result_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputGoal_Result =
  robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


// Include directives for member types
// Member 'input_registers'
#include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_input_registers__struct.hpp"
// Member 'output_registers'
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/msg/detail/robotiq3_f_gripper_output_registers__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputGoal_Feedback_
{
  using Type = Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputGoal_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_registers(_init),
    output_registers(_init)
  {
    (void)_init;
  }

  explicit Robotiq3FGripperOutputGoal_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_registers(_alloc, _init),
    output_registers(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _input_registers_type =
    robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator>;
  _input_registers_type input_registers;
  using _output_registers_type =
    robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator>;
  _output_registers_type output_registers;

  // setters for named parameter idiom
  Type & set__input_registers(
    const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperInputRegisters_<ContainerAllocator> & _arg)
  {
    this->input_registers = _arg;
    return *this;
  }
  Type & set__output_registers(
    const robotiq_3f_gripper_ros2_interfaces::msg::Robotiq3FGripperOutputRegisters_<ContainerAllocator> & _arg)
  {
    this->output_registers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_Feedback
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputGoal_Feedback_ & other) const
  {
    if (this->input_registers != other.input_registers) {
      return false;
    }
    if (this->output_registers != other.output_registers) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputGoal_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputGoal_Feedback_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputGoal_Feedback =
  robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputGoal_SendGoal_Request_
{
  using Type = Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputGoal_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Robotiq3FGripperOutputGoal_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Request
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputGoal_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputGoal_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputGoal_SendGoal_Request_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputGoal_SendGoal_Request =
  robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputGoal_SendGoal_Response_
{
  using Type = Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputGoal_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Robotiq3FGripperOutputGoal_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_SendGoal_Response
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputGoal_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputGoal_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputGoal_SendGoal_Response_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputGoal_SendGoal_Response =
  robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

struct Robotiq3FGripperOutputGoal_SendGoal
{
  using Request = robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request;
  using Response = robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response;
};

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputGoal_GetResult_Request_
{
  using Type = Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputGoal_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Robotiq3FGripperOutputGoal_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Request
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputGoal_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputGoal_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputGoal_GetResult_Request_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputGoal_GetResult_Request =
  robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputGoal_GetResult_Response_
{
  using Type = Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputGoal_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Robotiq3FGripperOutputGoal_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_GetResult_Response
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputGoal_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputGoal_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputGoal_GetResult_Response_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputGoal_GetResult_Response =
  robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

struct Robotiq3FGripperOutputGoal_GetResult
{
  using Request = robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request;
  using Response = robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response;
};

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage __declspec(deprecated)
#endif

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Robotiq3FGripperOutputGoal_FeedbackMessage_
{
  using Type = Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator>;

  explicit Robotiq3FGripperOutputGoal_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Robotiq3FGripperOutputGoal_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_3f_gripper_ros2_interfaces__action__Robotiq3FGripperOutputGoal_FeedbackMessage
    std::shared_ptr<robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robotiq3FGripperOutputGoal_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robotiq3FGripperOutputGoal_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robotiq3FGripperOutputGoal_FeedbackMessage_

// alias to use template instance with default allocator
using Robotiq3FGripperOutputGoal_FeedbackMessage =
  robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

struct Robotiq3FGripperOutputGoal
{
  /// The goal message defined in the action definition.
  using Goal = robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal;
  /// The result message defined in the action definition.
  using Result = robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result;
  /// The feedback message defined in the action definition.
  using Feedback = robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Robotiq3FGripperOutputGoal Robotiq3FGripperOutputGoal;

}  // namespace action

}  // namespace robotiq_3f_gripper_ros2_interfaces

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__STRUCT_HPP_
