// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from orbbec_camera_msgs:srv/GetBool.idl
// generated code does not contain a copyright notice

#ifndef ORBBEC_CAMERA_MSGS__SRV__DETAIL__GET_BOOL__TRAITS_HPP_
#define ORBBEC_CAMERA_MSGS__SRV__DETAIL__GET_BOOL__TRAITS_HPP_

#include "orbbec_camera_msgs/srv/detail/get_bool__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::GetBool_Request>()
{
  return "orbbec_camera_msgs::srv::GetBool_Request";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::GetBool_Request>()
{
  return "orbbec_camera_msgs/srv/GetBool_Request";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::GetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::GetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<orbbec_camera_msgs::srv::GetBool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::GetBool_Response>()
{
  return "orbbec_camera_msgs::srv::GetBool_Response";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::GetBool_Response>()
{
  return "orbbec_camera_msgs/srv/GetBool_Response";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::GetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::GetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<orbbec_camera_msgs::srv::GetBool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::srv::GetBool>()
{
  return "orbbec_camera_msgs::srv::GetBool";
}

template<>
inline const char * name<orbbec_camera_msgs::srv::GetBool>()
{
  return "orbbec_camera_msgs/srv/GetBool";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::srv::GetBool>
  : std::integral_constant<
    bool,
    has_fixed_size<orbbec_camera_msgs::srv::GetBool_Request>::value &&
    has_fixed_size<orbbec_camera_msgs::srv::GetBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<orbbec_camera_msgs::srv::GetBool>
  : std::integral_constant<
    bool,
    has_bounded_size<orbbec_camera_msgs::srv::GetBool_Request>::value &&
    has_bounded_size<orbbec_camera_msgs::srv::GetBool_Response>::value
  >
{
};

template<>
struct is_service<orbbec_camera_msgs::srv::GetBool>
  : std::true_type
{
};

template<>
struct is_service_request<orbbec_camera_msgs::srv::GetBool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<orbbec_camera_msgs::srv::GetBool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ORBBEC_CAMERA_MSGS__SRV__DETAIL__GET_BOOL__TRAITS_HPP_
