// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serving_robot_msgs:msg/TotalPrice2C.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__BUILDER_HPP_
#define SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serving_robot_msgs/msg/detail/total_price2_c__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serving_robot_msgs
{

namespace msg
{

namespace builder
{

class Init_TotalPrice2C_price
{
public:
  Init_TotalPrice2C_price()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::serving_robot_msgs::msg::TotalPrice2C price(::serving_robot_msgs::msg::TotalPrice2C::_price_type arg)
  {
    msg_.price = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::msg::TotalPrice2C msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::msg::TotalPrice2C>()
{
  return serving_robot_msgs::msg::builder::Init_TotalPrice2C_price();
}

}  // namespace serving_robot_msgs

#endif  // SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__BUILDER_HPP_
