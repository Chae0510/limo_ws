// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limo_msgs:msg/LimoStatus.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__TRAITS_HPP_
#define LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__TRAITS_HPP_

#include "limo_msgs/msg/detail/limo_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<limo_msgs::msg::LimoStatus>()
{
  return "limo_msgs::msg::LimoStatus";
}

template<>
inline const char * name<limo_msgs::msg::LimoStatus>()
{
  return "limo_msgs/msg/LimoStatus";
}

template<>
struct has_fixed_size<limo_msgs::msg::LimoStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<limo_msgs::msg::LimoStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<limo_msgs::msg::LimoStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__TRAITS_HPP_
