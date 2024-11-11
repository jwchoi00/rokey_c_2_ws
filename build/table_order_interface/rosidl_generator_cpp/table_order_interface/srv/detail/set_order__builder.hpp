// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from table_order_interface:srv/SetOrder.idl
// generated code does not contain a copyright notice

#ifndef TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__BUILDER_HPP_
#define TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "table_order_interface/srv/detail/set_order__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace table_order_interface
{

namespace srv
{

namespace builder
{

class Init_SetOrder_Request_price
{
public:
  explicit Init_SetOrder_Request_price(::table_order_interface::srv::SetOrder_Request & msg)
  : msg_(msg)
  {}
  ::table_order_interface::srv::SetOrder_Request price(::table_order_interface::srv::SetOrder_Request::_price_type arg)
  {
    msg_.price = std::move(arg);
    return std::move(msg_);
  }

private:
  ::table_order_interface::srv::SetOrder_Request msg_;
};

class Init_SetOrder_Request_menu_number
{
public:
  explicit Init_SetOrder_Request_menu_number(::table_order_interface::srv::SetOrder_Request & msg)
  : msg_(msg)
  {}
  Init_SetOrder_Request_price menu_number(::table_order_interface::srv::SetOrder_Request::_menu_number_type arg)
  {
    msg_.menu_number = std::move(arg);
    return Init_SetOrder_Request_price(msg_);
  }

private:
  ::table_order_interface::srv::SetOrder_Request msg_;
};

class Init_SetOrder_Request_menu
{
public:
  explicit Init_SetOrder_Request_menu(::table_order_interface::srv::SetOrder_Request & msg)
  : msg_(msg)
  {}
  Init_SetOrder_Request_menu_number menu(::table_order_interface::srv::SetOrder_Request::_menu_type arg)
  {
    msg_.menu = std::move(arg);
    return Init_SetOrder_Request_menu_number(msg_);
  }

private:
  ::table_order_interface::srv::SetOrder_Request msg_;
};

class Init_SetOrder_Request_table_number
{
public:
  Init_SetOrder_Request_table_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetOrder_Request_menu table_number(::table_order_interface::srv::SetOrder_Request::_table_number_type arg)
  {
    msg_.table_number = std::move(arg);
    return Init_SetOrder_Request_menu(msg_);
  }

private:
  ::table_order_interface::srv::SetOrder_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::table_order_interface::srv::SetOrder_Request>()
{
  return table_order_interface::srv::builder::Init_SetOrder_Request_table_number();
}

}  // namespace table_order_interface


namespace table_order_interface
{

namespace srv
{

namespace builder
{

class Init_SetOrder_Response_succeed
{
public:
  Init_SetOrder_Response_succeed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::table_order_interface::srv::SetOrder_Response succeed(::table_order_interface::srv::SetOrder_Response::_succeed_type arg)
  {
    msg_.succeed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::table_order_interface::srv::SetOrder_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::table_order_interface::srv::SetOrder_Response>()
{
  return table_order_interface::srv::builder::Init_SetOrder_Response_succeed();
}

}  // namespace table_order_interface

#endif  // TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__BUILDER_HPP_
