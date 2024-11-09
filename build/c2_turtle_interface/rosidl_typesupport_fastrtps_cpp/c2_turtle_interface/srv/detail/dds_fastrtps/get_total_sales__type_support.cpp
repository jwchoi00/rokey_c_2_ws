// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from c2_turtle_interface:srv/GetTotalSales.idl
// generated code does not contain a copyright notice
#include "c2_turtle_interface/srv/detail/get_total_sales__rosidl_typesupport_fastrtps_cpp.hpp"
#include "c2_turtle_interface/srv/detail/get_total_sales__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace c2_turtle_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_c2_turtle_interface
cdr_serialize(
  const c2_turtle_interface::srv::GetTotalSales_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: date
  cdr << ros_message.date;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_c2_turtle_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  c2_turtle_interface::srv::GetTotalSales_Request & ros_message)
{
  // Member: date
  cdr >> ros_message.date;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_c2_turtle_interface
get_serialized_size(
  const c2_turtle_interface::srv::GetTotalSales_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.date.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_c2_turtle_interface
max_serialized_size_GetTotalSales_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: date
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = c2_turtle_interface::srv::GetTotalSales_Request;
    is_plain =
      (
      offsetof(DataType, date) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetTotalSales_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const c2_turtle_interface::srv::GetTotalSales_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetTotalSales_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<c2_turtle_interface::srv::GetTotalSales_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetTotalSales_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const c2_turtle_interface::srv::GetTotalSales_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetTotalSales_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetTotalSales_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetTotalSales_Request__callbacks = {
  "c2_turtle_interface::srv",
  "GetTotalSales_Request",
  _GetTotalSales_Request__cdr_serialize,
  _GetTotalSales_Request__cdr_deserialize,
  _GetTotalSales_Request__get_serialized_size,
  _GetTotalSales_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetTotalSales_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetTotalSales_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace c2_turtle_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_c2_turtle_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<c2_turtle_interface::srv::GetTotalSales_Request>()
{
  return &c2_turtle_interface::srv::typesupport_fastrtps_cpp::_GetTotalSales_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, c2_turtle_interface, srv, GetTotalSales_Request)() {
  return &c2_turtle_interface::srv::typesupport_fastrtps_cpp::_GetTotalSales_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace c2_turtle_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_c2_turtle_interface
cdr_serialize(
  const c2_turtle_interface::srv::GetTotalSales_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: total_sales
  cdr << ros_message.total_sales;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_c2_turtle_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  c2_turtle_interface::srv::GetTotalSales_Response & ros_message)
{
  // Member: total_sales
  cdr >> ros_message.total_sales;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_c2_turtle_interface
get_serialized_size(
  const c2_turtle_interface::srv::GetTotalSales_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: total_sales
  {
    size_t item_size = sizeof(ros_message.total_sales);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_c2_turtle_interface
max_serialized_size_GetTotalSales_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: total_sales
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = c2_turtle_interface::srv::GetTotalSales_Response;
    is_plain =
      (
      offsetof(DataType, total_sales) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetTotalSales_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const c2_turtle_interface::srv::GetTotalSales_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetTotalSales_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<c2_turtle_interface::srv::GetTotalSales_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetTotalSales_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const c2_turtle_interface::srv::GetTotalSales_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetTotalSales_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetTotalSales_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetTotalSales_Response__callbacks = {
  "c2_turtle_interface::srv",
  "GetTotalSales_Response",
  _GetTotalSales_Response__cdr_serialize,
  _GetTotalSales_Response__cdr_deserialize,
  _GetTotalSales_Response__get_serialized_size,
  _GetTotalSales_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetTotalSales_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetTotalSales_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace c2_turtle_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_c2_turtle_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<c2_turtle_interface::srv::GetTotalSales_Response>()
{
  return &c2_turtle_interface::srv::typesupport_fastrtps_cpp::_GetTotalSales_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, c2_turtle_interface, srv, GetTotalSales_Response)() {
  return &c2_turtle_interface::srv::typesupport_fastrtps_cpp::_GetTotalSales_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace c2_turtle_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetTotalSales__callbacks = {
  "c2_turtle_interface::srv",
  "GetTotalSales",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, c2_turtle_interface, srv, GetTotalSales_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, c2_turtle_interface, srv, GetTotalSales_Response)(),
};

static rosidl_service_type_support_t _GetTotalSales__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetTotalSales__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace c2_turtle_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_c2_turtle_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<c2_turtle_interface::srv::GetTotalSales>()
{
  return &c2_turtle_interface::srv::typesupport_fastrtps_cpp::_GetTotalSales__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, c2_turtle_interface, srv, GetTotalSales)() {
  return &c2_turtle_interface::srv::typesupport_fastrtps_cpp::_GetTotalSales__handle;
}

#ifdef __cplusplus
}
#endif
