// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from serving_robot_msgs:msg/TotalPrice2C.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__TRAITS_HPP_
#define SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "serving_robot_msgs/msg/detail/total_price2_c__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace serving_robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TotalPrice2C & msg,
  std::ostream & out)
{
  out << "{";
  // member: price
  {
    out << "price: ";
    rosidl_generator_traits::value_to_yaml(msg.price, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TotalPrice2C & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: price
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "price: ";
    rosidl_generator_traits::value_to_yaml(msg.price, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TotalPrice2C & msg, bool use_flow_style = false)
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
  const serving_robot_msgs::msg::TotalPrice2C & msg,
  std::ostream & out, size_t indentation = 0)
{
  serving_robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serving_robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const serving_robot_msgs::msg::TotalPrice2C & msg)
{
  return serving_robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<serving_robot_msgs::msg::TotalPrice2C>()
{
  return "serving_robot_msgs::msg::TotalPrice2C";
}

template<>
inline const char * name<serving_robot_msgs::msg::TotalPrice2C>()
{
  return "serving_robot_msgs/msg/TotalPrice2C";
}

template<>
struct has_fixed_size<serving_robot_msgs::msg::TotalPrice2C>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<serving_robot_msgs::msg::TotalPrice2C>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<serving_robot_msgs::msg::TotalPrice2C>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__TRAITS_HPP_
