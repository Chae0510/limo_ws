// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from orbbec_camera_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "orbbec_camera_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "orbbec_camera_msgs/msg/detail/device_info__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace orbbec_camera_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _DeviceInfo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeviceInfo_type_support_ids_t;

static const _DeviceInfo_type_support_ids_t _DeviceInfo_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeviceInfo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeviceInfo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeviceInfo_type_support_symbol_names_t _DeviceInfo_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, orbbec_camera_msgs, msg, DeviceInfo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orbbec_camera_msgs, msg, DeviceInfo)),
  }
};

typedef struct _DeviceInfo_type_support_data_t
{
  void * data[2];
} _DeviceInfo_type_support_data_t;

static _DeviceInfo_type_support_data_t _DeviceInfo_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeviceInfo_message_typesupport_map = {
  2,
  "orbbec_camera_msgs",
  &_DeviceInfo_message_typesupport_ids.typesupport_identifier[0],
  &_DeviceInfo_message_typesupport_symbol_names.symbol_name[0],
  &_DeviceInfo_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeviceInfo_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeviceInfo_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace orbbec_camera_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_orbbec_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, orbbec_camera_msgs, msg, DeviceInfo)() {
  return &::orbbec_camera_msgs::msg::rosidl_typesupport_c::DeviceInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
