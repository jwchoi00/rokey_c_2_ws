// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from c2_turtle_interface:srv/Order.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__ORDER__TRAITS_HPP_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__ORDER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "c2_turtle_interface/srv/detail/order__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace c2_turtle_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Order_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: table_number
  {
    out << "table_number: ";
    rosidl_generator_traits::value_to_yaml(msg.table_number, out);
    out << ", ";
  }

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

  // member: total_price
  {
    out << "total_price: ";
    rosidl_generator_traits::value_to_yaml(msg.total_price, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Order_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: table_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "table_number: ";
    rosidl_generator_traits::value_to_yaml(msg.table_number, out);
    out << "\n";
  }

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

  // member: total_price
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_price: ";
    rosidl_generator_traits::value_to_yaml(msg.total_price, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Order_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace c2_turtle_interface

namespace rosidl_generator_traits
{

[[deprecated("use c2_turtle_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const c2_turtle_interface::srv::Order_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  c2_turtle_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use c2_turtle_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const c2_turtle_interface::srv::Order_Request & msg)
{
  return c2_turtle_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<c2_turtle_interface::srv::Order_Request>()
{
  return "c2_turtle_interface::srv::Order_Request";
}

template<>
inline const char * name<c2_turtle_interface::srv::Order_Request>()
{
  return "c2_turtle_interface/srv/Order_Request";
}

template<>
struct has_fixed_size<c2_turtle_interface::srv::Order_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<c2_turtle_interface::srv::Order_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<c2_turtle_interface::srv::Order_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace c2_turtle_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Order_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Order_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Order_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace c2_turtle_interface

namespace rosidl_generator_traits
{

[[deprecated("use c2_turtle_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const c2_turtle_interface::srv::Order_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  c2_turtle_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use c2_turtle_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const c2_turtle_interface::srv::Order_Response & msg)
{
  return c2_turtle_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<c2_turtle_interface::srv::Order_Response>()
{
  return "c2_turtle_interface::srv::Order_Response";
}

template<>
inline const char * name<c2_turtle_interface::srv::Order_Response>()
{
  return "c2_turtle_interface/srv/Order_Response";
}

template<>
struct has_fixed_size<c2_turtle_interface::srv::Order_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<c2_turtle_interface::srv::Order_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<c2_turtle_interface::srv::Order_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<c2_turtle_interface::srv::Order>()
{
  return "c2_turtle_interface::srv::Order";
}

template<>
inline const char * name<c2_turtle_interface::srv::Order>()
{
  return "c2_turtle_interface/srv/Order";
}

template<>
struct has_fixed_size<c2_turtle_interface::srv::Order>
  : std::integral_constant<
    bool,
    has_fixed_size<c2_turtle_interface::srv::Order_Request>::value &&
    has_fixed_size<c2_turtle_interface::srv::Order_Response>::value
  >
{
};

template<>
struct has_bounded_size<c2_turtle_interface::srv::Order>
  : std::integral_constant<
    bool,
    has_bounded_size<c2_turtle_interface::srv::Order_Request>::value &&
    has_bounded_size<c2_turtle_interface::srv::Order_Response>::value
  >
{
};

template<>
struct is_service<c2_turtle_interface::srv::Order>
  : std::true_type
{
};

template<>
struct is_service_request<c2_turtle_interface::srv::Order_Request>
  : std::true_type
{
};

template<>
struct is_service_response<c2_turtle_interface::srv::Order_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__ORDER__TRAITS_HPP_
