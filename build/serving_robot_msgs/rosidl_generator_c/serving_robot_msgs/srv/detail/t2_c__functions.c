// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from serving_robot_msgs:srv/T2C.idl
// generated code does not contain a copyright notice
#include "serving_robot_msgs/srv/detail/t2_c__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `menu`
#include "rosidl_runtime_c/string_functions.h"
// Member `menu_number`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
serving_robot_msgs__srv__T2C_Request__init(serving_robot_msgs__srv__T2C_Request * msg)
{
  if (!msg) {
    return false;
  }
  // table_number
  // menu
  if (!rosidl_runtime_c__String__Sequence__init(&msg->menu, 0)) {
    serving_robot_msgs__srv__T2C_Request__fini(msg);
    return false;
  }
  // menu_number
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->menu_number, 0)) {
    serving_robot_msgs__srv__T2C_Request__fini(msg);
    return false;
  }
  // price
  return true;
}

void
serving_robot_msgs__srv__T2C_Request__fini(serving_robot_msgs__srv__T2C_Request * msg)
{
  if (!msg) {
    return;
  }
  // table_number
  // menu
  rosidl_runtime_c__String__Sequence__fini(&msg->menu);
  // menu_number
  rosidl_runtime_c__int32__Sequence__fini(&msg->menu_number);
  // price
}

bool
serving_robot_msgs__srv__T2C_Request__are_equal(const serving_robot_msgs__srv__T2C_Request * lhs, const serving_robot_msgs__srv__T2C_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // table_number
  if (lhs->table_number != rhs->table_number) {
    return false;
  }
  // menu
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->menu), &(rhs->menu)))
  {
    return false;
  }
  // menu_number
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->menu_number), &(rhs->menu_number)))
  {
    return false;
  }
  // price
  if (lhs->price != rhs->price) {
    return false;
  }
  return true;
}

bool
serving_robot_msgs__srv__T2C_Request__copy(
  const serving_robot_msgs__srv__T2C_Request * input,
  serving_robot_msgs__srv__T2C_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // table_number
  output->table_number = input->table_number;
  // menu
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->menu), &(output->menu)))
  {
    return false;
  }
  // menu_number
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->menu_number), &(output->menu_number)))
  {
    return false;
  }
  // price
  output->price = input->price;
  return true;
}

serving_robot_msgs__srv__T2C_Request *
serving_robot_msgs__srv__T2C_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serving_robot_msgs__srv__T2C_Request * msg = (serving_robot_msgs__srv__T2C_Request *)allocator.allocate(sizeof(serving_robot_msgs__srv__T2C_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(serving_robot_msgs__srv__T2C_Request));
  bool success = serving_robot_msgs__srv__T2C_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
serving_robot_msgs__srv__T2C_Request__destroy(serving_robot_msgs__srv__T2C_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    serving_robot_msgs__srv__T2C_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
serving_robot_msgs__srv__T2C_Request__Sequence__init(serving_robot_msgs__srv__T2C_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serving_robot_msgs__srv__T2C_Request * data = NULL;

  if (size) {
    data = (serving_robot_msgs__srv__T2C_Request *)allocator.zero_allocate(size, sizeof(serving_robot_msgs__srv__T2C_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = serving_robot_msgs__srv__T2C_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        serving_robot_msgs__srv__T2C_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
serving_robot_msgs__srv__T2C_Request__Sequence__fini(serving_robot_msgs__srv__T2C_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      serving_robot_msgs__srv__T2C_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

serving_robot_msgs__srv__T2C_Request__Sequence *
serving_robot_msgs__srv__T2C_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serving_robot_msgs__srv__T2C_Request__Sequence * array = (serving_robot_msgs__srv__T2C_Request__Sequence *)allocator.allocate(sizeof(serving_robot_msgs__srv__T2C_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = serving_robot_msgs__srv__T2C_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
serving_robot_msgs__srv__T2C_Request__Sequence__destroy(serving_robot_msgs__srv__T2C_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    serving_robot_msgs__srv__T2C_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
serving_robot_msgs__srv__T2C_Request__Sequence__are_equal(const serving_robot_msgs__srv__T2C_Request__Sequence * lhs, const serving_robot_msgs__srv__T2C_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!serving_robot_msgs__srv__T2C_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
serving_robot_msgs__srv__T2C_Request__Sequence__copy(
  const serving_robot_msgs__srv__T2C_Request__Sequence * input,
  serving_robot_msgs__srv__T2C_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(serving_robot_msgs__srv__T2C_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    serving_robot_msgs__srv__T2C_Request * data =
      (serving_robot_msgs__srv__T2C_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!serving_robot_msgs__srv__T2C_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          serving_robot_msgs__srv__T2C_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!serving_robot_msgs__srv__T2C_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
serving_robot_msgs__srv__T2C_Response__init(serving_robot_msgs__srv__T2C_Response * msg)
{
  if (!msg) {
    return false;
  }
  // succeed
  return true;
}

void
serving_robot_msgs__srv__T2C_Response__fini(serving_robot_msgs__srv__T2C_Response * msg)
{
  if (!msg) {
    return;
  }
  // succeed
}

bool
serving_robot_msgs__srv__T2C_Response__are_equal(const serving_robot_msgs__srv__T2C_Response * lhs, const serving_robot_msgs__srv__T2C_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // succeed
  if (lhs->succeed != rhs->succeed) {
    return false;
  }
  return true;
}

bool
serving_robot_msgs__srv__T2C_Response__copy(
  const serving_robot_msgs__srv__T2C_Response * input,
  serving_robot_msgs__srv__T2C_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // succeed
  output->succeed = input->succeed;
  return true;
}

serving_robot_msgs__srv__T2C_Response *
serving_robot_msgs__srv__T2C_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serving_robot_msgs__srv__T2C_Response * msg = (serving_robot_msgs__srv__T2C_Response *)allocator.allocate(sizeof(serving_robot_msgs__srv__T2C_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(serving_robot_msgs__srv__T2C_Response));
  bool success = serving_robot_msgs__srv__T2C_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
serving_robot_msgs__srv__T2C_Response__destroy(serving_robot_msgs__srv__T2C_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    serving_robot_msgs__srv__T2C_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
serving_robot_msgs__srv__T2C_Response__Sequence__init(serving_robot_msgs__srv__T2C_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serving_robot_msgs__srv__T2C_Response * data = NULL;

  if (size) {
    data = (serving_robot_msgs__srv__T2C_Response *)allocator.zero_allocate(size, sizeof(serving_robot_msgs__srv__T2C_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = serving_robot_msgs__srv__T2C_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        serving_robot_msgs__srv__T2C_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
serving_robot_msgs__srv__T2C_Response__Sequence__fini(serving_robot_msgs__srv__T2C_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      serving_robot_msgs__srv__T2C_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

serving_robot_msgs__srv__T2C_Response__Sequence *
serving_robot_msgs__srv__T2C_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serving_robot_msgs__srv__T2C_Response__Sequence * array = (serving_robot_msgs__srv__T2C_Response__Sequence *)allocator.allocate(sizeof(serving_robot_msgs__srv__T2C_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = serving_robot_msgs__srv__T2C_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
serving_robot_msgs__srv__T2C_Response__Sequence__destroy(serving_robot_msgs__srv__T2C_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    serving_robot_msgs__srv__T2C_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
serving_robot_msgs__srv__T2C_Response__Sequence__are_equal(const serving_robot_msgs__srv__T2C_Response__Sequence * lhs, const serving_robot_msgs__srv__T2C_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!serving_robot_msgs__srv__T2C_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
serving_robot_msgs__srv__T2C_Response__Sequence__copy(
  const serving_robot_msgs__srv__T2C_Response__Sequence * input,
  serving_robot_msgs__srv__T2C_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(serving_robot_msgs__srv__T2C_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    serving_robot_msgs__srv__T2C_Response * data =
      (serving_robot_msgs__srv__T2C_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!serving_robot_msgs__srv__T2C_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          serving_robot_msgs__srv__T2C_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!serving_robot_msgs__srv__T2C_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
