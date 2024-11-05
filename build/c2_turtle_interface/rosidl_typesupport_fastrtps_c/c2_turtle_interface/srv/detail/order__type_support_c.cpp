// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from c2_turtle_interface:srv/Order.idl
// generated code does not contain a copyright notice
#include "c2_turtle_interface/srv/detail/order__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "c2_turtle_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "c2_turtle_interface/srv/detail/order__struct.h"
#include "c2_turtle_interface/srv/detail/order__functions.h"
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

#include "rosidl_runtime_c/string.h"  // menu_item
#include "rosidl_runtime_c/string_functions.h"  // menu_item

// forward declare type support functions


using _Order_Request__ros_msg_type = c2_turtle_interface__srv__Order_Request;

static bool _Order_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Order_Request__ros_msg_type * ros_message = static_cast<const _Order_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: table_number
  {
    cdr << ros_message->table_number;
  }

  // Field name: menu_item
  {
    const rosidl_runtime_c__String * str = &ros_message->menu_item;
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

  // Field name: quantity
  {
    cdr << ros_message->quantity;
  }

  // Field name: total_price
  {
    cdr << ros_message->total_price;
  }

  return true;
}

static bool _Order_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Order_Request__ros_msg_type * ros_message = static_cast<_Order_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: table_number
  {
    cdr >> ros_message->table_number;
  }

  // Field name: menu_item
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->menu_item.data) {
      rosidl_runtime_c__String__init(&ros_message->menu_item);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->menu_item,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'menu_item'\n");
      return false;
    }
  }

  // Field name: quantity
  {
    cdr >> ros_message->quantity;
  }

  // Field name: total_price
  {
    cdr >> ros_message->total_price;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_c2_turtle_interface
size_t get_serialized_size_c2_turtle_interface__srv__Order_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Order_Request__ros_msg_type * ros_message = static_cast<const _Order_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name table_number
  {
    size_t item_size = sizeof(ros_message->table_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name menu_item
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->menu_item.size + 1);
  // field.name quantity
  {
    size_t item_size = sizeof(ros_message->quantity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_price
  {
    size_t item_size = sizeof(ros_message->total_price);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Order_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_c2_turtle_interface__srv__Order_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_c2_turtle_interface
size_t max_serialized_size_c2_turtle_interface__srv__Order_Request(
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

  // member: table_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: menu_item
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
  // member: quantity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_price
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
    using DataType = c2_turtle_interface__srv__Order_Request;
    is_plain =
      (
      offsetof(DataType, total_price) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Order_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_c2_turtle_interface__srv__Order_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Order_Request = {
  "c2_turtle_interface::srv",
  "Order_Request",
  _Order_Request__cdr_serialize,
  _Order_Request__cdr_deserialize,
  _Order_Request__get_serialized_size,
  _Order_Request__max_serialized_size
};

static rosidl_message_type_support_t _Order_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Order_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, c2_turtle_interface, srv, Order_Request)() {
  return &_Order_Request__type_support;
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
// #include "c2_turtle_interface/srv/detail/order__struct.h"
// already included above
// #include "c2_turtle_interface/srv/detail/order__functions.h"
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


using _Order_Response__ros_msg_type = c2_turtle_interface__srv__Order_Response;

static bool _Order_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Order_Response__ros_msg_type * ros_message = static_cast<const _Order_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _Order_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Order_Response__ros_msg_type * ros_message = static_cast<_Order_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_c2_turtle_interface
size_t get_serialized_size_c2_turtle_interface__srv__Order_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Order_Response__ros_msg_type * ros_message = static_cast<const _Order_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Order_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_c2_turtle_interface__srv__Order_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_c2_turtle_interface
size_t max_serialized_size_c2_turtle_interface__srv__Order_Response(
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

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = c2_turtle_interface__srv__Order_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Order_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_c2_turtle_interface__srv__Order_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Order_Response = {
  "c2_turtle_interface::srv",
  "Order_Response",
  _Order_Response__cdr_serialize,
  _Order_Response__cdr_deserialize,
  _Order_Response__get_serialized_size,
  _Order_Response__max_serialized_size
};

static rosidl_message_type_support_t _Order_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Order_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, c2_turtle_interface, srv, Order_Response)() {
  return &_Order_Response__type_support;
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
#include "c2_turtle_interface/srv/order.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Order__callbacks = {
  "c2_turtle_interface::srv",
  "Order",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, c2_turtle_interface, srv, Order_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, c2_turtle_interface, srv, Order_Response)(),
};

static rosidl_service_type_support_t Order__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Order__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, c2_turtle_interface, srv, Order)() {
  return &Order__handle;
}

#if defined(__cplusplus)
}
#endif