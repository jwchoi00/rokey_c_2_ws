// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from serving_robot_msgs:action/C2R.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__ACTION__DETAIL__C2_R__STRUCT_H_
#define SERVING_ROBOT_MSGS__ACTION__DETAIL__C2_R__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/C2R in the package serving_robot_msgs.
typedef struct serving_robot_msgs__action__C2R_Goal
{
  uint8_t table_num;
} serving_robot_msgs__action__C2R_Goal;

// Struct for a sequence of serving_robot_msgs__action__C2R_Goal.
typedef struct serving_robot_msgs__action__C2R_Goal__Sequence
{
  serving_robot_msgs__action__C2R_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__action__C2R_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/C2R in the package serving_robot_msgs.
typedef struct serving_robot_msgs__action__C2R_Result
{
  bool done;
} serving_robot_msgs__action__C2R_Result;

// Struct for a sequence of serving_robot_msgs__action__C2R_Result.
typedef struct serving_robot_msgs__action__C2R_Result__Sequence
{
  serving_robot_msgs__action__C2R_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__action__C2R_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/C2R in the package serving_robot_msgs.
typedef struct serving_robot_msgs__action__C2R_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} serving_robot_msgs__action__C2R_Feedback;

// Struct for a sequence of serving_robot_msgs__action__C2R_Feedback.
typedef struct serving_robot_msgs__action__C2R_Feedback__Sequence
{
  serving_robot_msgs__action__C2R_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__action__C2R_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "serving_robot_msgs/action/detail/c2_r__struct.h"

/// Struct defined in action/C2R in the package serving_robot_msgs.
typedef struct serving_robot_msgs__action__C2R_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  serving_robot_msgs__action__C2R_Goal goal;
} serving_robot_msgs__action__C2R_SendGoal_Request;

// Struct for a sequence of serving_robot_msgs__action__C2R_SendGoal_Request.
typedef struct serving_robot_msgs__action__C2R_SendGoal_Request__Sequence
{
  serving_robot_msgs__action__C2R_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__action__C2R_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/C2R in the package serving_robot_msgs.
typedef struct serving_robot_msgs__action__C2R_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} serving_robot_msgs__action__C2R_SendGoal_Response;

// Struct for a sequence of serving_robot_msgs__action__C2R_SendGoal_Response.
typedef struct serving_robot_msgs__action__C2R_SendGoal_Response__Sequence
{
  serving_robot_msgs__action__C2R_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__action__C2R_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/C2R in the package serving_robot_msgs.
typedef struct serving_robot_msgs__action__C2R_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} serving_robot_msgs__action__C2R_GetResult_Request;

// Struct for a sequence of serving_robot_msgs__action__C2R_GetResult_Request.
typedef struct serving_robot_msgs__action__C2R_GetResult_Request__Sequence
{
  serving_robot_msgs__action__C2R_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__action__C2R_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "serving_robot_msgs/action/detail/c2_r__struct.h"

/// Struct defined in action/C2R in the package serving_robot_msgs.
typedef struct serving_robot_msgs__action__C2R_GetResult_Response
{
  int8_t status;
  serving_robot_msgs__action__C2R_Result result;
} serving_robot_msgs__action__C2R_GetResult_Response;

// Struct for a sequence of serving_robot_msgs__action__C2R_GetResult_Response.
typedef struct serving_robot_msgs__action__C2R_GetResult_Response__Sequence
{
  serving_robot_msgs__action__C2R_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__action__C2R_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "serving_robot_msgs/action/detail/c2_r__struct.h"

/// Struct defined in action/C2R in the package serving_robot_msgs.
typedef struct serving_robot_msgs__action__C2R_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  serving_robot_msgs__action__C2R_Feedback feedback;
} serving_robot_msgs__action__C2R_FeedbackMessage;

// Struct for a sequence of serving_robot_msgs__action__C2R_FeedbackMessage.
typedef struct serving_robot_msgs__action__C2R_FeedbackMessage__Sequence
{
  serving_robot_msgs__action__C2R_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serving_robot_msgs__action__C2R_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVING_ROBOT_MSGS__ACTION__DETAIL__C2_R__STRUCT_H_
