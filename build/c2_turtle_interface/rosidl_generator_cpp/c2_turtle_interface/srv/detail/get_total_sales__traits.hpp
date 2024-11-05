// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from c2_turtle_interface:srv/GetTotalSales.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__TRAITS_HPP_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "c2_turtle_interface/srv/detail/get_total_sales__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace c2_turtle_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTotalSales_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: date
  {
    out << "date: ";
    rosidl_generator_traits::value_to_yaml(msg.date, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTotalSales_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "date: ";
    rosidl_generator_traits::value_to_yaml(msg.date, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTotalSales_Request & msg, bool use_flow_style = false)
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
  const c2_turtle_interface::srv::GetTotalSales_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  c2_turtle_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use c2_turtle_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const c2_turtle_interface::srv::GetTotalSales_Request & msg)
{
  return c2_turtle_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<c2_turtle_interface::srv::GetTotalSales_Request>()
{
  return "c2_turtle_interface::srv::GetTotalSales_Request";
}

template<>
inline const char * name<c2_turtle_interface::srv::GetTotalSales_Request>()
{
  return "c2_turtle_interface/srv/GetTotalSales_Request";
}

template<>
struct has_fixed_size<c2_turtle_interface::srv::GetTotalSales_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<c2_turtle_interface::srv::GetTotalSales_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<c2_turtle_interface::srv::GetTotalSales_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace c2_turtle_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTotalSales_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: total_sales
  {
    out << "total_sales: ";
    rosidl_generator_traits::value_to_yaml(msg.total_sales, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTotalSales_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: total_sales
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_sales: ";
    rosidl_generator_traits::value_to_yaml(msg.total_sales, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTotalSales_Response & msg, bool use_flow_style = false)
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
  const c2_turtle_interface::srv::GetTotalSales_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  c2_turtle_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use c2_turtle_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const c2_turtle_interface::srv::GetTotalSales_Response & msg)
{
  return c2_turtle_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<c2_turtle_interface::srv::GetTotalSales_Response>()
{
  return "c2_turtle_interface::srv::GetTotalSales_Response";
}

template<>
inline const char * name<c2_turtle_interface::srv::GetTotalSales_Response>()
{
  return "c2_turtle_interface/srv/GetTotalSales_Response";
}

template<>
struct has_fixed_size<c2_turtle_interface::srv::GetTotalSales_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<c2_turtle_interface::srv::GetTotalSales_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<c2_turtle_interface::srv::GetTotalSales_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<c2_turtle_interface::srv::GetTotalSales>()
{
  return "c2_turtle_interface::srv::GetTotalSales";
}

template<>
inline const char * name<c2_turtle_interface::srv::GetTotalSales>()
{
  return "c2_turtle_interface/srv/GetTotalSales";
}

template<>
struct has_fixed_size<c2_turtle_interface::srv::GetTotalSales>
  : std::integral_constant<
    bool,
    has_fixed_size<c2_turtle_interface::srv::GetTotalSales_Request>::value &&
    has_fixed_size<c2_turtle_interface::srv::GetTotalSales_Response>::value
  >
{
};

template<>
struct has_bounded_size<c2_turtle_interface::srv::GetTotalSales>
  : std::integral_constant<
    bool,
    has_bounded_size<c2_turtle_interface::srv::GetTotalSales_Request>::value &&
    has_bounded_size<c2_turtle_interface::srv::GetTotalSales_Response>::value
  >
{
};

template<>
struct is_service<c2_turtle_interface::srv::GetTotalSales>
  : std::true_type
{
};

template<>
struct is_service_request<c2_turtle_interface::srv::GetTotalSales_Request>
  : std::true_type
{
};

template<>
struct is_service_response<c2_turtle_interface::srv::GetTotalSales_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__TRAITS_HPP_
