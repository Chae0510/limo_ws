// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from orbbec_camera_msgs:srv/GetCameraInfo.idl
// generated code does not contain a copyright notice

#ifndef ORBBEC_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_INFO__TRAITS_HPP_
#define ORBBEC_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_INFO__TRAITS_HPP_

#include "orbbec_camera_msgs/srv/detail/get_camera_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::GetCameraInfo_Request>()
{
  return "orbbec_camera_msgs::srv::GetCameraInfo_Request";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::GetCameraInfo_Request>()
{
  return "orbbec_camera_msgs/srv/GetCameraInfo_Request";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::GetCameraInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::GetCameraInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<orbbec_camera_msgs::srv::GetCameraInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::GetCameraInfo_Response>()
{
  return "orbbec_camera_msgs::srv::GetCameraInfo_Response";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::GetCameraInfo_Response>()
{
  return "orbbec_camera_msgs/srv/GetCameraInfo_Response";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::GetCameraInfo_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::CameraInfo>::value> {};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::GetCameraInfo_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::CameraInfo>::value> {};

template<>
struct is_message<orbbec_camera_msgs::srv::GetCameraInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::GetCameraInfo>()
{
  return "orbbec_camera_msgs::srv::GetCameraInfo";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::GetCameraInfo>()
{
  return "orbbec_camera_msgs/srv/GetCameraInfo";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::GetCameraInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<orbbec_camera_msgs::srv::GetCameraInfo_Request>::value &&
    has_fixed_size<orbbec_camera_msgs::srv::GetCameraInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::GetCameraInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<orbbec_camera_msgs::srv::GetCameraInfo_Request>::value &&
    has_bounded_size<orbbec_camera_msgs::srv::GetCameraInfo_Response>::value
  >
{
};

template<>
struct is_service<orbbec_camera_msgs::srv::GetCameraInfo>
  : std::true_type
{
};

template<>
struct is_service_request<orbbec_camera_msgs::srv::GetCameraInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<orbbec_camera_msgs::srv::GetCameraInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ORBBEC_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_INFO__TRAITS_HPP_
