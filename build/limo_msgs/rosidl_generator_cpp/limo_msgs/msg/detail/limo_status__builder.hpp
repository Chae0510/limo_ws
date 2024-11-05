// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limo_msgs:msg/LimoStatus.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__BUILDER_HPP_
#define LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__BUILDER_HPP_

#include "limo_msgs/msg/detail/limo_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace limo_msgs
{

namespace msg
{

namespace builder
{

class Init_LimoStatus_motion_mode
{
public:
  explicit Init_LimoStatus_motion_mode(::limo_msgs::msg::LimoStatus & msg)
  : msg_(msg)
  {}
  ::limo_msgs::msg::LimoStatus motion_mode(::limo_msgs::msg::LimoStatus::_motion_mode_type arg)
  {
    msg_.motion_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::msg::LimoStatus msg_;
};

class Init_LimoStatus_error_code
{
public:
  explicit Init_LimoStatus_error_code(::limo_msgs::msg::LimoStatus & msg)
  : msg_(msg)
  {}
  Init_LimoStatus_motion_mode error_code(::limo_msgs::msg::LimoStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_LimoStatus_motion_mode(msg_);
  }

private:
  ::limo_msgs::msg::LimoStatus msg_;
};

class Init_LimoStatus_battery_voltage
{
public:
  explicit Init_LimoStatus_battery_voltage(::limo_msgs::msg::LimoStatus & msg)
  : msg_(msg)
  {}
  Init_LimoStatus_error_code battery_voltage(::limo_msgs::msg::LimoStatus::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_LimoStatus_error_code(msg_);
  }

private:
  ::limo_msgs::msg::LimoStatus msg_;
};

class Init_LimoStatus_control_mode
{
public:
  explicit Init_LimoStatus_control_mode(::limo_msgs::msg::LimoStatus & msg)
  : msg_(msg)
  {}
  Init_LimoStatus_battery_voltage control_mode(::limo_msgs::msg::LimoStatus::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_LimoStatus_battery_voltage(msg_);
  }

private:
  ::limo_msgs::msg::LimoStatus msg_;
};

class Init_LimoStatus_vehicle_state
{
public:
  explicit Init_LimoStatus_vehicle_state(::limo_msgs::msg::LimoStatus & msg)
  : msg_(msg)
  {}
  Init_LimoStatus_control_mode vehicle_state(::limo_msgs::msg::LimoStatus::_vehicle_state_type arg)
  {
    msg_.vehicle_state = std::move(arg);
    return Init_LimoStatus_control_mode(msg_);
  }

private:
  ::limo_msgs::msg::LimoStatus msg_;
};

class Init_LimoStatus_header
{
public:
  Init_LimoStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimoStatus_vehicle_state header(::limo_msgs::msg::LimoStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LimoStatus_vehicle_state(msg_);
  }

private:
  ::limo_msgs::msg::LimoStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::msg::LimoStatus>()
{
  return limo_msgs::msg::builder::Init_LimoStatus_header();
}

}  // namespace limo_msgs

#endif  // LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__BUILDER_HPP_
