// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from c2_turtle_interface:srv/GetTotalSales.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__STRUCT_H_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'date'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetTotalSales in the package c2_turtle_interface.
typedef struct c2_turtle_interface__srv__GetTotalSales_Request
{
  /// 요청할 날짜 (YYYY-MM-DD 형식)
  rosidl_runtime_c__String date;
} c2_turtle_interface__srv__GetTotalSales_Request;

// Struct for a sequence of c2_turtle_interface__srv__GetTotalSales_Request.
typedef struct c2_turtle_interface__srv__GetTotalSales_Request__Sequence
{
  c2_turtle_interface__srv__GetTotalSales_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} c2_turtle_interface__srv__GetTotalSales_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetTotalSales in the package c2_turtle_interface.
typedef struct c2_turtle_interface__srv__GetTotalSales_Response
{
  /// 해당 날짜의 총 매출
  double total_sales;
} c2_turtle_interface__srv__GetTotalSales_Response;

// Struct for a sequence of c2_turtle_interface__srv__GetTotalSales_Response.
typedef struct c2_turtle_interface__srv__GetTotalSales_Response__Sequence
{
  c2_turtle_interface__srv__GetTotalSales_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} c2_turtle_interface__srv__GetTotalSales_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__STRUCT_H_
