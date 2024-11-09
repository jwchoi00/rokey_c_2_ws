// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from c2_turtle_interface:srv/GetTotalSales.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__BUILDER_HPP_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "c2_turtle_interface/srv/detail/get_total_sales__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace c2_turtle_interface
{

namespace srv
{

namespace builder
{

class Init_GetTotalSales_Request_date
{
public:
  Init_GetTotalSales_Request_date()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::c2_turtle_interface::srv::GetTotalSales_Request date(::c2_turtle_interface::srv::GetTotalSales_Request::_date_type arg)
  {
    msg_.date = std::move(arg);
    return std::move(msg_);
  }

private:
  ::c2_turtle_interface::srv::GetTotalSales_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::c2_turtle_interface::srv::GetTotalSales_Request>()
{
  return c2_turtle_interface::srv::builder::Init_GetTotalSales_Request_date();
}

}  // namespace c2_turtle_interface


namespace c2_turtle_interface
{

namespace srv
{

namespace builder
{

class Init_GetTotalSales_Response_total_sales
{
public:
  Init_GetTotalSales_Response_total_sales()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::c2_turtle_interface::srv::GetTotalSales_Response total_sales(::c2_turtle_interface::srv::GetTotalSales_Response::_total_sales_type arg)
  {
    msg_.total_sales = std::move(arg);
    return std::move(msg_);
  }

private:
  ::c2_turtle_interface::srv::GetTotalSales_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::c2_turtle_interface::srv::GetTotalSales_Response>()
{
  return c2_turtle_interface::srv::builder::Init_GetTotalSales_Response_total_sales();
}

}  // namespace c2_turtle_interface

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__BUILDER_HPP_
