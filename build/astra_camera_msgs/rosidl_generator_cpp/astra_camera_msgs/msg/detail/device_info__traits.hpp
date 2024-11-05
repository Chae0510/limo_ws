// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from astra_camera_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
#define ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_

#include "astra_camera_msgs/msg/detail/device_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<astra_camera_msgs::msg::DeviceInfo>()
{
  return "astra_camera_msgs::msg::DeviceInfo";
}

template<>
inline const char * name<astra_camera_msgs::msg::DeviceInfo>()
{
  return "astra_camera_msgs/msg/DeviceInfo";
}

template<>
struct has_fixed_size<astra_camera_msgs::msg::DeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<astra_camera_msgs::msg::DeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<astra_camera_msgs::msg::DeviceInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
