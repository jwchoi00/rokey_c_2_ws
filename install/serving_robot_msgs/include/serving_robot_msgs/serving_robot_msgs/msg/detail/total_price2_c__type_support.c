// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from serving_robot_msgs:msg/TotalPrice2C.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "serving_robot_msgs/msg/detail/total_price2_c__rosidl_typesupport_introspection_c.h"
#include "serving_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "serving_robot_msgs/msg/detail/total_price2_c__functions.h"
#include "serving_robot_msgs/msg/detail/total_price2_c__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  serving_robot_msgs__msg__TotalPrice2C__init(message_memory);
}

void serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_fini_function(void * message_memory)
{
  serving_robot_msgs__msg__TotalPrice2C__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_message_member_array[1] = {
  {
    "price",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(serving_robot_msgs__msg__TotalPrice2C, price),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_message_members = {
  "serving_robot_msgs__msg",  // message namespace
  "TotalPrice2C",  // message name
  1,  // number of fields
  sizeof(serving_robot_msgs__msg__TotalPrice2C),
  serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_message_member_array,  // message members
  serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_init_function,  // function to initialize message memory (memory has to be allocated)
  serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_message_type_support_handle = {
  0,
  &serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_serving_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, serving_robot_msgs, msg, TotalPrice2C)() {
  if (!serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_message_type_support_handle.typesupport_identifier) {
    serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &serving_robot_msgs__msg__TotalPrice2C__rosidl_typesupport_introspection_c__TotalPrice2C_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif