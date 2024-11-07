// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from table_order_interface:srv/SetOrder.idl
// generated code does not contain a copyright notice

#ifndef TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__STRUCT_H_
#define TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'menu'
#include "rosidl_runtime_c/string.h"
// Member 'menu_number'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetOrder in the package table_order_interface.
typedef struct table_order_interface__srv__SetOrder_Request
{
  /// 테이블 번호
  int32_t table_number;
  /// 주문 메뉴
  rosidl_runtime_c__String__Sequence menu;
  /// 주문한 메뉴의 갯수
  rosidl_runtime_c__int32__Sequence menu_number;
  /// 총 주문 가격
  int32_t price;
} table_order_interface__srv__SetOrder_Request;

// Struct for a sequence of table_order_interface__srv__SetOrder_Request.
typedef struct table_order_interface__srv__SetOrder_Request__Sequence
{
  table_order_interface__srv__SetOrder_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} table_order_interface__srv__SetOrder_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetOrder in the package table_order_interface.
typedef struct table_order_interface__srv__SetOrder_Response
{
  bool success;
} table_order_interface__srv__SetOrder_Response;

// Struct for a sequence of table_order_interface__srv__SetOrder_Response.
typedef struct table_order_interface__srv__SetOrder_Response__Sequence
{
  table_order_interface__srv__SetOrder_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} table_order_interface__srv__SetOrder_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__STRUCT_H_
