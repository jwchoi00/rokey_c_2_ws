// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from c2_turtle_interface:msg/OrderItem.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "c2_turtle_interface/msg/detail/order_item__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace c2_turtle_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OrderItem_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) c2_turtle_interface::msg::OrderItem(_init);
}

void OrderItem_fini_function(void * message_memory)
{
  auto typed_message = static_cast<c2_turtle_interface::msg::OrderItem *>(message_memory);
  typed_message->~OrderItem();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OrderItem_message_member_array[3] = {
  {
    "menu_item",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface::msg::OrderItem, menu_item),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quantity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface::msg::OrderItem, quantity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "price",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface::msg::OrderItem, price),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OrderItem_message_members = {
  "c2_turtle_interface::msg",  // message namespace
  "OrderItem",  // message name
  3,  // number of fields
  sizeof(c2_turtle_interface::msg::OrderItem),
  OrderItem_message_member_array,  // message members
  OrderItem_init_function,  // function to initialize message memory (memory has to be allocated)
  OrderItem_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OrderItem_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OrderItem_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace c2_turtle_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<c2_turtle_interface::msg::OrderItem>()
{
  return &::c2_turtle_interface::msg::rosidl_typesupport_introspection_cpp::OrderItem_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, c2_turtle_interface, msg, OrderItem)() {
  return &::c2_turtle_interface::msg::rosidl_typesupport_introspection_cpp::OrderItem_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
