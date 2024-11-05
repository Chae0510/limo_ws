// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from orbbec_camera_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

#ifndef ORBBEC_CAMERA_MSGS__SRV__DETAIL__SET_STRING__TRAITS_HPP_
#define ORBBEC_CAMERA_MSGS__SRV__DETAIL__SET_STRING__TRAITS_HPP_

#include "orbbec_camera_msgs/srv/detail/set_string__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::SetString_Request>()
{
  return "orbbec_camera_msgs::srv::SetString_Request";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::SetString_Request>()
{
  return "orbbec_camera_msgs/srv/SetString_Request";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::SetString_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::SetString_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<orbbec_camera_msgs::srv::SetString_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::SetString_Response>()
{
  return "orbbec_camera_msgs::srv::SetString_Response";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::SetString_Response>()
{
  return "orbbec_camera_msgs/srv/SetString_Response";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::SetString_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::SetString_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<orbbec_camera_msgs::srv::SetString_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::SetString>()
{
  return "orbbec_camera_msgs::srv::SetString";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::SetString>()
{
  return "orbbec_camera_msgs/srv/SetString";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::SetString>
  : std::integral_constant<
    bool,
    has_fixed_size<orbbec_camera_msgs::srv::SetString_Request>::value &&
    has_fixed_size<orbbec_camera_msgs::srv::SetString_Response>::value
  >
{
};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::SetString>
  : std::integral_constant<
    bool,
    has_bounded_size<orbbec_camera_msgs::srv::SetString_Request>::value &&
    has_bounded_size<orbbec_camera_msgs::srv::SetString_Response>::value
  >
{
};

template<>
struct is_service<orbbec_camera_msgs::srv::SetString>
  : std::true_type
{
};

template<>
struct is_service_request<orbbec_camera_msgs::srv::SetString_Request>
  : std::true_type
{
};

template<>
struct is_service_response<orbbec_camera_msgs::srv::SetString_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ORBBEC_CAMERA_MSGS__SRV__DETAIL__SET_STRING__TRAITS_HPP_
