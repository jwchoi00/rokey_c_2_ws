// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from table_order_interface:srv/SetOrder.idl
// generated code does not contain a copyright notice

#ifndef TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__STRUCT_HPP_
#define TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__table_order_interface__srv__SetOrder_Request __attribute__((deprecated))
#else
# define DEPRECATED__table_order_interface__srv__SetOrder_Request __declspec(deprecated)
#endif

namespace table_order_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetOrder_Request_
{
  using Type = SetOrder_Request_<ContainerAllocator>;

  explicit SetOrder_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_number = 0l;
      this->price = 0l;
    }
  }

  explicit SetOrder_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    table_order_interface::srv::SetOrder_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const table_order_interface::srv::SetOrder_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<table_order_interface::srv::SetOrder_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<table_order_interface::srv::SetOrder_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      table_order_interface::srv::SetOrder_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<table_order_interface::srv::SetOrder_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      table_order_interface::srv::SetOrder_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<table_order_interface::srv::SetOrder_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<table_order_interface::srv::SetOrder_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<table_order_interface::srv::SetOrder_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__table_order_interface__srv__SetOrder_Request
    std::shared_ptr<table_order_interface::srv::SetOrder_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__table_order_interface__srv__SetOrder_Request
    std::shared_ptr<table_order_interface::srv::SetOrder_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetOrder_Request_ & other) const
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
  bool operator!=(const SetOrder_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetOrder_Request_

// alias to use template instance with default allocator
using SetOrder_Request =
  table_order_interface::srv::SetOrder_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace table_order_interface


#ifndef _WIN32
# define DEPRECATED__table_order_interface__srv__SetOrder_Response __attribute__((deprecated))
#else
# define DEPRECATED__table_order_interface__srv__SetOrder_Response __declspec(deprecated)
#endif

namespace table_order_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetOrder_Response_
{
  using Type = SetOrder_Response_<ContainerAllocator>;

  explicit SetOrder_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeed = false;
    }
  }

  explicit SetOrder_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    table_order_interface::srv::SetOrder_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const table_order_interface::srv::SetOrder_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<table_order_interface::srv::SetOrder_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<table_order_interface::srv::SetOrder_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      table_order_interface::srv::SetOrder_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<table_order_interface::srv::SetOrder_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      table_order_interface::srv::SetOrder_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<table_order_interface::srv::SetOrder_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<table_order_interface::srv::SetOrder_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<table_order_interface::srv::SetOrder_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__table_order_interface__srv__SetOrder_Response
    std::shared_ptr<table_order_interface::srv::SetOrder_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__table_order_interface__srv__SetOrder_Response
    std::shared_ptr<table_order_interface::srv::SetOrder_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetOrder_Response_ & other) const
  {
    if (this->succeed != other.succeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetOrder_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetOrder_Response_

// alias to use template instance with default allocator
using SetOrder_Response =
  table_order_interface::srv::SetOrder_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace table_order_interface

namespace table_order_interface
{

namespace srv
{

struct SetOrder
{
  using Request = table_order_interface::srv::SetOrder_Request;
  using Response = table_order_interface::srv::SetOrder_Response;
};

}  // namespace srv

}  // namespace table_order_interface

#endif  // TABLE_ORDER_INTERFACE__SRV__DETAIL__SET_ORDER__STRUCT_HPP_
