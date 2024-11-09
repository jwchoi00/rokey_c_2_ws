// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from c2_turtle_interface:srv/GetTotalSales.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__FUNCTIONS_H_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "c2_turtle_interface/msg/rosidl_generator_c__visibility_control.h"

#include "c2_turtle_interface/srv/detail/get_total_sales__struct.h"

/// Initialize srv/GetTotalSales message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * c2_turtle_interface__srv__GetTotalSales_Request
 * )) before or use
 * c2_turtle_interface__srv__GetTotalSales_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__srv__GetTotalSales_Request__init(c2_turtle_interface__srv__GetTotalSales_Request * msg);

/// Finalize srv/GetTotalSales message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__srv__GetTotalSales_Request__fini(c2_turtle_interface__srv__GetTotalSales_Request * msg);

/// Create srv/GetTotalSales message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * c2_turtle_interface__srv__GetTotalSales_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
c2_turtle_interface__srv__GetTotalSales_Request *
c2_turtle_interface__srv__GetTotalSales_Request__create();

/// Destroy srv/GetTotalSales message.
/**
 * It calls
 * c2_turtle_interface__srv__GetTotalSales_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__srv__GetTotalSales_Request__destroy(c2_turtle_interface__srv__GetTotalSales_Request * msg);

/// Check for srv/GetTotalSales message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__srv__GetTotalSales_Request__are_equal(const c2_turtle_interface__srv__GetTotalSales_Request * lhs, const c2_turtle_interface__srv__GetTotalSales_Request * rhs);

/// Copy a srv/GetTotalSales message.
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
c2_turtle_interface__srv__GetTotalSales_Request__copy(
  const c2_turtle_interface__srv__GetTotalSales_Request * input,
  c2_turtle_interface__srv__GetTotalSales_Request * output);

/// Initialize array of srv/GetTotalSales messages.
/**
 * It allocates the memory for the number of elements and calls
 * c2_turtle_interface__srv__GetTotalSales_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__init(c2_turtle_interface__srv__GetTotalSales_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetTotalSales messages.
/**
 * It calls
 * c2_turtle_interface__srv__GetTotalSales_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__fini(c2_turtle_interface__srv__GetTotalSales_Request__Sequence * array);

/// Create array of srv/GetTotalSales messages.
/**
 * It allocates the memory for the array and calls
 * c2_turtle_interface__srv__GetTotalSales_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
c2_turtle_interface__srv__GetTotalSales_Request__Sequence *
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetTotalSales messages.
/**
 * It calls
 * c2_turtle_interface__srv__GetTotalSales_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__destroy(c2_turtle_interface__srv__GetTotalSales_Request__Sequence * array);

/// Check for srv/GetTotalSales message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__are_equal(const c2_turtle_interface__srv__GetTotalSales_Request__Sequence * lhs, const c2_turtle_interface__srv__GetTotalSales_Request__Sequence * rhs);

/// Copy an array of srv/GetTotalSales messages.
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
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__copy(
  const c2_turtle_interface__srv__GetTotalSales_Request__Sequence * input,
  c2_turtle_interface__srv__GetTotalSales_Request__Sequence * output);

/// Initialize srv/GetTotalSales message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * c2_turtle_interface__srv__GetTotalSales_Response
 * )) before or use
 * c2_turtle_interface__srv__GetTotalSales_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__srv__GetTotalSales_Response__init(c2_turtle_interface__srv__GetTotalSales_Response * msg);

/// Finalize srv/GetTotalSales message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__srv__GetTotalSales_Response__fini(c2_turtle_interface__srv__GetTotalSales_Response * msg);

/// Create srv/GetTotalSales message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * c2_turtle_interface__srv__GetTotalSales_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
c2_turtle_interface__srv__GetTotalSales_Response *
c2_turtle_interface__srv__GetTotalSales_Response__create();

/// Destroy srv/GetTotalSales message.
/**
 * It calls
 * c2_turtle_interface__srv__GetTotalSales_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__srv__GetTotalSales_Response__destroy(c2_turtle_interface__srv__GetTotalSales_Response * msg);

/// Check for srv/GetTotalSales message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__srv__GetTotalSales_Response__are_equal(const c2_turtle_interface__srv__GetTotalSales_Response * lhs, const c2_turtle_interface__srv__GetTotalSales_Response * rhs);

/// Copy a srv/GetTotalSales message.
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
c2_turtle_interface__srv__GetTotalSales_Response__copy(
  const c2_turtle_interface__srv__GetTotalSales_Response * input,
  c2_turtle_interface__srv__GetTotalSales_Response * output);

/// Initialize array of srv/GetTotalSales messages.
/**
 * It allocates the memory for the number of elements and calls
 * c2_turtle_interface__srv__GetTotalSales_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__init(c2_turtle_interface__srv__GetTotalSales_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetTotalSales messages.
/**
 * It calls
 * c2_turtle_interface__srv__GetTotalSales_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__fini(c2_turtle_interface__srv__GetTotalSales_Response__Sequence * array);

/// Create array of srv/GetTotalSales messages.
/**
 * It allocates the memory for the array and calls
 * c2_turtle_interface__srv__GetTotalSales_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
c2_turtle_interface__srv__GetTotalSales_Response__Sequence *
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetTotalSales messages.
/**
 * It calls
 * c2_turtle_interface__srv__GetTotalSales_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
void
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__destroy(c2_turtle_interface__srv__GetTotalSales_Response__Sequence * array);

/// Check for srv/GetTotalSales message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_c2_turtle_interface
bool
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__are_equal(const c2_turtle_interface__srv__GetTotalSales_Response__Sequence * lhs, const c2_turtle_interface__srv__GetTotalSales_Response__Sequence * rhs);

/// Copy an array of srv/GetTotalSales messages.
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
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__copy(
  const c2_turtle_interface__srv__GetTotalSales_Response__Sequence * input,
  c2_turtle_interface__srv__GetTotalSales_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__FUNCTIONS_H_
