// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:msg/Vector3Array.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__VECTOR3_ARRAY__BUILDER_HPP_
#define MORE_INTERFACES__MSG__DETAIL__VECTOR3_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/msg/detail/vector3_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace msg
{

namespace builder
{

class Init_Vector3Array_vectors
{
public:
  Init_Vector3Array_vectors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::more_interfaces::msg::Vector3Array vectors(::more_interfaces::msg::Vector3Array::_vectors_type arg)
  {
    msg_.vectors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::msg::Vector3Array msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::msg::Vector3Array>()
{
  return more_interfaces::msg::builder::Init_Vector3Array_vectors();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__VECTOR3_ARRAY__BUILDER_HPP_
