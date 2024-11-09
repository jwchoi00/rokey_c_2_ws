// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from serving_robot_msgs:srv/T2C.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "serving_robot_msgs/srv/detail/t2_c__rosidl_typesupport_introspection_c.h"
#include "serving_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "serving_robot_msgs/srv/detail/t2_c__functions.h"
#include "serving_robot_msgs/srv/detail/t2_c__struct.h"


// Include directives for member types
// Member `menu`
#include "rosidl_runtime_c/string_functions.h"
// Member `menu_number`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  serving_robot_msgs__srv__T2C_Request__init(message_memory);
}

void serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_fini_function(void * message_memory)
{
  serving_robot_msgs__srv__T2C_Request__fini(message_memory);
}

size_t serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__size_function__T2C_Request__menu(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_const_function__T2C_Request__menu(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_function__T2C_Request__menu(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__fetch_function__T2C_Request__menu(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_const_function__T2C_Request__menu(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__assign_function__T2C_Request__menu(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_function__T2C_Request__menu(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__resize_function__T2C_Request__menu(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__size_function__T2C_Request__menu_number(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_const_function__T2C_Request__menu_number(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_function__T2C_Request__menu_number(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__fetch_function__T2C_Request__menu_number(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_const_function__T2C_Request__menu_number(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__assign_function__T2C_Request__menu_number(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_function__T2C_Request__menu_number(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__resize_function__T2C_Request__menu_number(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_message_member_array[4] = {
  {
    "table_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(serving_robot_msgs__srv__T2C_Request, table_number),  // bytes offset in struct
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
    offsetof(serving_robot_msgs__srv__T2C_Request, menu),  // bytes offset in struct
    NULL,  // default value
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__size_function__T2C_Request__menu,  // size() function pointer
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_const_function__T2C_Request__menu,  // get_const(index) function pointer
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_function__T2C_Request__menu,  // get(index) function pointer
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__fetch_function__T2C_Request__menu,  // fetch(index, &value) function pointer
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__assign_function__T2C_Request__menu,  // assign(index, value) function pointer
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__resize_function__T2C_Request__menu  // resize(index) function pointer
  },
  {
    "menu_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(serving_robot_msgs__srv__T2C_Request, menu_number),  // bytes offset in struct
    NULL,  // default value
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__size_function__T2C_Request__menu_number,  // size() function pointer
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_const_function__T2C_Request__menu_number,  // get_const(index) function pointer
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__get_function__T2C_Request__menu_number,  // get(index) function pointer
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__fetch_function__T2C_Request__menu_number,  // fetch(index, &value) function pointer
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__assign_function__T2C_Request__menu_number,  // assign(index, value) function pointer
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__resize_function__T2C_Request__menu_number  // resize(index) function pointer
  },
  {
    "price",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(serving_robot_msgs__srv__T2C_Request, price),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_message_members = {
  "serving_robot_msgs__srv",  // message namespace
  "T2C_Request",  // message name
  4,  // number of fields
  sizeof(serving_robot_msgs__srv__T2C_Request),
  serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_message_member_array,  // message members
  serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_message_type_support_handle = {
  0,
  &serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_serving_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, serving_robot_msgs, srv, T2C_Request)() {
  if (!serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_message_type_support_handle.typesupport_identifier) {
    serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &serving_robot_msgs__srv__T2C_Request__rosidl_typesupport_introspection_c__T2C_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "serving_robot_msgs/srv/detail/t2_c__rosidl_typesupport_introspection_c.h"
// already included above
// #include "serving_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "serving_robot_msgs/srv/detail/t2_c__functions.h"
// already included above
// #include "serving_robot_msgs/srv/detail/t2_c__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  serving_robot_msgs__srv__T2C_Response__init(message_memory);
}

void serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_fini_function(void * message_memory)
{
  serving_robot_msgs__srv__T2C_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_message_member_array[1] = {
  {
    "succeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(serving_robot_msgs__srv__T2C_Response, succeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_message_members = {
  "serving_robot_msgs__srv",  // message namespace
  "T2C_Response",  // message name
  1,  // number of fields
  sizeof(serving_robot_msgs__srv__T2C_Response),
  serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_message_member_array,  // message members
  serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_message_type_support_handle = {
  0,
  &serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_serving_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, serving_robot_msgs, srv, T2C_Response)() {
  if (!serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_message_type_support_handle.typesupport_identifier) {
    serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &serving_robot_msgs__srv__T2C_Response__rosidl_typesupport_introspection_c__T2C_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "serving_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "serving_robot_msgs/srv/detail/t2_c__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers serving_robot_msgs__srv__detail__t2_c__rosidl_typesupport_introspection_c__T2C_service_members = {
  "serving_robot_msgs__srv",  // service namespace
  "T2C",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // serving_robot_msgs__srv__detail__t2_c__rosidl_typesupport_introspection_c__T2C_Request_message_type_support_handle,
  NULL  // response message
  // serving_robot_msgs__srv__detail__t2_c__rosidl_typesupport_introspection_c__T2C_Response_message_type_support_handle
};

static rosidl_service_type_support_t serving_robot_msgs__srv__detail__t2_c__rosidl_typesupport_introspection_c__T2C_service_type_support_handle = {
  0,
  &serving_robot_msgs__srv__detail__t2_c__rosidl_typesupport_introspection_c__T2C_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, serving_robot_msgs, srv, T2C_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, serving_robot_msgs, srv, T2C_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_serving_robot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, serving_robot_msgs, srv, T2C)() {
  if (!serving_robot_msgs__srv__detail__t2_c__rosidl_typesupport_introspection_c__T2C_service_type_support_handle.typesupport_identifier) {
    serving_robot_msgs__srv__detail__t2_c__rosidl_typesupport_introspection_c__T2C_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)serving_robot_msgs__srv__detail__t2_c__rosidl_typesupport_introspection_c__T2C_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, serving_robot_msgs, srv, T2C_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, serving_robot_msgs, srv, T2C_Response)()->data;
  }

  return &serving_robot_msgs__srv__detail__t2_c__rosidl_typesupport_introspection_c__T2C_service_type_support_handle;
}
