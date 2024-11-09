// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serving_robot_msgs:srv/T2C.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__BUILDER_HPP_
#define SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serving_robot_msgs/srv/detail/t2_c__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serving_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_T2C_Request_price
{
public:
  explicit Init_T2C_Request_price(::serving_robot_msgs::srv::T2C_Request & msg)
  : msg_(msg)
  {}
  ::serving_robot_msgs::srv::T2C_Request price(::serving_robot_msgs::srv::T2C_Request::_price_type arg)
  {
    msg_.price = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::srv::T2C_Request msg_;
};

class Init_T2C_Request_menu_number
{
public:
  explicit Init_T2C_Request_menu_number(::serving_robot_msgs::srv::T2C_Request & msg)
  : msg_(msg)
  {}
  Init_T2C_Request_price menu_number(::serving_robot_msgs::srv::T2C_Request::_menu_number_type arg)
  {
    msg_.menu_number = std::move(arg);
    return Init_T2C_Request_price(msg_);
  }

private:
  ::serving_robot_msgs::srv::T2C_Request msg_;
};

class Init_T2C_Request_menu
{
public:
  explicit Init_T2C_Request_menu(::serving_robot_msgs::srv::T2C_Request & msg)
  : msg_(msg)
  {}
  Init_T2C_Request_menu_number menu(::serving_robot_msgs::srv::T2C_Request::_menu_type arg)
  {
    msg_.menu = std::move(arg);
    return Init_T2C_Request_menu_number(msg_);
  }

private:
  ::serving_robot_msgs::srv::T2C_Request msg_;
};

class Init_T2C_Request_table_number
{
public:
  Init_T2C_Request_table_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_T2C_Request_menu table_number(::serving_robot_msgs::srv::T2C_Request::_table_number_type arg)
  {
    msg_.table_number = std::move(arg);
    return Init_T2C_Request_menu(msg_);
  }

private:
  ::serving_robot_msgs::srv::T2C_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::srv::T2C_Request>()
{
  return serving_robot_msgs::srv::builder::Init_T2C_Request_table_number();
}

}  // namespace serving_robot_msgs


namespace serving_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_T2C_Response_succeed
{
public:
  Init_T2C_Response_succeed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::serving_robot_msgs::srv::T2C_Response succeed(::serving_robot_msgs::srv::T2C_Response::_succeed_type arg)
  {
    msg_.succeed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::srv::T2C_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::srv::T2C_Response>()
{
  return serving_robot_msgs::srv::builder::Init_T2C_Response_succeed();
}

}  // namespace serving_robot_msgs

#endif  // SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__BUILDER_HPP_
