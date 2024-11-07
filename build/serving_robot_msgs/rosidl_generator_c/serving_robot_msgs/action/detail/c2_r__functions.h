// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from serving_robot_msgs:action/C2R.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__ACTION__DETAIL__C2_R__FUNCTIONS_H_
#define SERVING_ROBOT_MSGS__ACTION__DETAIL__C2_R__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "serving_robot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "serving_robot_msgs/action/detail/c2_r__struct.h"

/// Initialize action/C2R message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serving_robot_msgs__action__C2R_Goal
 * )) before or use
 * serving_robot_msgs__action__C2R_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Goal__init(serving_robot_msgs__action__C2R_Goal * msg);

/// Finalize action/C2R message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Goal__fini(serving_robot_msgs__action__C2R_Goal * msg);

/// Create action/C2R message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serving_robot_msgs__action__C2R_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_Goal *
serving_robot_msgs__action__C2R_Goal__create();

/// Destroy action/C2R message.
/**
 * It calls
 * serving_robot_msgs__action__C2R_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Goal__destroy(serving_robot_msgs__action__C2R_Goal * msg);

/// Check for action/C2R message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Goal__are_equal(const serving_robot_msgs__action__C2R_Goal * lhs, const serving_robot_msgs__action__C2R_Goal * rhs);

/// Copy a action/C2R message.
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
serving_robot_msgs__action__C2R_Goal__copy(
  const serving_robot_msgs__action__C2R_Goal * input,
  serving_robot_msgs__action__C2R_Goal * output);

/// Initialize array of action/C2R messages.
/**
 * It allocates the memory for the number of elements and calls
 * serving_robot_msgs__action__C2R_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Goal__Sequence__init(serving_robot_msgs__action__C2R_Goal__Sequence * array, size_t size);

/// Finalize array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Goal__Sequence__fini(serving_robot_msgs__action__C2R_Goal__Sequence * array);

/// Create array of action/C2R messages.
/**
 * It allocates the memory for the array and calls
 * serving_robot_msgs__action__C2R_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_Goal__Sequence *
serving_robot_msgs__action__C2R_Goal__Sequence__create(size_t size);

/// Destroy array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Goal__Sequence__destroy(serving_robot_msgs__action__C2R_Goal__Sequence * array);

/// Check for action/C2R message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Goal__Sequence__are_equal(const serving_robot_msgs__action__C2R_Goal__Sequence * lhs, const serving_robot_msgs__action__C2R_Goal__Sequence * rhs);

/// Copy an array of action/C2R messages.
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
serving_robot_msgs__action__C2R_Goal__Sequence__copy(
  const serving_robot_msgs__action__C2R_Goal__Sequence * input,
  serving_robot_msgs__action__C2R_Goal__Sequence * output);

/// Initialize action/C2R message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serving_robot_msgs__action__C2R_Result
 * )) before or use
 * serving_robot_msgs__action__C2R_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Result__init(serving_robot_msgs__action__C2R_Result * msg);

/// Finalize action/C2R message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Result__fini(serving_robot_msgs__action__C2R_Result * msg);

/// Create action/C2R message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serving_robot_msgs__action__C2R_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_Result *
serving_robot_msgs__action__C2R_Result__create();

/// Destroy action/C2R message.
/**
 * It calls
 * serving_robot_msgs__action__C2R_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Result__destroy(serving_robot_msgs__action__C2R_Result * msg);

/// Check for action/C2R message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Result__are_equal(const serving_robot_msgs__action__C2R_Result * lhs, const serving_robot_msgs__action__C2R_Result * rhs);

/// Copy a action/C2R message.
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
serving_robot_msgs__action__C2R_Result__copy(
  const serving_robot_msgs__action__C2R_Result * input,
  serving_robot_msgs__action__C2R_Result * output);

/// Initialize array of action/C2R messages.
/**
 * It allocates the memory for the number of elements and calls
 * serving_robot_msgs__action__C2R_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Result__Sequence__init(serving_robot_msgs__action__C2R_Result__Sequence * array, size_t size);

/// Finalize array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Result__Sequence__fini(serving_robot_msgs__action__C2R_Result__Sequence * array);

/// Create array of action/C2R messages.
/**
 * It allocates the memory for the array and calls
 * serving_robot_msgs__action__C2R_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_Result__Sequence *
serving_robot_msgs__action__C2R_Result__Sequence__create(size_t size);

/// Destroy array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Result__Sequence__destroy(serving_robot_msgs__action__C2R_Result__Sequence * array);

/// Check for action/C2R message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Result__Sequence__are_equal(const serving_robot_msgs__action__C2R_Result__Sequence * lhs, const serving_robot_msgs__action__C2R_Result__Sequence * rhs);

/// Copy an array of action/C2R messages.
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
serving_robot_msgs__action__C2R_Result__Sequence__copy(
  const serving_robot_msgs__action__C2R_Result__Sequence * input,
  serving_robot_msgs__action__C2R_Result__Sequence * output);

/// Initialize action/C2R message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serving_robot_msgs__action__C2R_Feedback
 * )) before or use
 * serving_robot_msgs__action__C2R_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Feedback__init(serving_robot_msgs__action__C2R_Feedback * msg);

/// Finalize action/C2R message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Feedback__fini(serving_robot_msgs__action__C2R_Feedback * msg);

/// Create action/C2R message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serving_robot_msgs__action__C2R_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_Feedback *
serving_robot_msgs__action__C2R_Feedback__create();

/// Destroy action/C2R message.
/**
 * It calls
 * serving_robot_msgs__action__C2R_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Feedback__destroy(serving_robot_msgs__action__C2R_Feedback * msg);

/// Check for action/C2R message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Feedback__are_equal(const serving_robot_msgs__action__C2R_Feedback * lhs, const serving_robot_msgs__action__C2R_Feedback * rhs);

/// Copy a action/C2R message.
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
serving_robot_msgs__action__C2R_Feedback__copy(
  const serving_robot_msgs__action__C2R_Feedback * input,
  serving_robot_msgs__action__C2R_Feedback * output);

/// Initialize array of action/C2R messages.
/**
 * It allocates the memory for the number of elements and calls
 * serving_robot_msgs__action__C2R_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Feedback__Sequence__init(serving_robot_msgs__action__C2R_Feedback__Sequence * array, size_t size);

/// Finalize array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Feedback__Sequence__fini(serving_robot_msgs__action__C2R_Feedback__Sequence * array);

/// Create array of action/C2R messages.
/**
 * It allocates the memory for the array and calls
 * serving_robot_msgs__action__C2R_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_Feedback__Sequence *
serving_robot_msgs__action__C2R_Feedback__Sequence__create(size_t size);

/// Destroy array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_Feedback__Sequence__destroy(serving_robot_msgs__action__C2R_Feedback__Sequence * array);

/// Check for action/C2R message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_Feedback__Sequence__are_equal(const serving_robot_msgs__action__C2R_Feedback__Sequence * lhs, const serving_robot_msgs__action__C2R_Feedback__Sequence * rhs);

/// Copy an array of action/C2R messages.
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
serving_robot_msgs__action__C2R_Feedback__Sequence__copy(
  const serving_robot_msgs__action__C2R_Feedback__Sequence * input,
  serving_robot_msgs__action__C2R_Feedback__Sequence * output);

/// Initialize action/C2R message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serving_robot_msgs__action__C2R_SendGoal_Request
 * )) before or use
 * serving_robot_msgs__action__C2R_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_SendGoal_Request__init(serving_robot_msgs__action__C2R_SendGoal_Request * msg);

/// Finalize action/C2R message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_SendGoal_Request__fini(serving_robot_msgs__action__C2R_SendGoal_Request * msg);

/// Create action/C2R message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serving_robot_msgs__action__C2R_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_SendGoal_Request *
serving_robot_msgs__action__C2R_SendGoal_Request__create();

/// Destroy action/C2R message.
/**
 * It calls
 * serving_robot_msgs__action__C2R_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_SendGoal_Request__destroy(serving_robot_msgs__action__C2R_SendGoal_Request * msg);

/// Check for action/C2R message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_SendGoal_Request__are_equal(const serving_robot_msgs__action__C2R_SendGoal_Request * lhs, const serving_robot_msgs__action__C2R_SendGoal_Request * rhs);

/// Copy a action/C2R message.
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
serving_robot_msgs__action__C2R_SendGoal_Request__copy(
  const serving_robot_msgs__action__C2R_SendGoal_Request * input,
  serving_robot_msgs__action__C2R_SendGoal_Request * output);

/// Initialize array of action/C2R messages.
/**
 * It allocates the memory for the number of elements and calls
 * serving_robot_msgs__action__C2R_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_SendGoal_Request__Sequence__init(serving_robot_msgs__action__C2R_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_SendGoal_Request__Sequence__fini(serving_robot_msgs__action__C2R_SendGoal_Request__Sequence * array);

/// Create array of action/C2R messages.
/**
 * It allocates the memory for the array and calls
 * serving_robot_msgs__action__C2R_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_SendGoal_Request__Sequence *
serving_robot_msgs__action__C2R_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_SendGoal_Request__Sequence__destroy(serving_robot_msgs__action__C2R_SendGoal_Request__Sequence * array);

/// Check for action/C2R message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_SendGoal_Request__Sequence__are_equal(const serving_robot_msgs__action__C2R_SendGoal_Request__Sequence * lhs, const serving_robot_msgs__action__C2R_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/C2R messages.
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
serving_robot_msgs__action__C2R_SendGoal_Request__Sequence__copy(
  const serving_robot_msgs__action__C2R_SendGoal_Request__Sequence * input,
  serving_robot_msgs__action__C2R_SendGoal_Request__Sequence * output);

/// Initialize action/C2R message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serving_robot_msgs__action__C2R_SendGoal_Response
 * )) before or use
 * serving_robot_msgs__action__C2R_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_SendGoal_Response__init(serving_robot_msgs__action__C2R_SendGoal_Response * msg);

/// Finalize action/C2R message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_SendGoal_Response__fini(serving_robot_msgs__action__C2R_SendGoal_Response * msg);

/// Create action/C2R message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serving_robot_msgs__action__C2R_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_SendGoal_Response *
serving_robot_msgs__action__C2R_SendGoal_Response__create();

/// Destroy action/C2R message.
/**
 * It calls
 * serving_robot_msgs__action__C2R_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_SendGoal_Response__destroy(serving_robot_msgs__action__C2R_SendGoal_Response * msg);

/// Check for action/C2R message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_SendGoal_Response__are_equal(const serving_robot_msgs__action__C2R_SendGoal_Response * lhs, const serving_robot_msgs__action__C2R_SendGoal_Response * rhs);

/// Copy a action/C2R message.
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
serving_robot_msgs__action__C2R_SendGoal_Response__copy(
  const serving_robot_msgs__action__C2R_SendGoal_Response * input,
  serving_robot_msgs__action__C2R_SendGoal_Response * output);

/// Initialize array of action/C2R messages.
/**
 * It allocates the memory for the number of elements and calls
 * serving_robot_msgs__action__C2R_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_SendGoal_Response__Sequence__init(serving_robot_msgs__action__C2R_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_SendGoal_Response__Sequence__fini(serving_robot_msgs__action__C2R_SendGoal_Response__Sequence * array);

/// Create array of action/C2R messages.
/**
 * It allocates the memory for the array and calls
 * serving_robot_msgs__action__C2R_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_SendGoal_Response__Sequence *
serving_robot_msgs__action__C2R_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_SendGoal_Response__Sequence__destroy(serving_robot_msgs__action__C2R_SendGoal_Response__Sequence * array);

/// Check for action/C2R message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_SendGoal_Response__Sequence__are_equal(const serving_robot_msgs__action__C2R_SendGoal_Response__Sequence * lhs, const serving_robot_msgs__action__C2R_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/C2R messages.
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
serving_robot_msgs__action__C2R_SendGoal_Response__Sequence__copy(
  const serving_robot_msgs__action__C2R_SendGoal_Response__Sequence * input,
  serving_robot_msgs__action__C2R_SendGoal_Response__Sequence * output);

/// Initialize action/C2R message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serving_robot_msgs__action__C2R_GetResult_Request
 * )) before or use
 * serving_robot_msgs__action__C2R_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_GetResult_Request__init(serving_robot_msgs__action__C2R_GetResult_Request * msg);

/// Finalize action/C2R message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_GetResult_Request__fini(serving_robot_msgs__action__C2R_GetResult_Request * msg);

/// Create action/C2R message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serving_robot_msgs__action__C2R_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_GetResult_Request *
serving_robot_msgs__action__C2R_GetResult_Request__create();

/// Destroy action/C2R message.
/**
 * It calls
 * serving_robot_msgs__action__C2R_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_GetResult_Request__destroy(serving_robot_msgs__action__C2R_GetResult_Request * msg);

/// Check for action/C2R message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_GetResult_Request__are_equal(const serving_robot_msgs__action__C2R_GetResult_Request * lhs, const serving_robot_msgs__action__C2R_GetResult_Request * rhs);

/// Copy a action/C2R message.
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
serving_robot_msgs__action__C2R_GetResult_Request__copy(
  const serving_robot_msgs__action__C2R_GetResult_Request * input,
  serving_robot_msgs__action__C2R_GetResult_Request * output);

/// Initialize array of action/C2R messages.
/**
 * It allocates the memory for the number of elements and calls
 * serving_robot_msgs__action__C2R_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_GetResult_Request__Sequence__init(serving_robot_msgs__action__C2R_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_GetResult_Request__Sequence__fini(serving_robot_msgs__action__C2R_GetResult_Request__Sequence * array);

/// Create array of action/C2R messages.
/**
 * It allocates the memory for the array and calls
 * serving_robot_msgs__action__C2R_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_GetResult_Request__Sequence *
serving_robot_msgs__action__C2R_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_GetResult_Request__Sequence__destroy(serving_robot_msgs__action__C2R_GetResult_Request__Sequence * array);

/// Check for action/C2R message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_GetResult_Request__Sequence__are_equal(const serving_robot_msgs__action__C2R_GetResult_Request__Sequence * lhs, const serving_robot_msgs__action__C2R_GetResult_Request__Sequence * rhs);

/// Copy an array of action/C2R messages.
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
serving_robot_msgs__action__C2R_GetResult_Request__Sequence__copy(
  const serving_robot_msgs__action__C2R_GetResult_Request__Sequence * input,
  serving_robot_msgs__action__C2R_GetResult_Request__Sequence * output);

/// Initialize action/C2R message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serving_robot_msgs__action__C2R_GetResult_Response
 * )) before or use
 * serving_robot_msgs__action__C2R_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_GetResult_Response__init(serving_robot_msgs__action__C2R_GetResult_Response * msg);

/// Finalize action/C2R message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_GetResult_Response__fini(serving_robot_msgs__action__C2R_GetResult_Response * msg);

/// Create action/C2R message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serving_robot_msgs__action__C2R_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_GetResult_Response *
serving_robot_msgs__action__C2R_GetResult_Response__create();

/// Destroy action/C2R message.
/**
 * It calls
 * serving_robot_msgs__action__C2R_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_GetResult_Response__destroy(serving_robot_msgs__action__C2R_GetResult_Response * msg);

/// Check for action/C2R message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_GetResult_Response__are_equal(const serving_robot_msgs__action__C2R_GetResult_Response * lhs, const serving_robot_msgs__action__C2R_GetResult_Response * rhs);

/// Copy a action/C2R message.
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
serving_robot_msgs__action__C2R_GetResult_Response__copy(
  const serving_robot_msgs__action__C2R_GetResult_Response * input,
  serving_robot_msgs__action__C2R_GetResult_Response * output);

/// Initialize array of action/C2R messages.
/**
 * It allocates the memory for the number of elements and calls
 * serving_robot_msgs__action__C2R_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_GetResult_Response__Sequence__init(serving_robot_msgs__action__C2R_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_GetResult_Response__Sequence__fini(serving_robot_msgs__action__C2R_GetResult_Response__Sequence * array);

/// Create array of action/C2R messages.
/**
 * It allocates the memory for the array and calls
 * serving_robot_msgs__action__C2R_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_GetResult_Response__Sequence *
serving_robot_msgs__action__C2R_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_GetResult_Response__Sequence__destroy(serving_robot_msgs__action__C2R_GetResult_Response__Sequence * array);

/// Check for action/C2R message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_GetResult_Response__Sequence__are_equal(const serving_robot_msgs__action__C2R_GetResult_Response__Sequence * lhs, const serving_robot_msgs__action__C2R_GetResult_Response__Sequence * rhs);

/// Copy an array of action/C2R messages.
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
serving_robot_msgs__action__C2R_GetResult_Response__Sequence__copy(
  const serving_robot_msgs__action__C2R_GetResult_Response__Sequence * input,
  serving_robot_msgs__action__C2R_GetResult_Response__Sequence * output);

/// Initialize action/C2R message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serving_robot_msgs__action__C2R_FeedbackMessage
 * )) before or use
 * serving_robot_msgs__action__C2R_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_FeedbackMessage__init(serving_robot_msgs__action__C2R_FeedbackMessage * msg);

/// Finalize action/C2R message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_FeedbackMessage__fini(serving_robot_msgs__action__C2R_FeedbackMessage * msg);

/// Create action/C2R message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serving_robot_msgs__action__C2R_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_FeedbackMessage *
serving_robot_msgs__action__C2R_FeedbackMessage__create();

/// Destroy action/C2R message.
/**
 * It calls
 * serving_robot_msgs__action__C2R_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_FeedbackMessage__destroy(serving_robot_msgs__action__C2R_FeedbackMessage * msg);

/// Check for action/C2R message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_FeedbackMessage__are_equal(const serving_robot_msgs__action__C2R_FeedbackMessage * lhs, const serving_robot_msgs__action__C2R_FeedbackMessage * rhs);

/// Copy a action/C2R message.
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
serving_robot_msgs__action__C2R_FeedbackMessage__copy(
  const serving_robot_msgs__action__C2R_FeedbackMessage * input,
  serving_robot_msgs__action__C2R_FeedbackMessage * output);

/// Initialize array of action/C2R messages.
/**
 * It allocates the memory for the number of elements and calls
 * serving_robot_msgs__action__C2R_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_FeedbackMessage__Sequence__init(serving_robot_msgs__action__C2R_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_FeedbackMessage__Sequence__fini(serving_robot_msgs__action__C2R_FeedbackMessage__Sequence * array);

/// Create array of action/C2R messages.
/**
 * It allocates the memory for the array and calls
 * serving_robot_msgs__action__C2R_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
serving_robot_msgs__action__C2R_FeedbackMessage__Sequence *
serving_robot_msgs__action__C2R_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/C2R messages.
/**
 * It calls
 * serving_robot_msgs__action__C2R_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
void
serving_robot_msgs__action__C2R_FeedbackMessage__Sequence__destroy(serving_robot_msgs__action__C2R_FeedbackMessage__Sequence * array);

/// Check for action/C2R message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serving_robot_msgs
bool
serving_robot_msgs__action__C2R_FeedbackMessage__Sequence__are_equal(const serving_robot_msgs__action__C2R_FeedbackMessage__Sequence * lhs, const serving_robot_msgs__action__C2R_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/C2R messages.
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
serving_robot_msgs__action__C2R_FeedbackMessage__Sequence__copy(
  const serving_robot_msgs__action__C2R_FeedbackMessage__Sequence * input,
  serving_robot_msgs__action__C2R_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SERVING_ROBOT_MSGS__ACTION__DETAIL__C2_R__FUNCTIONS_H_
