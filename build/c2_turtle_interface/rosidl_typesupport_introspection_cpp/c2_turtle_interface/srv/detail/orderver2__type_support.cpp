// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from c2_turtle_interface:srv/Orderver2.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "c2_turtle_interface/srv/detail/orderver2__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace c2_turtle_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Orderver2_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) c2_turtle_interface::srv::Orderver2_Request(_init);
}

void Orderver2_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<c2_turtle_interface::srv::Orderver2_Request *>(message_memory);
  typed_message->~Orderver2_Request();
}

size_t size_function__Orderver2_Request__menu_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Orderver2_Request__menu_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Orderver2_Request__menu_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Orderver2_Request__menu_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Orderver2_Request__menu_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Orderver2_Request__menu_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Orderver2_Request__menu_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Orderver2_Request__menu_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Orderver2_Request__quantity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Orderver2_Request__quantity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Orderver2_Request__quantity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Orderver2_Request__quantity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Orderver2_Request__quantity(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Orderver2_Request__quantity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Orderver2_Request__quantity(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__Orderver2_Request__quantity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Orderver2_Request_message_member_array[4] = {
  {
    "table_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface::srv::Orderver2_Request, table_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "menu_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface::srv::Orderver2_Request, menu_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__Orderver2_Request__menu_name,  // size() function pointer
    get_const_function__Orderver2_Request__menu_name,  // get_const(index) function pointer
    get_function__Orderver2_Request__menu_name,  // get(index) function pointer
    fetch_function__Orderver2_Request__menu_name,  // fetch(index, &value) function pointer
    assign_function__Orderver2_Request__menu_name,  // assign(index, value) function pointer
    resize_function__Orderver2_Request__menu_name  // resize(index) function pointer
  },
  {
    "quantity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface::srv::Orderver2_Request, quantity),  // bytes offset in struct
    nullptr,  // default value
    size_function__Orderver2_Request__quantity,  // size() function pointer
    get_const_function__Orderver2_Request__quantity,  // get_const(index) function pointer
    get_function__Orderver2_Request__quantity,  // get(index) function pointer
    fetch_function__Orderver2_Request__quantity,  // fetch(index, &value) function pointer
    assign_function__Orderver2_Request__quantity,  // assign(index, value) function pointer
    resize_function__Orderver2_Request__quantity  // resize(index) function pointer
  },
  {
    "total_price",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface::srv::Orderver2_Request, total_price),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Orderver2_Request_message_members = {
  "c2_turtle_interface::srv",  // message namespace
  "Orderver2_Request",  // message name
  4,  // number of fields
  sizeof(c2_turtle_interface::srv::Orderver2_Request),
  Orderver2_Request_message_member_array,  // message members
  Orderver2_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Orderver2_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Orderver2_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Orderver2_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace c2_turtle_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<c2_turtle_interface::srv::Orderver2_Request>()
{
  return &::c2_turtle_interface::srv::rosidl_typesupport_introspection_cpp::Orderver2_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, c2_turtle_interface, srv, Orderver2_Request)() {
  return &::c2_turtle_interface::srv::rosidl_typesupport_introspection_cpp::Orderver2_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "c2_turtle_interface/srv/detail/orderver2__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace c2_turtle_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Orderver2_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) c2_turtle_interface::srv::Orderver2_Response(_init);
}

void Orderver2_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<c2_turtle_interface::srv::Orderver2_Response *>(message_memory);
  typed_message->~Orderver2_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Orderver2_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(c2_turtle_interface::srv::Orderver2_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Orderver2_Response_message_members = {
  "c2_turtle_interface::srv",  // message namespace
  "Orderver2_Response",  // message name
  1,  // number of fields
  sizeof(c2_turtle_interface::srv::Orderver2_Response),
  Orderver2_Response_message_member_array,  // message members
  Orderver2_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Orderver2_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Orderver2_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Orderver2_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace c2_turtle_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<c2_turtle_interface::srv::Orderver2_Response>()
{
  return &::c2_turtle_interface::srv::rosidl_typesupport_introspection_cpp::Orderver2_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, c2_turtle_interface, srv, Orderver2_Response)() {
  return &::c2_turtle_interface::srv::rosidl_typesupport_introspection_cpp::Orderver2_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "c2_turtle_interface/srv/detail/orderver2__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace c2_turtle_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Orderver2_service_members = {
  "c2_turtle_interface::srv",  // service namespace
  "Orderver2",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<c2_turtle_interface::srv::Orderver2>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Orderver2_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Orderver2_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace c2_turtle_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<c2_turtle_interface::srv::Orderver2>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::c2_turtle_interface::srv::rosidl_typesupport_introspection_cpp::Orderver2_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::c2_turtle_interface::srv::Orderver2_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::c2_turtle_interface::srv::Orderver2_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, c2_turtle_interface, srv, Orderver2)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<c2_turtle_interface::srv::Orderver2>();
}

#ifdef __cplusplus
}
#endif
