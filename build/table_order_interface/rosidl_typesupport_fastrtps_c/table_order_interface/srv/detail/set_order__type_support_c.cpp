// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from table_order_interface:srv/SetOrder.idl
// generated code does not contain a copyright notice
#include "table_order_interface/srv/detail/set_order__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "table_order_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "table_order_interface/srv/detail/set_order__struct.h"
#include "table_order_interface/srv/detail/set_order__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // menu_number
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // menu_number
#include "rosidl_runtime_c/string.h"  // menu
#include "rosidl_runtime_c/string_functions.h"  // menu

// forward declare type support functions


using _SetOrder_Request__ros_msg_type = table_order_interface__srv__SetOrder_Request;

static bool _SetOrder_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetOrder_Request__ros_msg_type * ros_message = static_cast<const _SetOrder_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: table_number
  {
    cdr << ros_message->table_number;
  }

  // Field name: menu
  {
    size_t size = ros_message->menu.size;
    auto array_ptr = ros_message->menu.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: menu_number
  {
    size_t size = ros_message->menu_number.size;
    auto array_ptr = ros_message->menu_number.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: price
  {
    cdr << ros_message->price;
  }

  return true;
}

static bool _SetOrder_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetOrder_Request__ros_msg_type * ros_message = static_cast<_SetOrder_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: table_number
  {
    cdr >> ros_message->table_number;
  }

  // Field name: menu
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->menu.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->menu);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->menu, size)) {
      fprintf(stderr, "failed to create array for field 'menu'");
      return false;
    }
    auto array_ptr = ros_message->menu.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'menu'\n");
        return false;
      }
    }
  }

  // Field name: menu_number
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->menu_number.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->menu_number);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->menu_number, size)) {
      fprintf(stderr, "failed to create array for field 'menu_number'");
      return false;
    }
    auto array_ptr = ros_message->menu_number.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: price
  {
    cdr >> ros_message->price;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_table_order_interface
size_t get_serialized_size_table_order_interface__srv__SetOrder_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetOrder_Request__ros_msg_type * ros_message = static_cast<const _SetOrder_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name menu
  {
    size_t array_size = ros_message->menu.size;
    auto array_ptr = ros_message->menu.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name menu_number
  {
    size_t array_size = ros_message->menu_number.size;
    auto array_ptr = ros_message->menu_number.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name price
  {
    size_t item_size = sizeof(ros_message->price);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetOrder_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_table_order_interface__srv__SetOrder_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_table_order_interface
size_t max_serialized_size_table_order_interface__srv__SetOrder_Request(
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
  // member: menu
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: menu_number
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: price
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = table_order_interface__srv__SetOrder_Request;
    is_plain =
      (
      offsetof(DataType, price) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetOrder_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_table_order_interface__srv__SetOrder_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetOrder_Request = {
  "table_order_interface::srv",
  "SetOrder_Request",
  _SetOrder_Request__cdr_serialize,
  _SetOrder_Request__cdr_deserialize,
  _SetOrder_Request__get_serialized_size,
  _SetOrder_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetOrder_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetOrder_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, table_order_interface, srv, SetOrder_Request)() {
  return &_SetOrder_Request__type_support;
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
// #include "table_order_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "table_order_interface/srv/detail/set_order__struct.h"
// already included above
// #include "table_order_interface/srv/detail/set_order__functions.h"
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


using _SetOrder_Response__ros_msg_type = table_order_interface__srv__SetOrder_Response;

static bool _SetOrder_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetOrder_Response__ros_msg_type * ros_message = static_cast<const _SetOrder_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SetOrder_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetOrder_Response__ros_msg_type * ros_message = static_cast<_SetOrder_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_table_order_interface
size_t get_serialized_size_table_order_interface__srv__SetOrder_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetOrder_Response__ros_msg_type * ros_message = static_cast<const _SetOrder_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _SetOrder_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_table_order_interface__srv__SetOrder_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_table_order_interface
size_t max_serialized_size_table_order_interface__srv__SetOrder_Response(
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
    using DataType = table_order_interface__srv__SetOrder_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetOrder_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_table_order_interface__srv__SetOrder_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetOrder_Response = {
  "table_order_interface::srv",
  "SetOrder_Response",
  _SetOrder_Response__cdr_serialize,
  _SetOrder_Response__cdr_deserialize,
  _SetOrder_Response__get_serialized_size,
  _SetOrder_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetOrder_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetOrder_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, table_order_interface, srv, SetOrder_Response)() {
  return &_SetOrder_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "table_order_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "table_order_interface/srv/set_order.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetOrder__callbacks = {
  "table_order_interface::srv",
  "SetOrder",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, table_order_interface, srv, SetOrder_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, table_order_interface, srv, SetOrder_Response)(),
};

static rosidl_service_type_support_t SetOrder__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetOrder__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, table_order_interface, srv, SetOrder)() {
  return &SetOrder__handle;
}

#if defined(__cplusplus)
}
#endif
