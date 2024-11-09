// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from c2_turtle_interface:msg/OrderItem.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__FUNCTIONS_H_
#define C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "c2_turtle_interface/msg/rosidl_generator_c__visibility_control.h"

#include "c2_turtle_interface/msg/detail/order_item__struct.h"

/// Initialize msg/OrderItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * c2_turtle_interface__msg__OrderItem
 * )) before or use
 * c2_turtle_interface__msg__OrderItem__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__msg__OrderItem__init(c2_turtle_interface__msg__OrderItem * msg);

/// Finalize msg/OrderItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__msg__OrderItem__fini(c2_turtle_interface__msg__OrderItem * msg);

/// Create msg/OrderItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * c2_turtle_interface__msg__OrderItem__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
c2_turtle_interface__msg__OrderItem *
c2_turtle_interface__msg__OrderItem__create();

/// Destroy msg/OrderItem message.
/**
 * It calls
 * c2_turtle_interface__msg__OrderItem__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__msg__OrderItem__destroy(c2_turtle_interface__msg__OrderItem * msg);

/// Check for msg/OrderItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__msg__OrderItem__are_equal(const c2_turtle_interface__msg__OrderItem * lhs, const c2_turtle_interface__msg__OrderItem * rhs);

/// Copy a msg/OrderItem message.
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
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__msg__OrderItem__copy(
  const c2_turtle_interface__msg__OrderItem * input,
  c2_turtle_interface__msg__OrderItem * output);

/// Initialize array of msg/OrderItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * c2_turtle_interface__msg__OrderItem__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__msg__OrderItem__Sequence__init(c2_turtle_interface__msg__OrderItem__Sequence * array, size_t size);

/// Finalize array of msg/OrderItem messages.
/**
 * It calls
 * c2_turtle_interface__msg__OrderItem__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__msg__OrderItem__Sequence__fini(c2_turtle_interface__msg__OrderItem__Sequence * array);

/// Create array of msg/OrderItem messages.
/**
 * It allocates the memory for the array and calls
 * c2_turtle_interface__msg__OrderItem__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
c2_turtle_interface__msg__OrderItem__Sequence *
c2_turtle_interface__msg__OrderItem__Sequence__create(size_t size);

/// Destroy array of msg/OrderItem messages.
/**
 * It calls
 * c2_turtle_interface__msg__OrderItem__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__msg__OrderItem__Sequence__destroy(c2_turtle_interface__msg__OrderItem__Sequence * array);

/// Check for msg/OrderItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__msg__OrderItem__Sequence__are_equal(const c2_turtle_interface__msg__OrderItem__Sequence * lhs, const c2_turtle_interface__msg__OrderItem__Sequence * rhs);

/// Copy an array of msg/OrderItem messages.
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
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__msg__OrderItem__Sequence__copy(
  const c2_turtle_interface__msg__OrderItem__Sequence * input,
  c2_turtle_interface__msg__OrderItem__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // C2_TURTLE_INTERFACE__MSG__DETAIL__ORDER_ITEM__FUNCTIONS_H_
