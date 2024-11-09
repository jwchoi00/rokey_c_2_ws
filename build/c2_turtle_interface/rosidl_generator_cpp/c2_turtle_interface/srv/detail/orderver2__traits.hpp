// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from c2_turtle_interface:srv/Orderver2.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__ORDERVER2__TRAITS_HPP_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__ORDERVER2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "c2_turtle_interface/srv/detail/orderver2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace c2_turtle_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Orderver2_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: table_number
  {
    out << "table_number: ";
    rosidl_generator_traits::value_to_yaml(msg.table_number, out);
    out << ", ";
  }

  // member: menu_name
  {
    if (msg.menu_name.size() == 0) {
      out << "menu_name: []";
    } else {
      out << "menu_name: [";
      size_t pending_items = msg.menu_name.size();
      for (auto item : msg.menu_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: quantity
  {
    if (msg.quantity.size() == 0) {
      out << "quantity: []";
    } else {
      out << "quantity: [";
      size_t pending_items = msg.quantity.size();
      for (auto item : msg.quantity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const Orderver2_Request & msg,
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

  // member: menu_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.menu_name.size() == 0) {
      out << "menu_name: []\n";
    } else {
      out << "menu_name:\n";
      for (auto item : msg.menu_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: quantity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quantity.size() == 0) {
      out << "quantity: []\n";
    } else {
      out << "quantity:\n";
      for (auto item : msg.quantity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const Orderver2_Request & msg, bool use_flow_style = false)
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
  const c2_turtle_interface::srv::Orderver2_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  c2_turtle_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use c2_turtle_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const c2_turtle_interface::srv::Orderver2_Request & msg)
{
  return c2_turtle_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<c2_turtle_interface::srv::Orderver2_Request>()
{
  return "c2_turtle_interface::srv::Orderver2_Request";
}

template<>
inline const char * name<c2_turtle_interface::srv::Orderver2_Request>()
{
  return "c2_turtle_interface/srv/Orderver2_Request";
}

template<>
struct has_fixed_size<c2_turtle_interface::srv::Orderver2_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<c2_turtle_interface::srv::Orderver2_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<c2_turtle_interface::srv::Orderver2_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace c2_turtle_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Orderver2_Response & msg,
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
  const Orderver2_Response & msg,
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

inline std::string to_yaml(const Orderver2_Response & msg, bool use_flow_style = false)
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
  const c2_turtle_interface::srv::Orderver2_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  c2_turtle_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use c2_turtle_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const c2_turtle_interface::srv::Orderver2_Response & msg)
{
  return c2_turtle_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<c2_turtle_interface::srv::Orderver2_Response>()
{
  return "c2_turtle_interface::srv::Orderver2_Response";
}

template<>
inline const char * name<c2_turtle_interface::srv::Orderver2_Response>()
{
  return "c2_turtle_interface/srv/Orderver2_Response";
}

template<>
struct has_fixed_size<c2_turtle_interface::srv::Orderver2_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<c2_turtle_interface::srv::Orderver2_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<c2_turtle_interface::srv::Orderver2_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<c2_turtle_interface::srv::Orderver2>()
{
  return "c2_turtle_interface::srv::Orderver2";
}

template<>
inline const char * name<c2_turtle_interface::srv::Orderver2>()
{
  return "c2_turtle_interface/srv/Orderver2";
}

template<>
struct has_fixed_size<c2_turtle_interface::srv::Orderver2>
  : std::integral_constant<
    bool,
    has_fixed_size<c2_turtle_interface::srv::Orderver2_Request>::value &&
    has_fixed_size<c2_turtle_interface::srv::Orderver2_Response>::value
  >
{
};

template<>
struct has_bounded_size<c2_turtle_interface::srv::Orderver2>
  : std::integral_constant<
    bool,
    has_bounded_size<c2_turtle_interface::srv::Orderver2_Request>::value &&
    has_bounded_size<c2_turtle_interface::srv::Orderver2_Response>::value
  >
{
};

template<>
struct is_service<c2_turtle_interface::srv::Orderver2>
  : std::true_type
{
};

template<>
struct is_service_request<c2_turtle_interface::srv::Orderver2_Request>
  : std::true_type
{
};

template<>
struct is_service_response<c2_turtle_interface::srv::Orderver2_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__ORDERVER2__TRAITS_HPP_
