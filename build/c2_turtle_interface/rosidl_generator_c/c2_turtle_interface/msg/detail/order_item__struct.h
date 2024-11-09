// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from c2_turtle_interface:msg/OrderItem.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__STRUCT_H_
#define C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'menu_item'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OrderItem in the package c2_turtle_interface.
typedef struct c2_turtle_interface__msg__OrderItem
{
  rosidl_runtime_c__String menu_item;
  int32_t quantity;
  int32_t price;
} c2_turtle_interface__msg__OrderItem;

// Struct for a sequence of c2_turtle_interface__msg__OrderItem.
typedef struct c2_turtle_interface__msg__OrderItem__Sequence
{
  c2_turtle_interface__msg__OrderItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} c2_turtle_interface__msg__OrderItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__STRUCT_H_
