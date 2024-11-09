// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from c2_turtle_interface:msg/OrderItem.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__BUILDER_HPP_
#define C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "c2_turtle_interface/msg/detail/order_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace c2_turtle_interface
{

namespace msg
{

namespace builder
{

class Init_OrderItem_price
{
public:
  explicit Init_OrderItem_price(::c2_turtle_interface::msg::OrderItem & msg)
  : msg_(msg)
  {}
  ::c2_turtle_interface::msg::OrderItem price(::c2_turtle_interface::msg::OrderItem::_price_type arg)
  {
    msg_.price = std::move(arg);
    return std::move(msg_);
  }

private:
  ::c2_turtle_interface::msg::OrderItem msg_;
};

class Init_OrderItem_quantity
{
public:
  explicit Init_OrderItem_quantity(::c2_turtle_interface::msg::OrderItem & msg)
  : msg_(msg)
  {}
  Init_OrderItem_price quantity(::c2_turtle_interface::msg::OrderItem::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return Init_OrderItem_price(msg_);
  }

private:
  ::c2_turtle_interface::msg::OrderItem msg_;
};

class Init_OrderItem_menu_item
{
public:
  Init_OrderItem_menu_item()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrderItem_quantity menu_item(::c2_turtle_interface::msg::OrderItem::_menu_item_type arg)
  {
    msg_.menu_item = std::move(arg);
    return Init_OrderItem_quantity(msg_);
  }

private:
  ::c2_turtle_interface::msg::OrderItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::c2_turtle_interface::msg::OrderItem>()
{
  return c2_turtle_interface::msg::builder::Init_OrderItem_menu_item();
}

}  // namespace c2_turtle_interface

#endif  // C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__BUILDER_HPP_
