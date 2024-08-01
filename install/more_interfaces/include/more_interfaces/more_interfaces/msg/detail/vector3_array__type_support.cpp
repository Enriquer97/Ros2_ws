// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from more_interfaces:msg/Vector3Array.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "more_interfaces/msg/detail/vector3_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace more_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Vector3Array_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) more_interfaces::msg::Vector3Array(_init);
}

void Vector3Array_fini_function(void * message_memory)
{
  auto typed_message = static_cast<more_interfaces::msg::Vector3Array *>(message_memory);
  typed_message->~Vector3Array();
}

size_t size_function__Vector3Array__vectors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Vector3Array__vectors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void * get_function__Vector3Array__vectors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Vector3Array__vectors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(
    get_const_function__Vector3Array__vectors(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(untyped_value);
  value = item;
}

void assign_function__Vector3Array__vectors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Vector3 *>(
    get_function__Vector3Array__vectors(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Vector3 *>(untyped_value);
  item = value;
}

void resize_function__Vector3Array__vectors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Vector3> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Vector3Array_message_member_array[1] = {
  {
    "vectors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces::msg::Vector3Array, vectors),  // bytes offset in struct
    nullptr,  // default value
    size_function__Vector3Array__vectors,  // size() function pointer
    get_const_function__Vector3Array__vectors,  // get_const(index) function pointer
    get_function__Vector3Array__vectors,  // get(index) function pointer
    fetch_function__Vector3Array__vectors,  // fetch(index, &value) function pointer
    assign_function__Vector3Array__vectors,  // assign(index, value) function pointer
    resize_function__Vector3Array__vectors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Vector3Array_message_members = {
  "more_interfaces::msg",  // message namespace
  "Vector3Array",  // message name
  1,  // number of fields
  sizeof(more_interfaces::msg::Vector3Array),
  Vector3Array_message_member_array,  // message members
  Vector3Array_init_function,  // function to initialize message memory (memory has to be allocated)
  Vector3Array_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Vector3Array_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Vector3Array_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace more_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<more_interfaces::msg::Vector3Array>()
{
  return &::more_interfaces::msg::rosidl_typesupport_introspection_cpp::Vector3Array_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, more_interfaces, msg, Vector3Array)() {
  return &::more_interfaces::msg::rosidl_typesupport_introspection_cpp::Vector3Array_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
