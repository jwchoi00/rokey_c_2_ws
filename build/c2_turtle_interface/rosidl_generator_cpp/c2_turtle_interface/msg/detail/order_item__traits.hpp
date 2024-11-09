// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from c2_turtle_interface:msg/OrderItem.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__TRAITS_HPP_
#define C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "c2_turtle_interface/msg/detail/order_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace c2_turtle_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const OrderItem & msg,
  std::ostream & out)
{
  out << "{";
  // member: menu_item
  {
    out << "menu_item: ";
    rosidl_generator_traits::value_to_yaml(msg.menu_item, out);
    out << ", ";
  }

  // member: quantity
  {
    out << "quantity: ";
    rosidl_generator_traits::value_to_yaml(msg.quantity, out);
    out << ", ";
  }

  // member: price
  {
    out << "price: ";
    rosidl_generator_traits::value_to_yaml(msg.price, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OrderItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: menu_item
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "menu_item: ";
    rosidl_generator_traits::value_to_yaml(msg.menu_item, out);
    out << "\n";
  }

  // member: quantity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quantity: ";
    rosidl_generator_traits::value_to_yaml(msg.quantity, out);
    out << "\n";
  }

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

inline std::string to_yaml(const OrderItem & msg, bool use_flow_style = false)
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

}  // namespace c2_turtle_interface

namespace rosidl_generator_traits
{

[[deprecated("use c2_turtle_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const c2_turtle_interface::msg::OrderItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  c2_turtle_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use c2_turtle_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const c2_turtle_interface::msg::OrderItem & msg)
{
  return c2_turtle_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<c2_turtle_interface::msg::OrderItem>()
{
  return "c2_turtle_interface::msg::OrderItem";
}

template<>
inline const char * name<c2_turtle_interface::msg::OrderItem>()
{
  return "c2_turtle_interface/msg/OrderItem";
}

template<>
struct has_fixed_size<c2_turtle_interface::msg::OrderItem>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<c2_turtle_interface::msg::OrderItem>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<c2_turtle_interface::msg::OrderItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__TRAITS_HPP_
