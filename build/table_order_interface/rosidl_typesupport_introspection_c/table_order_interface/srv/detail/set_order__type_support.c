// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from table_order_interface:srv/SetOrder.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "table_order_interface/srv/detail/set_order__rosidl_typesupport_introspection_c.h"
#include "table_order_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "table_order_interface/srv/detail/set_order__functions.h"
#include "table_order_interface/srv/detail/set_order__struct.h"


// Include directives for member types
// Member `menu`
#include "rosidl_runtime_c/string_functions.h"
// Member `menu_number`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  table_order_interface__srv__SetOrder_Request__init(message_memory);
}

void table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_fini_function(void * message_memory)
{
  table_order_interface__srv__SetOrder_Request__fini(message_memory);
}

size_t table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__size_function__SetOrder_Request__menu(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_const_function__SetOrder_Request__menu(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_function__SetOrder_Request__menu(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__fetch_function__SetOrder_Request__menu(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_const_function__SetOrder_Request__menu(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__assign_function__SetOrder_Request__menu(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_function__SetOrder_Request__menu(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__resize_function__SetOrder_Request__menu(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__size_function__SetOrder_Request__menu_number(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_const_function__SetOrder_Request__menu_number(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_function__SetOrder_Request__menu_number(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__fetch_function__SetOrder_Request__menu_number(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_const_function__SetOrder_Request__menu_number(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__assign_function__SetOrder_Request__menu_number(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_function__SetOrder_Request__menu_number(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__resize_function__SetOrder_Request__menu_number(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_message_member_array[4] = {
  {
    "table_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(table_order_interface__srv__SetOrder_Request, table_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "menu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(table_order_interface__srv__SetOrder_Request, menu),  // bytes offset in struct
    NULL,  // default value
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__size_function__SetOrder_Request__menu,  // size() function pointer
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_const_function__SetOrder_Request__menu,  // get_const(index) function pointer
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_function__SetOrder_Request__menu,  // get(index) function pointer
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__fetch_function__SetOrder_Request__menu,  // fetch(index, &value) function pointer
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__assign_function__SetOrder_Request__menu,  // assign(index, value) function pointer
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__resize_function__SetOrder_Request__menu  // resize(index) function pointer
  },
  {
    "menu_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(table_order_interface__srv__SetOrder_Request, menu_number),  // bytes offset in struct
    NULL,  // default value
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__size_function__SetOrder_Request__menu_number,  // size() function pointer
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_const_function__SetOrder_Request__menu_number,  // get_const(index) function pointer
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__get_function__SetOrder_Request__menu_number,  // get(index) function pointer
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__fetch_function__SetOrder_Request__menu_number,  // fetch(index, &value) function pointer
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__assign_function__SetOrder_Request__menu_number,  // assign(index, value) function pointer
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__resize_function__SetOrder_Request__menu_number  // resize(index) function pointer
  },
  {
    "price",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(table_order_interface__srv__SetOrder_Request, price),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_message_members = {
  "table_order_interface__srv",  // message namespace
  "SetOrder_Request",  // message name
  4,  // number of fields
  sizeof(table_order_interface__srv__SetOrder_Request),
  table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_message_member_array,  // message members
  table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_message_type_support_handle = {
  0,
  &table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_table_order_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, table_order_interface, srv, SetOrder_Request)() {
  if (!table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_message_type_support_handle.typesupport_identifier) {
    table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &table_order_interface__srv__SetOrder_Request__rosidl_typesupport_introspection_c__SetOrder_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "table_order_interface/srv/detail/set_order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "table_order_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "table_order_interface/srv/detail/set_order__functions.h"
// already included above
// #include "table_order_interface/srv/detail/set_order__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  table_order_interface__srv__SetOrder_Response__init(message_memory);
}

void table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_fini_function(void * message_memory)
{
  table_order_interface__srv__SetOrder_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(table_order_interface__srv__SetOrder_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_message_members = {
  "table_order_interface__srv",  // message namespace
  "SetOrder_Response",  // message name
  1,  // number of fields
  sizeof(table_order_interface__srv__SetOrder_Response),
  table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_message_member_array,  // message members
  table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_message_type_support_handle = {
  0,
  &table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_table_order_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, table_order_interface, srv, SetOrder_Response)() {
  if (!table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_message_type_support_handle.typesupport_identifier) {
    table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &table_order_interface__srv__SetOrder_Response__rosidl_typesupport_introspection_c__SetOrder_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "table_order_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "table_order_interface/srv/detail/set_order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers table_order_interface__srv__detail__set_order__rosidl_typesupport_introspection_c__SetOrder_service_members = {
  "table_order_interface__srv",  // service namespace
  "SetOrder",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // table_order_interface__srv__detail__set_order__rosidl_typesupport_introspection_c__SetOrder_Request_message_type_support_handle,
  NULL  // response message
  // table_order_interface__srv__detail__set_order__rosidl_typesupport_introspection_c__SetOrder_Response_message_type_support_handle
};

static rosidl_service_type_support_t table_order_interface__srv__detail__set_order__rosidl_typesupport_introspection_c__SetOrder_service_type_support_handle = {
  0,
  &table_order_interface__srv__detail__set_order__rosidl_typesupport_introspection_c__SetOrder_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, table_order_interface, srv, SetOrder_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, table_order_interface, srv, SetOrder_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_table_order_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, table_order_interface, srv, SetOrder)() {
  if (!table_order_interface__srv__detail__set_order__rosidl_typesupport_introspection_c__SetOrder_service_type_support_handle.typesupport_identifier) {
    table_order_interface__srv__detail__set_order__rosidl_typesupport_introspection_c__SetOrder_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)table_order_interface__srv__detail__set_order__rosidl_typesupport_introspection_c__SetOrder_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, table_order_interface, srv, SetOrder_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, table_order_interface, srv, SetOrder_Response)()->data;
  }

  return &table_order_interface__srv__detail__set_order__rosidl_typesupport_introspection_c__SetOrder_service_type_support_handle;
}
