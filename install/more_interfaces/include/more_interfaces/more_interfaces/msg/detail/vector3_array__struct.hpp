// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from more_interfaces:msg/Vector3Array.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__VECTOR3_ARRAY__STRUCT_HPP_
#define MORE_INTERFACES__MSG__DETAIL__VECTOR3_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vectors'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__more_interfaces__msg__Vector3Array __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__msg__Vector3Array __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vector3Array_
{
  using Type = Vector3Array_<ContainerAllocator>;

  explicit Vector3Array_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Vector3Array_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _vectors_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _vectors_type vectors;

  // setters for named parameter idiom
  Type & set__vectors(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->vectors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::msg::Vector3Array_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::msg::Vector3Array_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::msg::Vector3Array_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::msg::Vector3Array_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::msg::Vector3Array_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::msg::Vector3Array_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::msg::Vector3Array_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::msg::Vector3Array_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::msg::Vector3Array_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::msg::Vector3Array_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__msg__Vector3Array
    std::shared_ptr<more_interfaces::msg::Vector3Array_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__msg__Vector3Array
    std::shared_ptr<more_interfaces::msg::Vector3Array_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vector3Array_ & other) const
  {
    if (this->vectors != other.vectors) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vector3Array_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vector3Array_

// alias to use template instance with default allocator
using Vector3Array =
  more_interfaces::msg::Vector3Array_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__VECTOR3_ARRAY__STRUCT_HPP_
