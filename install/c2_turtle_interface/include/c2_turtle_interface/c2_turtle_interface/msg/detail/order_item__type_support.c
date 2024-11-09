// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from c2_turtle_interface:msg/OrderItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "c2_turtle_interface/msg/detail/order_item__rosidl_typesupport_introspection_c.h"
#include "c2_turtle_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "c2_turtle_interface/msg/detail/order_item__functions.h"
#include "c2_turtle_interface/msg/detail/order_item__struct.h"


// Include directives for member types
// Member `menu_item`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  c2_turtle_interface__msg__OrderItem__init(message_memory);
}

void c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_fini_function(void * message_memory)
{
  c2_turtle_interface__msg__OrderItem__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_message_member_array[3] = {
  {
    "menu_item",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface__msg__OrderItem, menu_item),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quantity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface__msg__OrderItem, quantity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "price",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface__msg__OrderItem, price),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_message_members = {
  "c2_turtle_interface__msg",  // message namespace
  "OrderItem",  // message name
  3,  // number of fields
  sizeof(c2_turtle_interface__msg__OrderItem),
  c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_message_member_array,  // message members
  c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_init_function,  // function to initialize message memory (memory has to be allocated)
  c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_message_type_support_handle = {
  0,
  &c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_c2_turtle_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, c2_turtle_interface, msg, OrderItem)() {
  if (!c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_message_type_support_handle.typesupport_identifier) {
    c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &c2_turtle_interface__msg__OrderItem__rosidl_typesupport_introspection_c__OrderItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
