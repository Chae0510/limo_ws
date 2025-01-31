// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from limo_msgs:msg/LimoStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "limo_msgs/msg/detail/limo_status__rosidl_typesupport_introspection_c.h"
#include "limo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "limo_msgs/msg/detail/limo_status__functions.h"
#include "limo_msgs/msg/detail/limo_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  limo_msgs__msg__LimoStatus__init(message_memory);
}

void LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_fini_function(void * message_memory)
{
  limo_msgs__msg__LimoStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limo_msgs__msg__LimoStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limo_msgs__msg__LimoStatus, vehicle_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limo_msgs__msg__LimoStatus, control_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limo_msgs__msg__LimoStatus, battery_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limo_msgs__msg__LimoStatus, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(limo_msgs__msg__LimoStatus, motion_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_message_members = {
  "limo_msgs__msg",  // message namespace
  "LimoStatus",  // message name
  6,  // number of fields
  sizeof(limo_msgs__msg__LimoStatus),
  LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_message_member_array,  // message members
  LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_message_type_support_handle = {
  0,
  &LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_limo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, limo_msgs, msg, LimoStatus)() {
  LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_message_type_support_handle.typesupport_identifier) {
    LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LimoStatus__rosidl_typesupport_introspection_c__LimoStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
