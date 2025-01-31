// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from astra_camera_msgs:msg/Metadata.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__MSG__DETAIL__METADATA__TRAITS_HPP_
#define ASTRA_CAMERA_MSGS__MSG__DETAIL__METADATA__TRAITS_HPP_

#include "astra_camera_msgs/msg/detail/metadata__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<astra_camera_msgs::msg::Metadata>()
{
  return "astra_camera_msgs::msg::Metadata";
}

template<>
inline const char * name<astra_camera_msgs::msg::Metadata>()
{
  return "astra_camera_msgs/msg/Metadata";
}

template<>
struct has_fixed_size<astra_camera_msgs::msg::Metadata>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<astra_camera_msgs::msg::Metadata>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<astra_camera_msgs::msg::Metadata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASTRA_CAMERA_MSGS__MSG__DETAIL__METADATA__TRAITS_HPP_
