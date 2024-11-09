// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serving_robot_msgs:msg/TotalPrice2C.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__STRUCT_HPP_
#define SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__serving_robot_msgs__msg__TotalPrice2C __attribute__((deprecated))
#else
# define DEPRECATED__serving_robot_msgs__msg__TotalPrice2C __declspec(deprecated)
#endif

namespace serving_robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TotalPrice2C_
{
  using Type = TotalPrice2C_<ContainerAllocator>;

  explicit TotalPrice2C_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->price = 0l;
    }
  }

  explicit TotalPrice2C_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->price = 0l;
    }
  }

  // field types and members
  using _price_type =
    int32_t;
  _price_type price;

  // setters for named parameter idiom
  Type & set__price(
    const int32_t & _arg)
  {
    this->price = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator> *;
  using ConstRawPtr =
    const serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serving_robot_msgs__msg__TotalPrice2C
    std::shared_ptr<serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serving_robot_msgs__msg__TotalPrice2C
    std::shared_ptr<serving_robot_msgs::msg::TotalPrice2C_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TotalPrice2C_ & other) const
  {
    if (this->price != other.price) {
      return false;
    }
    return true;
  }
  bool operator!=(const TotalPrice2C_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TotalPrice2C_

// alias to use template instance with default allocator
using TotalPrice2C =
  serving_robot_msgs::msg::TotalPrice2C_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace serving_robot_msgs

#endif  // SERVING_ROBOT_MSGS__MSG__DETAIL__TOTAL_PRICE2_C__STRUCT_HPP_
