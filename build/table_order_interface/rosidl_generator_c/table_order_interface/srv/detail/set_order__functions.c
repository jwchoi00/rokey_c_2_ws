// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from table_order_interface:srv/SetOrder.idl
// generated code does not contain a copyright notice
#include "table_order_interface/srv/detail/set_order__functions.h"

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
table_order_interface__srv__SetOrder_Request__init(table_order_interface__srv__SetOrder_Request * msg)
{
  if (!msg) {
    return false;
  }
  // table_number
  // menu
  if (!rosidl_runtime_c__String__Sequence__init(&msg->menu, 0)) {
    table_order_interface__srv__SetOrder_Request__fini(msg);
    return false;
  }
  // menu_number
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->menu_number, 0)) {
    table_order_interface__srv__SetOrder_Request__fini(msg);
    return false;
  }
  // price
  return true;
}

void
table_order_interface__srv__SetOrder_Request__fini(table_order_interface__srv__SetOrder_Request * msg)
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
table_order_interface__srv__SetOrder_Request__are_equal(const table_order_interface__srv__SetOrder_Request * lhs, const table_order_interface__srv__SetOrder_Request * rhs)
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
table_order_interface__srv__SetOrder_Request__copy(
  const table_order_interface__srv__SetOrder_Request * input,
  table_order_interface__srv__SetOrder_Request * output)
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

table_order_interface__srv__SetOrder_Request *
table_order_interface__srv__SetOrder_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  table_order_interface__srv__SetOrder_Request * msg = (table_order_interface__srv__SetOrder_Request *)allocator.allocate(sizeof(table_order_interface__srv__SetOrder_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(table_order_interface__srv__SetOrder_Request));
  bool success = table_order_interface__srv__SetOrder_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
table_order_interface__srv__SetOrder_Request__destroy(table_order_interface__srv__SetOrder_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    table_order_interface__srv__SetOrder_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
table_order_interface__srv__SetOrder_Request__Sequence__init(table_order_interface__srv__SetOrder_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  table_order_interface__srv__SetOrder_Request * data = NULL;

  if (size) {
    data = (table_order_interface__srv__SetOrder_Request *)allocator.zero_allocate(size, sizeof(table_order_interface__srv__SetOrder_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = table_order_interface__srv__SetOrder_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        table_order_interface__srv__SetOrder_Request__fini(&data[i - 1]);
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
table_order_interface__srv__SetOrder_Request__Sequence__fini(table_order_interface__srv__SetOrder_Request__Sequence * array)
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
      table_order_interface__srv__SetOrder_Request__fini(&array->data[i]);
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

table_order_interface__srv__SetOrder_Request__Sequence *
table_order_interface__srv__SetOrder_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  table_order_interface__srv__SetOrder_Request__Sequence * array = (table_order_interface__srv__SetOrder_Request__Sequence *)allocator.allocate(sizeof(table_order_interface__srv__SetOrder_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = table_order_interface__srv__SetOrder_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
table_order_interface__srv__SetOrder_Request__Sequence__destroy(table_order_interface__srv__SetOrder_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    table_order_interface__srv__SetOrder_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
table_order_interface__srv__SetOrder_Request__Sequence__are_equal(const table_order_interface__srv__SetOrder_Request__Sequence * lhs, const table_order_interface__srv__SetOrder_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!table_order_interface__srv__SetOrder_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
table_order_interface__srv__SetOrder_Request__Sequence__copy(
  const table_order_interface__srv__SetOrder_Request__Sequence * input,
  table_order_interface__srv__SetOrder_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(table_order_interface__srv__SetOrder_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    table_order_interface__srv__SetOrder_Request * data =
      (table_order_interface__srv__SetOrder_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!table_order_interface__srv__SetOrder_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          table_order_interface__srv__SetOrder_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!table_order_interface__srv__SetOrder_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
table_order_interface__srv__SetOrder_Response__init(table_order_interface__srv__SetOrder_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
table_order_interface__srv__SetOrder_Response__fini(table_order_interface__srv__SetOrder_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
table_order_interface__srv__SetOrder_Response__are_equal(const table_order_interface__srv__SetOrder_Response * lhs, const table_order_interface__srv__SetOrder_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
table_order_interface__srv__SetOrder_Response__copy(
  const table_order_interface__srv__SetOrder_Response * input,
  table_order_interface__srv__SetOrder_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

table_order_interface__srv__SetOrder_Response *
table_order_interface__srv__SetOrder_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  table_order_interface__srv__SetOrder_Response * msg = (table_order_interface__srv__SetOrder_Response *)allocator.allocate(sizeof(table_order_interface__srv__SetOrder_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(table_order_interface__srv__SetOrder_Response));
  bool success = table_order_interface__srv__SetOrder_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
table_order_interface__srv__SetOrder_Response__destroy(table_order_interface__srv__SetOrder_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    table_order_interface__srv__SetOrder_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
table_order_interface__srv__SetOrder_Response__Sequence__init(table_order_interface__srv__SetOrder_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  table_order_interface__srv__SetOrder_Response * data = NULL;

  if (size) {
    data = (table_order_interface__srv__SetOrder_Response *)allocator.zero_allocate(size, sizeof(table_order_interface__srv__SetOrder_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = table_order_interface__srv__SetOrder_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        table_order_interface__srv__SetOrder_Response__fini(&data[i - 1]);
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
table_order_interface__srv__SetOrder_Response__Sequence__fini(table_order_interface__srv__SetOrder_Response__Sequence * array)
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
      table_order_interface__srv__SetOrder_Response__fini(&array->data[i]);
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

table_order_interface__srv__SetOrder_Response__Sequence *
table_order_interface__srv__SetOrder_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  table_order_interface__srv__SetOrder_Response__Sequence * array = (table_order_interface__srv__SetOrder_Response__Sequence *)allocator.allocate(sizeof(table_order_interface__srv__SetOrder_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = table_order_interface__srv__SetOrder_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
table_order_interface__srv__SetOrder_Response__Sequence__destroy(table_order_interface__srv__SetOrder_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    table_order_interface__srv__SetOrder_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
table_order_interface__srv__SetOrder_Response__Sequence__are_equal(const table_order_interface__srv__SetOrder_Response__Sequence * lhs, const table_order_interface__srv__SetOrder_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!table_order_interface__srv__SetOrder_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
table_order_interface__srv__SetOrder_Response__Sequence__copy(
  const table_order_interface__srv__SetOrder_Response__Sequence * input,
  table_order_interface__srv__SetOrder_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(table_order_interface__srv__SetOrder_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    table_order_interface__srv__SetOrder_Response * data =
      (table_order_interface__srv__SetOrder_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!table_order_interface__srv__SetOrder_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          table_order_interface__srv__SetOrder_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!table_order_interface__srv__SetOrder_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
