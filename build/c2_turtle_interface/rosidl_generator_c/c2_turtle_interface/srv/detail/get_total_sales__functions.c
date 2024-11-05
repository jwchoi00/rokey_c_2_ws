// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from c2_turtle_interface:srv/GetTotalSales.idl
// generated code does not contain a copyright notice
#include "c2_turtle_interface/srv/detail/get_total_sales__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `date`
#include "rosidl_runtime_c/string_functions.h"

bool
c2_turtle_interface__srv__GetTotalSales_Request__init(c2_turtle_interface__srv__GetTotalSales_Request * msg)
{
  if (!msg) {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__init(&msg->date)) {
    c2_turtle_interface__srv__GetTotalSales_Request__fini(msg);
    return false;
  }
  return true;
}

void
c2_turtle_interface__srv__GetTotalSales_Request__fini(c2_turtle_interface__srv__GetTotalSales_Request * msg)
{
  if (!msg) {
    return;
  }
  // date
  rosidl_runtime_c__String__fini(&msg->date);
}

bool
c2_turtle_interface__srv__GetTotalSales_Request__are_equal(const c2_turtle_interface__srv__GetTotalSales_Request * lhs, const c2_turtle_interface__srv__GetTotalSales_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->date), &(rhs->date)))
  {
    return false;
  }
  return true;
}

bool
c2_turtle_interface__srv__GetTotalSales_Request__copy(
  const c2_turtle_interface__srv__GetTotalSales_Request * input,
  c2_turtle_interface__srv__GetTotalSales_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__copy(
      &(input->date), &(output->date)))
  {
    return false;
  }
  return true;
}

c2_turtle_interface__srv__GetTotalSales_Request *
c2_turtle_interface__srv__GetTotalSales_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  c2_turtle_interface__srv__GetTotalSales_Request * msg = (c2_turtle_interface__srv__GetTotalSales_Request *)allocator.allocate(sizeof(c2_turtle_interface__srv__GetTotalSales_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(c2_turtle_interface__srv__GetTotalSales_Request));
  bool success = c2_turtle_interface__srv__GetTotalSales_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
c2_turtle_interface__srv__GetTotalSales_Request__destroy(c2_turtle_interface__srv__GetTotalSales_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    c2_turtle_interface__srv__GetTotalSales_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__init(c2_turtle_interface__srv__GetTotalSales_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  c2_turtle_interface__srv__GetTotalSales_Request * data = NULL;

  if (size) {
    data = (c2_turtle_interface__srv__GetTotalSales_Request *)allocator.zero_allocate(size, sizeof(c2_turtle_interface__srv__GetTotalSales_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = c2_turtle_interface__srv__GetTotalSales_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        c2_turtle_interface__srv__GetTotalSales_Request__fini(&data[i - 1]);
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
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__fini(c2_turtle_interface__srv__GetTotalSales_Request__Sequence * array)
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
      c2_turtle_interface__srv__GetTotalSales_Request__fini(&array->data[i]);
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

c2_turtle_interface__srv__GetTotalSales_Request__Sequence *
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  c2_turtle_interface__srv__GetTotalSales_Request__Sequence * array = (c2_turtle_interface__srv__GetTotalSales_Request__Sequence *)allocator.allocate(sizeof(c2_turtle_interface__srv__GetTotalSales_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = c2_turtle_interface__srv__GetTotalSales_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__destroy(c2_turtle_interface__srv__GetTotalSales_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    c2_turtle_interface__srv__GetTotalSales_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__are_equal(const c2_turtle_interface__srv__GetTotalSales_Request__Sequence * lhs, const c2_turtle_interface__srv__GetTotalSales_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!c2_turtle_interface__srv__GetTotalSales_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
c2_turtle_interface__srv__GetTotalSales_Request__Sequence__copy(
  const c2_turtle_interface__srv__GetTotalSales_Request__Sequence * input,
  c2_turtle_interface__srv__GetTotalSales_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(c2_turtle_interface__srv__GetTotalSales_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    c2_turtle_interface__srv__GetTotalSales_Request * data =
      (c2_turtle_interface__srv__GetTotalSales_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!c2_turtle_interface__srv__GetTotalSales_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          c2_turtle_interface__srv__GetTotalSales_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!c2_turtle_interface__srv__GetTotalSales_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
c2_turtle_interface__srv__GetTotalSales_Response__init(c2_turtle_interface__srv__GetTotalSales_Response * msg)
{
  if (!msg) {
    return false;
  }
  // total_sales
  return true;
}

void
c2_turtle_interface__srv__GetTotalSales_Response__fini(c2_turtle_interface__srv__GetTotalSales_Response * msg)
{
  if (!msg) {
    return;
  }
  // total_sales
}

bool
c2_turtle_interface__srv__GetTotalSales_Response__are_equal(const c2_turtle_interface__srv__GetTotalSales_Response * lhs, const c2_turtle_interface__srv__GetTotalSales_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // total_sales
  if (lhs->total_sales != rhs->total_sales) {
    return false;
  }
  return true;
}

bool
c2_turtle_interface__srv__GetTotalSales_Response__copy(
  const c2_turtle_interface__srv__GetTotalSales_Response * input,
  c2_turtle_interface__srv__GetTotalSales_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // total_sales
  output->total_sales = input->total_sales;
  return true;
}

c2_turtle_interface__srv__GetTotalSales_Response *
c2_turtle_interface__srv__GetTotalSales_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  c2_turtle_interface__srv__GetTotalSales_Response * msg = (c2_turtle_interface__srv__GetTotalSales_Response *)allocator.allocate(sizeof(c2_turtle_interface__srv__GetTotalSales_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(c2_turtle_interface__srv__GetTotalSales_Response));
  bool success = c2_turtle_interface__srv__GetTotalSales_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
c2_turtle_interface__srv__GetTotalSales_Response__destroy(c2_turtle_interface__srv__GetTotalSales_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    c2_turtle_interface__srv__GetTotalSales_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__init(c2_turtle_interface__srv__GetTotalSales_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  c2_turtle_interface__srv__GetTotalSales_Response * data = NULL;

  if (size) {
    data = (c2_turtle_interface__srv__GetTotalSales_Response *)allocator.zero_allocate(size, sizeof(c2_turtle_interface__srv__GetTotalSales_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = c2_turtle_interface__srv__GetTotalSales_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        c2_turtle_interface__srv__GetTotalSales_Response__fini(&data[i - 1]);
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
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__fini(c2_turtle_interface__srv__GetTotalSales_Response__Sequence * array)
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
      c2_turtle_interface__srv__GetTotalSales_Response__fini(&array->data[i]);
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

c2_turtle_interface__srv__GetTotalSales_Response__Sequence *
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  c2_turtle_interface__srv__GetTotalSales_Response__Sequence * array = (c2_turtle_interface__srv__GetTotalSales_Response__Sequence *)allocator.allocate(sizeof(c2_turtle_interface__srv__GetTotalSales_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = c2_turtle_interface__srv__GetTotalSales_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__destroy(c2_turtle_interface__srv__GetTotalSales_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    c2_turtle_interface__srv__GetTotalSales_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__are_equal(const c2_turtle_interface__srv__GetTotalSales_Response__Sequence * lhs, const c2_turtle_interface__srv__GetTotalSales_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!c2_turtle_interface__srv__GetTotalSales_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
c2_turtle_interface__srv__GetTotalSales_Response__Sequence__copy(
  const c2_turtle_interface__srv__GetTotalSales_Response__Sequence * input,
  c2_turtle_interface__srv__GetTotalSales_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(c2_turtle_interface__srv__GetTotalSales_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    c2_turtle_interface__srv__GetTotalSales_Response * data =
      (c2_turtle_interface__srv__GetTotalSales_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!c2_turtle_interface__srv__GetTotalSales_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          c2_turtle_interface__srv__GetTotalSales_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!c2_turtle_interface__srv__GetTotalSales_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
