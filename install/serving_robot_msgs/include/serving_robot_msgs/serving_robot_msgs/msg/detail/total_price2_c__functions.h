// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from serving_robot_msgs:msg/TotalPrice2C.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__FUNCTIONS_H_
#define SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "serving_robot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "serving_robot_msgs/msg/detail/total_price2_c__struct.h"

/// Initialize msg/TotalPrice2C message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serving_robot_msgs__msg__TotalPrice2C
 * )) before or use
 * serving_robot_msgs__msg__TotalPrice2C__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__msg__TotalPrice2C__init(serving_robot_msgs__msg__TotalPrice2C * msg);

/// Finalize msg/TotalPrice2C message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__msg__TotalPrice2C__fini(serving_robot_msgs__msg__TotalPrice2C * msg);

/// Create msg/TotalPrice2C message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serving_robot_msgs__msg__TotalPrice2C__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__msg__TotalPrice2C *
serving_robot_msgs__msg__TotalPrice2C__create();

/// Destroy msg/TotalPrice2C message.
/**
 * It calls
 * serving_robot_msgs__msg__TotalPrice2C__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__msg__TotalPrice2C__destroy(serving_robot_msgs__msg__TotalPrice2C * msg);

/// Check for msg/TotalPrice2C message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__msg__TotalPrice2C__are_equal(const serving_robot_msgs__msg__TotalPrice2C * lhs, const serving_robot_msgs__msg__TotalPrice2C * rhs);

/// Copy a msg/TotalPrice2C message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__msg__TotalPrice2C__copy(
  const serving_robot_msgs__msg__TotalPrice2C * input,
  serving_robot_msgs__msg__TotalPrice2C * output);

/// Initialize array of msg/TotalPrice2C messages.
/**
 * It allocates the memory for the number of elements and calls
 * serving_robot_msgs__msg__TotalPrice2C__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__msg__TotalPrice2C__Sequence__init(serving_robot_msgs__msg__TotalPrice2C__Sequence * array, size_t size);

/// Finalize array of msg/TotalPrice2C messages.
/**
 * It calls
 * serving_robot_msgs__msg__TotalPrice2C__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__msg__TotalPrice2C__Sequence__fini(serving_robot_msgs__msg__TotalPrice2C__Sequence * array);

/// Create array of msg/TotalPrice2C messages.
/**
 * It allocates the memory for the array and calls
 * serving_robot_msgs__msg__TotalPrice2C__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__msg__TotalPrice2C__Sequence *
serving_robot_msgs__msg__TotalPrice2C__Sequence__create(size_t size);

/// Destroy array of msg/TotalPrice2C messages.
/**
 * It calls
 * serving_robot_msgs__msg__TotalPrice2C__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__msg__TotalPrice2C__Sequence__destroy(serving_robot_msgs__msg__TotalPrice2C__Sequence * array);

/// Check for msg/TotalPrice2C message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__msg__TotalPrice2C__Sequence__are_equal(const serving_robot_msgs__msg__TotalPrice2C__Sequence * lhs, const serving_robot_msgs__msg__TotalPrice2C__Sequence * rhs);

/// Copy an array of msg/TotalPrice2C messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__msg__TotalPrice2C__Sequence__copy(
  const serving_robot_msgs__msg__TotalPrice2C__Sequence * input,
  serving_robot_msgs__msg__TotalPrice2C__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__FUNCTIONS_H_
