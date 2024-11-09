// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from c2_turtle_interface:srv/GetTotalSales.idl
// generated code does not contain a copyright notice

#ifndef C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__STRUCT_HPP_
#define C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__c2_turtle_interface__srv__GetTotalSales_Request __attribute__((deprecated))
#else
# define DEPRECATED__c2_turtle_interface__srv__GetTotalSales_Request __declspec(deprecated)
#endif

namespace c2_turtle_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTotalSales_Request_
{
  using Type = GetTotalSales_Request_<ContainerAllocator>;

  explicit GetTotalSales_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->date = "";
    }
  }

  explicit GetTotalSales_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : date(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->date = "";
    }
  }

  // field types and members
  using _date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _date_type date;

  // setters for named parameter idiom
  Type & set__date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->date = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__c2_turtle_interface__srv__GetTotalSales_Request
    std::shared_ptr<c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__c2_turtle_interface__srv__GetTotalSales_Request
    std::shared_ptr<c2_turtle_interface::srv::GetTotalSales_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTotalSales_Request_ & other) const
  {
    if (this->date != other.date) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTotalSales_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTotalSales_Request_

// alias to use template instance with default allocator
using GetTotalSales_Request =
  c2_turtle_interface::srv::GetTotalSales_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace c2_turtle_interface


#ifndef _WIN32
# define DEPRECATED__c2_turtle_interface__srv__GetTotalSales_Response __attribute__((deprecated))
#else
# define DEPRECATED__c2_turtle_interface__srv__GetTotalSales_Response __declspec(deprecated)
#endif

namespace c2_turtle_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTotalSales_Response_
{
  using Type = GetTotalSales_Response_<ContainerAllocator>;

  explicit GetTotalSales_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_sales = 0.0;
    }
  }

  explicit GetTotalSales_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_sales = 0.0;
    }
  }

  // field types and members
  using _total_sales_type =
    double;
  _total_sales_type total_sales;

  // setters for named parameter idiom
  Type & set__total_sales(
    const double & _arg)
  {
    this->total_sales = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__c2_turtle_interface__srv__GetTotalSales_Response
    std::shared_ptr<c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__c2_turtle_interface__srv__GetTotalSales_Response
    std::shared_ptr<c2_turtle_interface::srv::GetTotalSales_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTotalSales_Response_ & other) const
  {
    if (this->total_sales != other.total_sales) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTotalSales_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTotalSales_Response_

// alias to use template instance with default allocator
using GetTotalSales_Response =
  c2_turtle_interface::srv::GetTotalSales_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace c2_turtle_interface

namespace c2_turtle_interface
{

namespace srv
{

struct GetTotalSales
{
  using Request = c2_turtle_interface::srv::GetTotalSales_Request;
  using Response = c2_turtle_interface::srv::GetTotalSales_Response;
};

}  // namespace srv

}  // namespace c2_turtle_interface

#endif  // C2_TURTLE_INTERFACE__SRV__DETAIL__GET_TOTAL_SALES__STRUCT_HPP_
