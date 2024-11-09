// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from c2_turtle_interface:srv/Orderver2.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__ORDERVER2__STRUCT_H_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__ORDERVER2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'menu_name'
#include "rosidl_runtime_c/string.h"
// Member 'quantity'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Orderver2 in the package c2_turtle_interface.
typedef struct c2_turtle_interface__srv__Orderver2_Request
{
  int32_t table_number;
  rosidl_runtime_c__String__Sequence menu_name;
  rosidl_runtime_c__int32__Sequence quantity;
  int32_t total_price;
} c2_turtle_interface__srv__Orderver2_Request;

// Struct for a sequence of c2_turtle_interface__srv__Orderver2_Request.
typedef struct c2_turtle_interface__srv__Orderver2_Request__Sequence
{
  c2_turtle_interface__srv__Orderver2_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} c2_turtle_interface__srv__Orderver2_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Orderver2 in the package c2_turtle_interface.
typedef struct c2_turtle_interface__srv__Orderver2_Response
{
  bool success;
} c2_turtle_interface__srv__Orderver2_Response;

// Struct for a sequence of c2_turtle_interface__srv__Orderver2_Response.
typedef struct c2_turtle_interface__srv__Orderver2_Response__Sequence
{
  c2_turtle_interface__srv__Orderver2_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} c2_turtle_interface__srv__Orderver2_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__ORDERVER2__STRUCT_H_
