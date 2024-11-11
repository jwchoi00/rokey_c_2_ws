// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from serving_robot_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotState in the package serving_robot_msgs.
typedef struct serving_robot_msgs__msg__RobotState
{
  bool state;
} serving_robot_msgs__msg__RobotState;

// Struct for a sequence of serving_robot_msgs__msg__RobotState.
typedef struct serving_robot_msgs__msg__RobotState__Sequence
{
  serving_robot_msgs__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
