// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serving_robot_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serving_robot_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serving_robot_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotState_state
{
public:
  Init_RobotState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::serving_robot_msgs::msg::RobotState state(::serving_robot_msgs::msg::RobotState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::msg::RobotState>()
{
  return serving_robot_msgs::msg::builder::Init_RobotState_state();
}

}  // namespace serving_robot_msgs

#endif  // SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
