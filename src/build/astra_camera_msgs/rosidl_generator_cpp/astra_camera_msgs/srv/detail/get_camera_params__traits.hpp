// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from astra_camera_msgs:srv/GetCameraParams.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__TRAITS_HPP_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__TRAITS_HPP_

#include "astra_camera_msgs/srv/detail/get_camera_params__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<astra_camera_msgs::srv::GetCameraParams_Request>()
{
  return "astra_camera_msgs::srv::GetCameraParams_Request";
}

template<>
inline const char * name<astra_camera_msgs::srv::GetCameraParams_Request>()
{
  return "astra_camera_msgs/srv/GetCameraParams_Request";
}

template<>
struct has_fixed_size<astra_camera_msgs::srv::GetCameraParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<astra_camera_msgs::srv::GetCameraParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<astra_camera_msgs::srv::GetCameraParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<astra_camera_msgs::srv::GetCameraParams_Response>()
{
  return "astra_camera_msgs::srv::GetCameraParams_Response";
}

template<>
inline const char * name<astra_camera_msgs::srv::GetCameraParams_Response>()
{
  return "astra_camera_msgs/srv/GetCameraParams_Response";
}

template<>
struct has_fixed_size<astra_camera_msgs::srv::GetCameraParams_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<astra_camera_msgs::srv::GetCameraParams_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<astra_camera_msgs::srv::GetCameraParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<astra_camera_msgs::srv::GetCameraParams>()
{
  return "astra_camera_msgs::srv::GetCameraParams";
}

template<>
inline const char * name<astra_camera_msgs::srv::GetCameraParams>()
{
  return "astra_camera_msgs/srv/GetCameraParams";
}

template<>
struct has_fixed_size<astra_camera_msgs::srv::GetCameraParams>
  : std::integral_constant<
    bool,
    has_fixed_size<astra_camera_msgs::srv::GetCameraParams_Request>::value &&
    has_fixed_size<astra_camera_msgs::srv::GetCameraParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<astra_camera_msgs::srv::GetCameraParams>
  : std::integral_constant<
    bool,
    has_bounded_size<astra_camera_msgs::srv::GetCameraParams_Request>::value &&
    has_bounded_size<astra_camera_msgs::srv::GetCameraParams_Response>::value
  >
{
};

template<>
struct is_service<astra_camera_msgs::srv::GetCameraParams>
  : std::true_type
{
};

template<>
struct is_service_request<astra_camera_msgs::srv::GetCameraParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<astra_camera_msgs::srv::GetCameraParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__TRAITS_HPP_
