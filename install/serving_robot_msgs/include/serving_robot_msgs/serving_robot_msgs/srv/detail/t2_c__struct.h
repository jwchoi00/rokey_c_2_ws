// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from serving_robot_msgs:srv/T2C.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__STRUCT_H_
#define SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__STRUCT_H_

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

/// Struct defined in srv/T2C in the package serving_robot_msgs.
typedef struct serving_robot_msgs__srv__T2C_Request
{
  int32_t table_number;
  rosidl_runtime_c__String__Sequence menu;
  rosidl_runtime_c__int32__Sequence menu_number;
  int32_t price;
} serving_robot_msgs__srv__T2C_Request;

// Struct for a sequence of serving_robot_msgs__srv__T2C_Request.
typedef struct serving_robot_msgs__srv__T2C_Request__Sequence
{
  serving_robot_msgs__srv__T2C_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__srv__T2C_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/T2C in the package serving_robot_msgs.
typedef struct serving_robot_msgs__srv__T2C_Response
{
  bool succeed;
} serving_robot_msgs__srv__T2C_Response;

// Struct for a sequence of serving_robot_msgs__srv__T2C_Response.
typedef struct serving_robot_msgs__srv__T2C_Response__Sequence
{
  serving_robot_msgs__srv__T2C_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__srv__T2C_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__STRUCT_H_
