// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from table_order_interface:srv/SetOrder.idl
// generated code does not contain a copyright notice

#ifndef TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__TRAITS_HPP_
#define TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "table_order_interface/srv/detail/set_order__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace table_order_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetOrder_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: table_number
  {
    out << "table_number: ";
    rosidl_generator_traits::value_to_yaml(msg.table_number, out);
    out << ", ";
  }

  // member: menu
  {
    if (msg.menu.size() == 0) {
      out << "menu: []";
    } else {
      out << "menu: [";
      size_t pending_items = msg.menu.size();
      for (auto item : msg.menu) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: menu_number
  {
    if (msg.menu_number.size() == 0) {
      out << "menu_number: []";
    } else {
      out << "menu_number: [";
      size_t pending_items = msg.menu_number.size();
      for (auto item : msg.menu_number) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const SetOrder_Request & msg,
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

  // member: menu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.menu.size() == 0) {
      out << "menu: []\n";
    } else {
      out << "menu:\n";
      for (auto item : msg.menu) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: menu_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.menu_number.size() == 0) {
      out << "menu_number: []\n";
    } else {
      out << "menu_number:\n";
      for (auto item : msg.menu_number) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const SetOrder_Request & msg, bool use_flow_style = false)
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

}  // namespace table_order_interface

namespace rosidl_generator_traits
{

[[deprecated("use table_order_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const table_order_interface::srv::SetOrder_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  table_order_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use table_order_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const table_order_interface::srv::SetOrder_Request & msg)
{
  return table_order_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<table_order_interface::srv::SetOrder_Request>()
{
  return "table_order_interface::srv::SetOrder_Request";
}

template<>
inline const char * name<table_order_interface::srv::SetOrder_Request>()
{
  return "table_order_interface/srv/SetOrder_Request";
}

template<>
struct has_fixed_size<table_order_interface::srv::SetOrder_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<table_order_interface::srv::SetOrder_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<table_order_interface::srv::SetOrder_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace table_order_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetOrder_Response & msg,
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
  const SetOrder_Response & msg,
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

inline std::string to_yaml(const SetOrder_Response & msg, bool use_flow_style = false)
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

}  // namespace table_order_interface

namespace rosidl_generator_traits
{

[[deprecated("use table_order_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const table_order_interface::srv::SetOrder_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  table_order_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use table_order_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const table_order_interface::srv::SetOrder_Response & msg)
{
  return table_order_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<table_order_interface::srv::SetOrder_Response>()
{
  return "table_order_interface::srv::SetOrder_Response";
}

template<>
inline const char * name<table_order_interface::srv::SetOrder_Response>()
{
  return "table_order_interface/srv/SetOrder_Response";
}

template<>
struct has_fixed_size<table_order_interface::srv::SetOrder_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<table_order_interface::srv::SetOrder_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<table_order_interface::srv::SetOrder_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<table_order_interface::srv::SetOrder>()
{
  return "table_order_interface::srv::SetOrder";
}

template<>
inline const char * name<table_order_interface::srv::SetOrder>()
{
  return "table_order_interface/srv/SetOrder";
}

template<>
struct has_fixed_size<table_order_interface::srv::SetOrder>
  : std::integral_constant<
    bool,
    has_fixed_size<table_order_interface::srv::SetOrder_Request>::value &&
    has_fixed_size<table_order_interface::srv::SetOrder_Response>::value
  >
{
};

template<>
struct has_bounded_size<table_order_interface::srv::SetOrder>
  : std::integral_constant<
    bool,
    has_bounded_size<table_order_interface::srv::SetOrder_Request>::value &&
    has_bounded_size<table_order_interface::srv::SetOrder_Response>::value
  >
{
};

template<>
struct is_service<table_order_interface::srv::SetOrder>
  : std::true_type
{
};

template<>
struct is_service_request<table_order_interface::srv::SetOrder_Request>
  : std::true_type
{
};

template<>
struct is_service_response<table_order_interface::srv::SetOrder_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__TRAITS_HPP_
