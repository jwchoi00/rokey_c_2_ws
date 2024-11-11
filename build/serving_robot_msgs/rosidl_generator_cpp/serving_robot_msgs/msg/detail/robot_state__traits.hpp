// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from serving_robot_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "serving_robot_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace serving_robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace serving_robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use serving_robot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const serving_robot_msgs::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  serving_robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serving_robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const serving_robot_msgs::msg::RobotState & msg)
{
  return serving_robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<serving_robot_msgs::msg::RobotState>()
{
  return "serving_robot_msgs::msg::RobotState";
}

template<>
inline const char * name<serving_robot_msgs::msg::RobotState>()
{
  return "serving_robot_msgs/msg/RobotState";
}

template<>
struct has_fixed_size<serving_robot_msgs::msg::RobotState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<serving_robot_msgs::msg::RobotState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<serving_robot_msgs::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
