// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from more_interfaces:msg/Vector3Array.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__VECTOR3_ARRAY__STRUCT_H_
#define MORE_INTERFACES__MSG__DETAIL__VECTOR3_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vectors'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Vector3Array in the package more_interfaces.
typedef struct more_interfaces__msg__Vector3Array
{
  geometry_msgs__msg__Vector3__Sequence vectors;
} more_interfaces__msg__Vector3Array;

// Struct for a sequence of more_interfaces__msg__Vector3Array.
typedef struct more_interfaces__msg__Vector3Array__Sequence
{
  more_interfaces__msg__Vector3Array * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__msg__Vector3Array__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__MSG__DETAIL__VECTOR3_ARRAY__STRUCT_H_
