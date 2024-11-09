// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serving_robot_msgs:srv/T2C.idl
// generated code does not contain a copyright notice

#ifndef SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__STRUCT_HPP_
#define SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__serving_robot_msgs__srv__T2C_Request __attribute__((deprecated))
#else
# define DEPRECATED__serving_robot_msgs__srv__T2C_Request __declspec(deprecated)
#endif

namespace serving_robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct T2C_Request_
{
  using Type = T2C_Request_<ContainerAllocator>;

  explicit T2C_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_number = 0l;
      this->price = 0l;
    }
  }

  explicit T2C_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_number = 0l;
      this->price = 0l;
    }
  }

  // field types and members
  using _table_number_type =
    int32_t;
  _table_number_type table_number;
  using _menu_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _menu_type menu;
  using _menu_number_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _menu_number_type menu_number;
  using _price_type =
    int32_t;
  _price_type price;

  // setters for named parameter idiom
  Type & set__table_number(
    const int32_t & _arg)
  {
    this->table_number = _arg;
    return *this;
  }
  Type & set__menu(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->menu = _arg;
    return *this;
  }
  Type & set__menu_number(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->menu_number = _arg;
    return *this;
  }
  Type & set__price(
    const int32_t & _arg)
  {
    this->price = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serving_robot_msgs::srv::T2C_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const serving_robot_msgs::srv::T2C_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serving_robot_msgs::srv::T2C_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serving_robot_msgs::srv::T2C_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serving_robot_msgs::srv::T2C_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serving_robot_msgs::srv::T2C_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serving_robot_msgs::srv::T2C_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serving_robot_msgs::srv::T2C_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serving_robot_msgs::srv::T2C_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serving_robot_msgs::srv::T2C_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serving_robot_msgs__srv__T2C_Request
    std::shared_ptr<serving_robot_msgs::srv::T2C_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serving_robot_msgs__srv__T2C_Request
    std::shared_ptr<serving_robot_msgs::srv::T2C_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const T2C_Request_ & other) const
  {
    if (this->table_number != other.table_number) {
      return false;
    }
    if (this->menu != other.menu) {
      return false;
    }
    if (this->menu_number != other.menu_number) {
      return false;
    }
    if (this->price != other.price) {
      return false;
    }
    return true;
  }
  bool operator!=(const T2C_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct T2C_Request_

// alias to use template instance with default allocator
using T2C_Request =
  serving_robot_msgs::srv::T2C_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace serving_robot_msgs


#ifndef _WIN32
# define DEPRECATED__serving_robot_msgs__srv__T2C_Response __attribute__((deprecated))
#else
# define DEPRECATED__serving_robot_msgs__srv__T2C_Response __declspec(deprecated)
#endif

namespace serving_robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct T2C_Response_
{
  using Type = T2C_Response_<ContainerAllocator>;

  explicit T2C_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeed = false;
    }
  }

  explicit T2C_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeed = false;
    }
  }

  // field types and members
  using _succeed_type =
    bool;
  _succeed_type succeed;

  // setters for named parameter idiom
  Type & set__succeed(
    const bool & _arg)
  {
    this->succeed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serving_robot_msgs::srv::T2C_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const serving_robot_msgs::srv::T2C_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serving_robot_msgs::srv::T2C_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serving_robot_msgs::srv::T2C_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serving_robot_msgs::srv::T2C_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serving_robot_msgs::srv::T2C_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serving_robot_msgs::srv::T2C_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serving_robot_msgs::srv::T2C_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serving_robot_msgs::srv::T2C_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serving_robot_msgs::srv::T2C_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serving_robot_msgs__srv__T2C_Response
    std::shared_ptr<serving_robot_msgs::srv::T2C_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serving_robot_msgs__srv__T2C_Response
    std::shared_ptr<serving_robot_msgs::srv::T2C_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const T2C_Response_ & other) const
  {
    if (this->succeed != other.succeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const T2C_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct T2C_Response_

// alias to use template instance with default allocator
using T2C_Response =
  serving_robot_msgs::srv::T2C_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace serving_robot_msgs

namespace serving_robot_msgs
{

namespace srv
{

struct T2C
{
  using Request = serving_robot_msgs::srv::T2C_Request;
  using Response = serving_robot_msgs::srv::T2C_Response;
};

}  // namespace srv

}  // namespace serving_robot_msgs

#endif  // SERVING_ROBOT_MSGS__SRV__DETAIL__T2_C__STRUCT_HPP_
