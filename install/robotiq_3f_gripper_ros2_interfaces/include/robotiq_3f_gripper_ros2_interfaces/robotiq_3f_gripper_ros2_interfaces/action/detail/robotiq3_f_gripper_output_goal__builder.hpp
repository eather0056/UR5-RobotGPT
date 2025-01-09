// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotiq_3f_gripper_ros2_interfaces:action/Robotiq3FGripperOutputGoal.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__BUILDER_HPP_
#define ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotiq_3f_gripper_ros2_interfaces/action/detail/robotiq3_f_gripper_output_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_Robotiq3FGripperOutputGoal_Goal_output_registers_goal
{
public:
  Init_Robotiq3FGripperOutputGoal_Goal_output_registers_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal output_registers_goal(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal::_output_registers_goal_type arg)
  {
    msg_.output_registers_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Goal>()
{
  return robotiq_3f_gripper_ros2_interfaces::action::builder::Init_Robotiq3FGripperOutputGoal_Goal_output_registers_goal();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_Robotiq3FGripperOutputGoal_Result_result
{
public:
  Init_Robotiq3FGripperOutputGoal_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result result(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Result>()
{
  return robotiq_3f_gripper_ros2_interfaces::action::builder::Init_Robotiq3FGripperOutputGoal_Result_result();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_Robotiq3FGripperOutputGoal_Feedback_output_registers
{
public:
  explicit Init_Robotiq3FGripperOutputGoal_Feedback_output_registers(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback & msg)
  : msg_(msg)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback output_registers(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback::_output_registers_type arg)
  {
    msg_.output_registers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback msg_;
};

class Init_Robotiq3FGripperOutputGoal_Feedback_input_registers
{
public:
  Init_Robotiq3FGripperOutputGoal_Feedback_input_registers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robotiq3FGripperOutputGoal_Feedback_output_registers input_registers(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback::_input_registers_type arg)
  {
    msg_.input_registers = std::move(arg);
    return Init_Robotiq3FGripperOutputGoal_Feedback_output_registers(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_Feedback>()
{
  return robotiq_3f_gripper_ros2_interfaces::action::builder::Init_Robotiq3FGripperOutputGoal_Feedback_input_registers();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_Robotiq3FGripperOutputGoal_SendGoal_Request_goal
{
public:
  explicit Init_Robotiq3FGripperOutputGoal_SendGoal_Request_goal(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request goal(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request msg_;
};

class Init_Robotiq3FGripperOutputGoal_SendGoal_Request_goal_id
{
public:
  Init_Robotiq3FGripperOutputGoal_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robotiq3FGripperOutputGoal_SendGoal_Request_goal goal_id(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Robotiq3FGripperOutputGoal_SendGoal_Request_goal(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Request>()
{
  return robotiq_3f_gripper_ros2_interfaces::action::builder::Init_Robotiq3FGripperOutputGoal_SendGoal_Request_goal_id();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_Robotiq3FGripperOutputGoal_SendGoal_Response_stamp
{
public:
  explicit Init_Robotiq3FGripperOutputGoal_SendGoal_Response_stamp(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response stamp(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response msg_;
};

class Init_Robotiq3FGripperOutputGoal_SendGoal_Response_accepted
{
public:
  Init_Robotiq3FGripperOutputGoal_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robotiq3FGripperOutputGoal_SendGoal_Response_stamp accepted(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Robotiq3FGripperOutputGoal_SendGoal_Response_stamp(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_SendGoal_Response>()
{
  return robotiq_3f_gripper_ros2_interfaces::action::builder::Init_Robotiq3FGripperOutputGoal_SendGoal_Response_accepted();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_Robotiq3FGripperOutputGoal_GetResult_Request_goal_id
{
public:
  Init_Robotiq3FGripperOutputGoal_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request goal_id(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Request>()
{
  return robotiq_3f_gripper_ros2_interfaces::action::builder::Init_Robotiq3FGripperOutputGoal_GetResult_Request_goal_id();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_Robotiq3FGripperOutputGoal_GetResult_Response_result
{
public:
  explicit Init_Robotiq3FGripperOutputGoal_GetResult_Response_result(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response result(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response msg_;
};

class Init_Robotiq3FGripperOutputGoal_GetResult_Response_status
{
public:
  Init_Robotiq3FGripperOutputGoal_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robotiq3FGripperOutputGoal_GetResult_Response_result status(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Robotiq3FGripperOutputGoal_GetResult_Response_result(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_GetResult_Response>()
{
  return robotiq_3f_gripper_ros2_interfaces::action::builder::Init_Robotiq3FGripperOutputGoal_GetResult_Response_status();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces


namespace robotiq_3f_gripper_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_Robotiq3FGripperOutputGoal_FeedbackMessage_feedback
{
public:
  explicit Init_Robotiq3FGripperOutputGoal_FeedbackMessage_feedback(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage feedback(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage msg_;
};

class Init_Robotiq3FGripperOutputGoal_FeedbackMessage_goal_id
{
public:
  Init_Robotiq3FGripperOutputGoal_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robotiq3FGripperOutputGoal_FeedbackMessage_feedback goal_id(::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Robotiq3FGripperOutputGoal_FeedbackMessage_feedback(msg_);
  }

private:
  ::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_3f_gripper_ros2_interfaces::action::Robotiq3FGripperOutputGoal_FeedbackMessage>()
{
  return robotiq_3f_gripper_ros2_interfaces::action::builder::Init_Robotiq3FGripperOutputGoal_FeedbackMessage_goal_id();
}

}  // namespace robotiq_3f_gripper_ros2_interfaces

#endif  // ROBOTIQ_3F_GRIPPER_ROS2_INTERFACES__ACTION__DETAIL__ROBOTIQ3_F_GRIPPER_OUTPUT_GOAL__BUILDER_HPP_
