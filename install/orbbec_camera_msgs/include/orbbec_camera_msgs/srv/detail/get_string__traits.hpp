// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from orbbec_camera_msgs:srv/GetString.idl
// generated code does not contain a copyright notice

#ifndef ORBBEC_CAMERA_MSGS__SRV__DETAIL__GET_STRING__TRAITS_HPP_
#define ORBBEC_CAMERA_MSGS__SRV__DETAIL__GET_STRING__TRAITS_HPP_

#include "orbbec_camera_msgs/srv/detail/get_string__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::GetString_Request>()
{
  return "orbbec_camera_msgs::srv::GetString_Request";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::GetString_Request>()
{
  return "orbbec_camera_msgs/srv/GetString_Request";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::GetString_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::GetString_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<orbbec_camera_msgs::srv::GetString_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::GetString_Response>()
{
  return "orbbec_camera_msgs::srv::GetString_Response";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::GetString_Response>()
{
  return "orbbec_camera_msgs/srv/GetString_Response";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::GetString_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::GetString_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<orbbec_camera_msgs::srv::GetString_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::GetString>()
{
  return "orbbec_camera_msgs::srv::GetString";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::GetString>()
{
  return "orbbec_camera_msgs/srv/GetString";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::GetString>
  : std::integral_constant<
    bool,
    has_fixed_size<orbbec_camera_msgs::srv::GetString_Request>::value &&
    has_fixed_size<orbbec_camera_msgs::srv::GetString_Response>::value
  >
{
};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::GetString>
  : std::integral_constant<
    bool,
    has_bounded_size<orbbec_camera_msgs::srv::GetString_Request>::value &&
    has_bounded_size<orbbec_camera_msgs::srv::GetString_Response>::value
  >
{
};

template<>
struct is_service<orbbec_camera_msgs::srv::GetString>
  : std::true_type
{
};

template<>
struct is_service_request<orbbec_camera_msgs::srv::GetString_Request>
  : std::true_type
{
};

template<>
struct is_service_response<orbbec_camera_msgs::srv::GetString_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ORBBEC_CAMERA_MSGS__SRV__DETAIL__GET_STRING__TRAITS_HPP_
