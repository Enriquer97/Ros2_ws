// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from more_interfaces:msg/Vector3Array.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "more_interfaces/msg/detail/vector3_array__rosidl_typesupport_introspection_c.h"
#include "more_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "more_interfaces/msg/detail/vector3_array__functions.h"
#include "more_interfaces/msg/detail/vector3_array__struct.h"


// Include directives for member types
// Member `vectors`
#include "geometry_msgs/msg/vector3.h"
// Member `vectors`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  more_interfaces__msg__Vector3Array__init(message_memory);
}

void more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_fini_function(void * message_memory)
{
  more_interfaces__msg__Vector3Array__fini(message_memory);
}

size_t more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__size_function__Vector3Array__vectors(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__get_const_function__Vector3Array__vectors(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__get_function__Vector3Array__vectors(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__fetch_function__Vector3Array__vectors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__get_const_function__Vector3Array__vectors(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__assign_function__Vector3Array__vectors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__get_function__Vector3Array__vectors(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__resize_function__Vector3Array__vectors(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_message_member_array[1] = {
  {
    "vectors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces__msg__Vector3Array, vectors),  // bytes offset in struct
    NULL,  // default value
    more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__size_function__Vector3Array__vectors,  // size() function pointer
    more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__get_const_function__Vector3Array__vectors,  // get_const(index) function pointer
    more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__get_function__Vector3Array__vectors,  // get(index) function pointer
    more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__fetch_function__Vector3Array__vectors,  // fetch(index, &value) function pointer
    more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__assign_function__Vector3Array__vectors,  // assign(index, value) function pointer
    more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__resize_function__Vector3Array__vectors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_message_members = {
  "more_interfaces__msg",  // message namespace
  "Vector3Array",  // message name
  1,  // number of fields
  sizeof(more_interfaces__msg__Vector3Array),
  more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_message_member_array,  // message members
  more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_init_function,  // function to initialize message memory (memory has to be allocated)
  more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_message_type_support_handle = {
  0,
  &more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_more_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, more_interfaces, msg, Vector3Array)() {
  more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_message_type_support_handle.typesupport_identifier) {
    more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &more_interfaces__msg__Vector3Array__rosidl_typesupport_introspection_c__Vector3Array_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
