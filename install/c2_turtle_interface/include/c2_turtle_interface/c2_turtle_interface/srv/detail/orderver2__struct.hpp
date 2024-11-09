// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from c2_turtle_interface:srv/Orderver2.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__ORDERVER2__STRUCT_HPP_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__ORDERVER2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__c2_turtle_interface__srv__Orderver2_Request __attribute__((deprecated))
#else
# define DEPRECATED__c2_turtle_interface__srv__Orderver2_Request __declspec(deprecated)
#endif

namespace c2_turtle_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Orderver2_Request_
{
  using Type = Orderver2_Request_<ContainerAllocator>;

  explicit Orderver2_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_number = 0l;
      this->total_price = 0l;
    }
  }

  explicit Orderver2_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_number = 0l;
      this->total_price = 0l;
    }
  }

  // field types and members
  using _table_number_type =
    int32_t;
  _table_number_type table_number;
  using _menu_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _menu_name_type menu_name;
  using _quantity_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _quantity_type quantity;
  using _total_price_type =
    int32_t;
  _total_price_type total_price;

  // setters for named parameter idiom
  Type & set__table_number(
    const int32_t & _arg)
  {
    this->table_number = _arg;
    return *this;
  }
  Type & set__menu_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->menu_name = _arg;
    return *this;
  }
  Type & set__quantity(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->quantity = _arg;
    return *this;
  }
  Type & set__total_price(
    const int32_t & _arg)
  {
    this->total_price = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__c2_turtle_interface__srv__Orderver2_Request
    std::shared_ptr<c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__c2_turtle_interface__srv__Orderver2_Request
    std::shared_ptr<c2_turtle_interface::srv::Orderver2_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Orderver2_Request_ & other) const
  {
    if (this->table_number != other.table_number) {
      return false;
    }
    if (this->menu_name != other.menu_name) {
      return false;
    }
    if (this->quantity != other.quantity) {
      return false;
    }
    if (this->total_price != other.total_price) {
      return false;
    }
    return true;
  }
  bool operator!=(const Orderver2_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Orderver2_Request_

// alias to use template instance with default allocator
using Orderver2_Request =
  c2_turtle_interface::srv::Orderver2_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace c2_turtle_interface


#ifndef _WIN32
# define DEPRECATED__c2_turtle_interface__srv__Orderver2_Response __attribute__((deprecated))
#else
# define DEPRECATED__c2_turtle_interface__srv__Orderver2_Response __declspec(deprecated)
#endif

namespace c2_turtle_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Orderver2_Response_
{
  using Type = Orderver2_Response_<ContainerAllocator>;

  explicit Orderver2_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Orderver2_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__c2_turtle_interface__srv__Orderver2_Response
    std::shared_ptr<c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__c2_turtle_interface__srv__Orderver2_Response
    std::shared_ptr<c2_turtle_interface::srv::Orderver2_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Orderver2_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Orderver2_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Orderver2_Response_

// alias to use template instance with default allocator
using Orderver2_Response =
  c2_turtle_interface::srv::Orderver2_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace c2_turtle_interface

namespace c2_turtle_interface
{

namespace srv
{

struct Orderver2
{
  using Request = c2_turtle_interface::srv::Orderver2_Request;
  using Response = c2_turtle_interface::srv::Orderver2_Response;
};

}  // namespace srv

}  // namespace c2_turtle_interface

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__ORDERVER2__STRUCT_HPP_
