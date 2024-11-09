// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from serving_robot_msgs:srv/T2C.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__TRAITS_HPP_
#define SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "serving_robot_msgs/srv/detail/t2_c__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace serving_robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const T2C_Request & msg,
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
  const T2C_Request & msg,
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

inline std::string to_yaml(const T2C_Request & msg, bool use_flow_style = false)
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

}  // namespace serving_robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use serving_robot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const serving_robot_msgs::srv::T2C_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  serving_robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serving_robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const serving_robot_msgs::srv::T2C_Request & msg)
{
  return serving_robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<serving_robot_msgs::srv::T2C_Request>()
{
  return "serving_robot_msgs::srv::T2C_Request";
}

template<>
inline const char * name<serving_robot_msgs::srv::T2C_Request>()
{
  return "serving_robot_msgs/srv/T2C_Request";
}

template<>
struct has_fixed_size<serving_robot_msgs::srv::T2C_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<serving_robot_msgs::srv::T2C_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<serving_robot_msgs::srv::T2C_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace serving_robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const T2C_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: succeed
  {
    out << "succeed: ";
    rosidl_generator_traits::value_to_yaml(msg.succeed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const T2C_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: succeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "succeed: ";
    rosidl_generator_traits::value_to_yaml(msg.succeed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const T2C_Response & msg, bool use_flow_style = false)
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

}  // namespace serving_robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use serving_robot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const serving_robot_msgs::srv::T2C_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  serving_robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serving_robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const serving_robot_msgs::srv::T2C_Response & msg)
{
  return serving_robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<serving_robot_msgs::srv::T2C_Response>()
{
  return "serving_robot_msgs::srv::T2C_Response";
}

template<>
inline const char * name<serving_robot_msgs::srv::T2C_Response>()
{
  return "serving_robot_msgs/srv/T2C_Response";
}

template<>
struct has_fixed_size<serving_robot_msgs::srv::T2C_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<serving_robot_msgs::srv::T2C_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<serving_robot_msgs::srv::T2C_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<serving_robot_msgs::srv::T2C>()
{
  return "serving_robot_msgs::srv::T2C";
}

template<>
inline const char * name<serving_robot_msgs::srv::T2C>()
{
  return "serving_robot_msgs/srv/T2C";
}

template<>
struct has_fixed_size<serving_robot_msgs::srv::T2C>
  : std::integral_constant<
    bool,
    has_fixed_size<serving_robot_msgs::srv::T2C_Request>::value &&
    has_fixed_size<serving_robot_msgs::srv::T2C_Response>::value
  >
{
};

template<>
struct has_bounded_size<serving_robot_msgs::srv::T2C>
  : std::integral_constant<
    bool,
    has_bounded_size<serving_robot_msgs::srv::T2C_Request>::value &&
    has_bounded_size<serving_robot_msgs::srv::T2C_Response>::value
  >
{
};

template<>
struct is_service<serving_robot_msgs::srv::T2C>
  : std::true_type
{
};

template<>
struct is_service_request<serving_robot_msgs::srv::T2C_Request>
  : std::true_type
{
};

template<>
struct is_service_response<serving_robot_msgs::srv::T2C_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__TRAITS_HPP_
