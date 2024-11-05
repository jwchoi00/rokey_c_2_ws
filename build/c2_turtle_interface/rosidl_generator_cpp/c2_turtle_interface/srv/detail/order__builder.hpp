// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from c2_turtle_interface:srv/Order.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__ORDER__BUILDER_HPP_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__ORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "c2_turtle_interface/srv/detail/order__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace c2_turtle_interface
{

namespace srv
{

namespace builder
{

class Init_Order_Request_total_price
{
public:
  explicit Init_Order_Request_total_price(::c2_turtle_interface::srv::Order_Request & msg)
  : msg_(msg)
  {}
  ::c2_turtle_interface::srv::Order_Request total_price(::c2_turtle_interface::srv::Order_Request::_total_price_type arg)
  {
    msg_.total_price = std::move(arg);
    return std::move(msg_);
  }

private:
  ::c2_turtle_interface::srv::Order_Request msg_;
};

class Init_Order_Request_quantity
{
public:
  explicit Init_Order_Request_quantity(::c2_turtle_interface::srv::Order_Request & msg)
  : msg_(msg)
  {}
  Init_Order_Request_total_price quantity(::c2_turtle_interface::srv::Order_Request::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return Init_Order_Request_total_price(msg_);
  }

private:
  ::c2_turtle_interface::srv::Order_Request msg_;
};

class Init_Order_Request_menu_item
{
public:
  explicit Init_Order_Request_menu_item(::c2_turtle_interface::srv::Order_Request & msg)
  : msg_(msg)
  {}
  Init_Order_Request_quantity menu_item(::c2_turtle_interface::srv::Order_Request::_menu_item_type arg)
  {
    msg_.menu_item = std::move(arg);
    return Init_Order_Request_quantity(msg_);
  }

private:
  ::c2_turtle_interface::srv::Order_Request msg_;
};

class Init_Order_Request_table_number
{
public:
  Init_Order_Request_table_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Order_Request_menu_item table_number(::c2_turtle_interface::srv::Order_Request::_table_number_type arg)
  {
    msg_.table_number = std::move(arg);
    return Init_Order_Request_menu_item(msg_);
  }

private:
  ::c2_turtle_interface::srv::Order_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::c2_turtle_interface::srv::Order_Request>()
{
  return c2_turtle_interface::srv::builder::Init_Order_Request_table_number();
}

}  // namespace c2_turtle_interface


namespace c2_turtle_interface
{

namespace srv
{

namespace builder
{

class Init_Order_Response_success
{
public:
  Init_Order_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::c2_turtle_interface::srv::Order_Response success(::c2_turtle_interface::srv::Order_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::c2_turtle_interface::srv::Order_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::c2_turtle_interface::srv::Order_Response>()
{
  return c2_turtle_interface::srv::builder::Init_Order_Response_success();
}

}  // namespace c2_turtle_interface

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__ORDER__BUILDER_HPP_
