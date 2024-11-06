// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from c2_turtle_interface:msg/OrderItem.idl
// generated code does not contain a copyright notice
#include "c2_turtle_interface/msg/detail/order_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `menu_item`
#include "rosidl_runtime_c/string_functions.h"

bool
c2_turtle_interface__msg__OrderItem__init(c2_turtle_interface__msg__OrderItem * msg)
{
  if (!msg) {
    return false;
  }
  // menu_item
  if (!rosidl_runtime_c__String__init(&msg->menu_item)) {
    c2_turtle_interface__msg__OrderItem__fini(msg);
    return false;
  }
  // quantity
  // price
  return true;
}

void
c2_turtle_interface__msg__OrderItem__fini(c2_turtle_interface__msg__OrderItem * msg)
{
  if (!msg) {
    return;
  }
  // menu_item
  rosidl_runtime_c__String__fini(&msg->menu_item);
  // quantity
  // price
}

bool
c2_turtle_interface__msg__OrderItem__are_equal(const c2_turtle_interface__msg__OrderItem * lhs, const c2_turtle_interface__msg__OrderItem * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // menu_item
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->menu_item), &(rhs->menu_item)))
  {
    return false;
  }
  // quantity
  if (lhs->quantity != rhs->quantity) {
    return false;
  }
  // price
  if (lhs->price != rhs->price) {
    return false;
  }
  return true;
}

bool
c2_turtle_interface__msg__OrderItem__copy(
  const c2_turtle_interface__msg__OrderItem * input,
  c2_turtle_interface__msg__OrderItem * output)
{
  if (!input || !output) {
    return false;
  }
  // menu_item
  if (!rosidl_runtime_c__String__copy(
      &(input->menu_item), &(output->menu_item)))
  {
    return false;
  }
  // quantity
  output->quantity = input->quantity;
  // price
  output->price = input->price;
  return true;
}

c2_turtle_interface__msg__OrderItem *
c2_turtle_interface__msg__OrderItem__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  c2_turtle_interface__msg__OrderItem * msg = (c2_turtle_interface__msg__OrderItem *)allocator.allocate(sizeof(c2_turtle_interface__msg__OrderItem), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(c2_turtle_interface__msg__OrderItem));
  bool success = c2_turtle_interface__msg__OrderItem__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
c2_turtle_interface__msg__OrderItem__destroy(c2_turtle_interface__msg__OrderItem * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    c2_turtle_interface__msg__OrderItem__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
c2_turtle_interface__msg__OrderItem__Sequence__init(c2_turtle_interface__msg__OrderItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  c2_turtle_interface__msg__OrderItem * data = NULL;

  if (size) {
    data = (c2_turtle_interface__msg__OrderItem *)allocator.zero_allocate(size, sizeof(c2_turtle_interface__msg__OrderItem), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = c2_turtle_interface__msg__OrderItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        c2_turtle_interface__msg__OrderItem__fini(&data[i - 1]);
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
c2_turtle_interface__msg__OrderItem__Sequence__fini(c2_turtle_interface__msg__OrderItem__Sequence * array)
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
      c2_turtle_interface__msg__OrderItem__fini(&array->data[i]);
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

c2_turtle_interface__msg__OrderItem__Sequence *
c2_turtle_interface__msg__OrderItem__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  c2_turtle_interface__msg__OrderItem__Sequence * array = (c2_turtle_interface__msg__OrderItem__Sequence *)allocator.allocate(sizeof(c2_turtle_interface__msg__OrderItem__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = c2_turtle_interface__msg__OrderItem__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
c2_turtle_interface__msg__OrderItem__Sequence__destroy(c2_turtle_interface__msg__OrderItem__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    c2_turtle_interface__msg__OrderItem__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
c2_turtle_interface__msg__OrderItem__Sequence__are_equal(const c2_turtle_interface__msg__OrderItem__Sequence * lhs, const c2_turtle_interface__msg__OrderItem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!c2_turtle_interface__msg__OrderItem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
c2_turtle_interface__msg__OrderItem__Sequence__copy(
  const c2_turtle_interface__msg__OrderItem__Sequence * input,
  c2_turtle_interface__msg__OrderItem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(c2_turtle_interface__msg__OrderItem);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    c2_turtle_interface__msg__OrderItem * data =
      (c2_turtle_interface__msg__OrderItem *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!c2_turtle_interface__msg__OrderItem__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          c2_turtle_interface__msg__OrderItem__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!c2_turtle_interface__msg__OrderItem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
