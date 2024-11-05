// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from c2_turtle_interface:srv/GetTotalSales.idl
// generated code does not contain a copyright notice
#include "c2_turtle_interface/srv/detail/get_total_sales__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "c2_turtle_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "c2_turtle_interface/srv/detail/get_total_sales__struct.h"
#include "c2_turtle_interface/srv/detail/get_total_sales__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // date
#include "rosidl_runtime_c/string_functions.h"  // date

// forward declare type support functions


using _GetTotalSales_Request__ros_msg_type = c2_turtle_interface__srv__GetTotalSales_Request;

static bool _GetTotalSales_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetTotalSales_Request__ros_msg_type * ros_message = static_cast<const _GetTotalSales_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: date
  {
    const rosidl_runtime_c__String * str = &ros_message->date;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetTotalSales_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetTotalSales_Request__ros_msg_type * ros_message = static_cast<_GetTotalSales_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->date.data) {
      rosidl_runtime_c__String__init(&ros_message->date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'date'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_c2_turtle_interface
size_t get_serialized_size_c2_turtle_interface__srv__GetTotalSales_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetTotalSales_Request__ros_msg_type * ros_message = static_cast<const _GetTotalSales_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->date.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetTotalSales_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_c2_turtle_interface__srv__GetTotalSales_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_c2_turtle_interface
size_t max_serialized_size_c2_turtle_interface__srv__GetTotalSales_Request(
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

  // member: date
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
    using DataType = c2_turtle_interface__srv__GetTotalSales_Request;
    is_plain =
      (
      offsetof(DataType, date) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetTotalSales_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_c2_turtle_interface__srv__GetTotalSales_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetTotalSales_Request = {
  "c2_turtle_interface::srv",
  "GetTotalSales_Request",
  _GetTotalSales_Request__cdr_serialize,
  _GetTotalSales_Request__cdr_deserialize,
  _GetTotalSales_Request__get_serialized_size,
  _GetTotalSales_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetTotalSales_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetTotalSales_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, c2_turtle_interface, srv, GetTotalSales_Request)() {
  return &_GetTotalSales_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "c2_turtle_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "c2_turtle_interface/srv/detail/get_total_sales__struct.h"
// already included above
// #include "c2_turtle_interface/srv/detail/get_total_sales__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetTotalSales_Response__ros_msg_type = c2_turtle_interface__srv__GetTotalSales_Response;

static bool _GetTotalSales_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetTotalSales_Response__ros_msg_type * ros_message = static_cast<const _GetTotalSales_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: total_sales
  {
    cdr << ros_message->total_sales;
  }

  return true;
}

static bool _GetTotalSales_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetTotalSales_Response__ros_msg_type * ros_message = static_cast<_GetTotalSales_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: total_sales
  {
    cdr >> ros_message->total_sales;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_c2_turtle_interface
size_t get_serialized_size_c2_turtle_interface__srv__GetTotalSales_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetTotalSales_Response__ros_msg_type * ros_message = static_cast<const _GetTotalSales_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name total_sales
  {
    size_t item_size = sizeof(ros_message->total_sales);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetTotalSales_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_c2_turtle_interface__srv__GetTotalSales_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_c2_turtle_interface
size_t max_serialized_size_c2_turtle_interface__srv__GetTotalSales_Response(
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

  // member: total_sales
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
    using DataType = c2_turtle_interface__srv__GetTotalSales_Response;
    is_plain =
      (
      offsetof(DataType, total_sales) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetTotalSales_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_c2_turtle_interface__srv__GetTotalSales_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetTotalSales_Response = {
  "c2_turtle_interface::srv",
  "GetTotalSales_Response",
  _GetTotalSales_Response__cdr_serialize,
  _GetTotalSales_Response__cdr_deserialize,
  _GetTotalSales_Response__get_serialized_size,
  _GetTotalSales_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetTotalSales_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetTotalSales_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, c2_turtle_interface, srv, GetTotalSales_Response)() {
  return &_GetTotalSales_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "c2_turtle_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "c2_turtle_interface/srv/get_total_sales.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetTotalSales__callbacks = {
  "c2_turtle_interface::srv",
  "GetTotalSales",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, c2_turtle_interface, srv, GetTotalSales_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, c2_turtle_interface, srv, GetTotalSales_Response)(),
};

static rosidl_service_type_support_t GetTotalSales__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetTotalSales__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, c2_turtle_interface, srv, GetTotalSales)() {
  return &GetTotalSales__handle;
}

#if defined(__cplusplus)
}
#endif
