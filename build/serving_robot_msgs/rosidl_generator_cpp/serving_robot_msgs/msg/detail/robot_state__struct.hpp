// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serving_robot_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__serving_robot_msgs__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__serving_robot_msgs__msg__RobotState __declspec(deprecated)
#endif

namespace serving_robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = false;
    }
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = false;
    }
  }

  // field types and members
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serving_robot_msgs::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const serving_robot_msgs::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serving_robot_msgs::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serving_robot_msgs::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serving_robot_msgs::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serving_robot_msgs::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serving_robot_msgs::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serving_robot_msgs::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serving_robot_msgs::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serving_robot_msgs::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serving_robot_msgs__msg__RobotState
    std::shared_ptr<serving_robot_msgs::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serving_robot_msgs__msg__RobotState
    std::shared_ptr<serving_robot_msgs::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  serving_robot_msgs::msg::RobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace serving_robot_msgs

#endif  // SERVING_ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
