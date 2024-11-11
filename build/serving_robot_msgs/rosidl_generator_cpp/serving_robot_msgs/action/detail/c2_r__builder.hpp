// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serving_robot_msgs:action/C2R.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__ACTION__DETAIL__C2_R__BUILDER_HPP_
#define SERVING_ROBOT_MSGS__ACTION__DETAIL__C2_R__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serving_robot_msgs/action/detail/c2_r__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serving_robot_msgs
{

namespace action
{

namespace builder
{

class Init_C2R_Goal_table_num
{
public:
  Init_C2R_Goal_table_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::serving_robot_msgs::action::C2R_Goal table_num(::serving_robot_msgs::action::C2R_Goal::_table_num_type arg)
  {
    msg_.table_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::action::C2R_Goal>()
{
  return serving_robot_msgs::action::builder::Init_C2R_Goal_table_num();
}

}  // namespace serving_robot_msgs


namespace serving_robot_msgs
{

namespace action
{

namespace builder
{

class Init_C2R_Result_done
{
public:
  Init_C2R_Result_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::serving_robot_msgs::action::C2R_Result done(::serving_robot_msgs::action::C2R_Result::_done_type arg)
  {
    msg_.done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::action::C2R_Result>()
{
  return serving_robot_msgs::action::builder::Init_C2R_Result_done();
}

}  // namespace serving_robot_msgs


namespace serving_robot_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::action::C2R_Feedback>()
{
  return ::serving_robot_msgs::action::C2R_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace serving_robot_msgs


namespace serving_robot_msgs
{

namespace action
{

namespace builder
{

class Init_C2R_SendGoal_Request_goal
{
public:
  explicit Init_C2R_SendGoal_Request_goal(::serving_robot_msgs::action::C2R_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::serving_robot_msgs::action::C2R_SendGoal_Request goal(::serving_robot_msgs::action::C2R_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_SendGoal_Request msg_;
};

class Init_C2R_SendGoal_Request_goal_id
{
public:
  Init_C2R_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_C2R_SendGoal_Request_goal goal_id(::serving_robot_msgs::action::C2R_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_C2R_SendGoal_Request_goal(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::action::C2R_SendGoal_Request>()
{
  return serving_robot_msgs::action::builder::Init_C2R_SendGoal_Request_goal_id();
}

}  // namespace serving_robot_msgs


namespace serving_robot_msgs
{

namespace action
{

namespace builder
{

class Init_C2R_SendGoal_Response_stamp
{
public:
  explicit Init_C2R_SendGoal_Response_stamp(::serving_robot_msgs::action::C2R_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::serving_robot_msgs::action::C2R_SendGoal_Response stamp(::serving_robot_msgs::action::C2R_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_SendGoal_Response msg_;
};

class Init_C2R_SendGoal_Response_accepted
{
public:
  Init_C2R_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_C2R_SendGoal_Response_stamp accepted(::serving_robot_msgs::action::C2R_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_C2R_SendGoal_Response_stamp(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::action::C2R_SendGoal_Response>()
{
  return serving_robot_msgs::action::builder::Init_C2R_SendGoal_Response_accepted();
}

}  // namespace serving_robot_msgs


namespace serving_robot_msgs
{

namespace action
{

namespace builder
{

class Init_C2R_GetResult_Request_goal_id
{
public:
  Init_C2R_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::serving_robot_msgs::action::C2R_GetResult_Request goal_id(::serving_robot_msgs::action::C2R_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::action::C2R_GetResult_Request>()
{
  return serving_robot_msgs::action::builder::Init_C2R_GetResult_Request_goal_id();
}

}  // namespace serving_robot_msgs


namespace serving_robot_msgs
{

namespace action
{

namespace builder
{

class Init_C2R_GetResult_Response_result
{
public:
  explicit Init_C2R_GetResult_Response_result(::serving_robot_msgs::action::C2R_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::serving_robot_msgs::action::C2R_GetResult_Response result(::serving_robot_msgs::action::C2R_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_GetResult_Response msg_;
};

class Init_C2R_GetResult_Response_status
{
public:
  Init_C2R_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_C2R_GetResult_Response_result status(::serving_robot_msgs::action::C2R_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_C2R_GetResult_Response_result(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::action::C2R_GetResult_Response>()
{
  return serving_robot_msgs::action::builder::Init_C2R_GetResult_Response_status();
}

}  // namespace serving_robot_msgs


namespace serving_robot_msgs
{

namespace action
{

namespace builder
{

class Init_C2R_FeedbackMessage_feedback
{
public:
  explicit Init_C2R_FeedbackMessage_feedback(::serving_robot_msgs::action::C2R_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::serving_robot_msgs::action::C2R_FeedbackMessage feedback(::serving_robot_msgs::action::C2R_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_FeedbackMessage msg_;
};

class Init_C2R_FeedbackMessage_goal_id
{
public:
  Init_C2R_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_C2R_FeedbackMessage_feedback goal_id(::serving_robot_msgs::action::C2R_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_C2R_FeedbackMessage_feedback(msg_);
  }

private:
  ::serving_robot_msgs::action::C2R_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::serving_robot_msgs::action::C2R_FeedbackMessage>()
{
  return serving_robot_msgs::action::builder::Init_C2R_FeedbackMessage_goal_id();
}

}  // namespace serving_robot_msgs

#endif  // SERVING_ROBOT_MSGS__ACTION__DETAIL__C2_R__BUILDER_HPP_
