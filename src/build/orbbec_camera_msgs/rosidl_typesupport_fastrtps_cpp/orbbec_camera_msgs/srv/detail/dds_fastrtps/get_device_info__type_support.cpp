// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from orbbec_camera_msgs:srv/GetDeviceInfo.idl
// generated code does not contain a copyright notice
#include "orbbec_camera_msgs/srv/detail/get_device_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "orbbec_camera_msgs/srv/detail/get_device_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace orbbec_camera_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_orbbec_camera_msgs
cdr_serialize(
  const orbbec_camera_msgs::srv::GetDeviceInfo_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_orbbec_camera_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  orbbec_camera_msgs::srv::GetDeviceInfo_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_orbbec_camera_msgs
get_serialized_size(
  const orbbec_camera_msgs::srv::GetDeviceInfo_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_orbbec_camera_msgs
max_serialized_size_GetDeviceInfo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetDeviceInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const orbbec_camera_msgs::srv::GetDeviceInfo_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetDeviceInfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<orbbec_camera_msgs::srv::GetDeviceInfo_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetDeviceInfo_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const orbbec_camera_msgs::srv::GetDeviceInfo_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetDeviceInfo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetDeviceInfo_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetDeviceInfo_Request__callbacks = {
  "orbbec_camera_msgs::srv",
  "GetDeviceInfo_Request",
  _GetDeviceInfo_Request__cdr_serialize,
  _GetDeviceInfo_Request__cdr_deserialize,
  _GetDeviceInfo_Request__get_serialized_size,
  _GetDeviceInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetDeviceInfo_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetDeviceInfo_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace orbbec_camera_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_orbbec_camera_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<orbbec_camera_msgs::srv::GetDeviceInfo_Request>()
{
  return &orbbec_camera_msgs::srv::typesupport_fastrtps_cpp::_GetDeviceInfo_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, orbbec_camera_msgs, srv, GetDeviceInfo_Request)() {
  return &orbbec_camera_msgs::srv::typesupport_fastrtps_cpp::_GetDeviceInfo_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace orbbec_camera_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const orbbec_camera_msgs::msg::DeviceInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  orbbec_camera_msgs::msg::DeviceInfo &);
size_t get_serialized_size(
  const orbbec_camera_msgs::msg::DeviceInfo &,
  size_t current_alignment);
size_t
max_serialized_size_DeviceInfo(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace orbbec_camera_msgs


namespace orbbec_camera_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_orbbec_camera_msgs
cdr_serialize(
  const orbbec_camera_msgs::srv::GetDeviceInfo_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  orbbec_camera_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_orbbec_camera_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  orbbec_camera_msgs::srv::GetDeviceInfo_Response & ros_message)
{
  // Member: info
  orbbec_camera_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_orbbec_camera_msgs
get_serialized_size(
  const orbbec_camera_msgs::srv::GetDeviceInfo_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info

  current_alignment +=
    orbbec_camera_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_orbbec_camera_msgs
max_serialized_size_GetDeviceInfo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        orbbec_camera_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DeviceInfo(
        full_bounded, current_alignment);
    }
  }

  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetDeviceInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const orbbec_camera_msgs::srv::GetDeviceInfo_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetDeviceInfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<orbbec_camera_msgs::srv::GetDeviceInfo_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetDeviceInfo_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const orbbec_camera_msgs::srv::GetDeviceInfo_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetDeviceInfo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetDeviceInfo_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetDeviceInfo_Response__callbacks = {
  "orbbec_camera_msgs::srv",
  "GetDeviceInfo_Response",
  _GetDeviceInfo_Response__cdr_serialize,
  _GetDeviceInfo_Response__cdr_deserialize,
  _GetDeviceInfo_Response__get_serialized_size,
  _GetDeviceInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetDeviceInfo_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetDeviceInfo_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace orbbec_camera_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_orbbec_camera_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<orbbec_camera_msgs::srv::GetDeviceInfo_Response>()
{
  return &orbbec_camera_msgs::srv::typesupport_fastrtps_cpp::_GetDeviceInfo_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, orbbec_camera_msgs, srv, GetDeviceInfo_Response)() {
  return &orbbec_camera_msgs::srv::typesupport_fastrtps_cpp::_GetDeviceInfo_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace orbbec_camera_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetDeviceInfo__callbacks = {
  "orbbec_camera_msgs::srv",
  "GetDeviceInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, orbbec_camera_msgs, srv, GetDeviceInfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, orbbec_camera_msgs, srv, GetDeviceInfo_Response)(),
};

static rosidl_service_type_support_t _GetDeviceInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetDeviceInfo__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace orbbec_camera_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_orbbec_camera_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<orbbec_camera_msgs::srv::GetDeviceInfo>()
{
  return &orbbec_camera_msgs::srv::typesupport_fastrtps_cpp::_GetDeviceInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, orbbec_camera_msgs, srv, GetDeviceInfo)() {
  return &orbbec_camera_msgs::srv::typesupport_fastrtps_cpp::_GetDeviceInfo__handle;
}

#ifdef __cplusplus
}
#endif
