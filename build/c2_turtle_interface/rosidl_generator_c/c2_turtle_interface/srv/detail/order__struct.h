// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from c2_turtle_interface:srv/Order.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__ORDER__STRUCT_H_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__ORDER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'items'
#include "c2_turtle_interface/msg/detail/order_item__struct.h"

/// Struct defined in srv/Order in the package c2_turtle_interface.
typedef struct c2_turtle_interface__srv__Order_Request
{
  int32_t table_number;
  c2_turtle_interface__msg__OrderItem__Sequence items;
  int32_t total_price;
} c2_turtle_interface__srv__Order_Request;

// Struct for a sequence of c2_turtle_interface__srv__Order_Request.
typedef struct c2_turtle_interface__srv__Order_Request__Sequence
{
  c2_turtle_interface__srv__Order_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} c2_turtle_interface__srv__Order_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Order in the package c2_turtle_interface.
typedef struct c2_turtle_interface__srv__Order_Response
{
  bool success;
} c2_turtle_interface__srv__Order_Response;

// Struct for a sequence of c2_turtle_interface__srv__Order_Response.
typedef struct c2_turtle_interface__srv__Order_Response__Sequence
{
  c2_turtle_interface__srv__Order_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} c2_turtle_interface__srv__Order_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__ORDER__STRUCT_H_
