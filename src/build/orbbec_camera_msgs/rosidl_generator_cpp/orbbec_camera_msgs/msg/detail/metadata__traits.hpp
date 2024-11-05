// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from orbbec_camera_msgs:msg/Metadata.idl
// generated code does not contain a copyright notice

#ifndef ORBBEC_CAMERA_MSGS__MSG__DETAIL__METADATA__TRAITS_HPP_
#define ORBBEC_CAMERA_MSGS__MSG__DETAIL__METADATA__TRAITS_HPP_

#include "orbbec_camera_msgs/msg/detail/metadata__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orbbec_camera_msgs::msg::Metadata>()
{
  return "orbbec_camera_msgs::msg::Metadata";
}

template<>
inline const char * name<orbbec_camera_msgs::msg::Metadata>()
{
  return "orbbec_camera_msgs/msg/Metadata";
}

template<>
struct has_fixed_size<orbbec_camera_msgs::msg::Metadata>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<orbbec_camera_msgs::msg::Metadata>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<orbbec_camera_msgs::msg::Metadata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ORBBEC_CAMERA_MSGS__MSG__DETAIL__METADATA__TRAITS_HPP_
