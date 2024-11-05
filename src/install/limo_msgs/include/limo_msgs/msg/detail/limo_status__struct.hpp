// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from limo_msgs:msg/LimoStatus.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__STRUCT_HPP_
#define LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__limo_msgs__msg__LimoStatus __attribute__((deprecated))
#else
# define DEPRECATED__limo_msgs__msg__LimoStatus __declspec(deprecated)
#endif

namespace limo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LimoStatus_
{
  using Type = LimoStatus_<ContainerAllocator>;

  explicit LimoStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_state = 0;
      this->control_mode = 0;
      this->battery_voltage = 0.0;
      this->error_code = 0;
      this->motion_mode = 0;
    }
  }

  explicit LimoStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_state = 0;
      this->control_mode = 0;
      this->battery_voltage = 0.0;
      this->error_code = 0;
      this->motion_mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vehicle_state_type =
    uint8_t;
  _vehicle_state_type vehicle_state;
  using _control_mode_type =
    uint8_t;
  _control_mode_type control_mode;
  using _battery_voltage_type =
    double;
  _battery_voltage_type battery_voltage;
  using _error_code_type =
    uint16_t;
  _error_code_type error_code;
  using _motion_mode_type =
    uint8_t;
  _motion_mode_type motion_mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vehicle_state(
    const uint8_t & _arg)
  {
    this->vehicle_state = _arg;
    return *this;
  }
  Type & set__control_mode(
    const uint8_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const double & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__motion_mode(
    const uint8_t & _arg)
  {
    this->motion_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    limo_msgs::msg::LimoStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const limo_msgs::msg::LimoStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<limo_msgs::msg::LimoStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<limo_msgs::msg::LimoStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      limo_msgs::msg::LimoStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<limo_msgs::msg::LimoStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      limo_msgs::msg::LimoStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<limo_msgs::msg::LimoStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<limo_msgs::msg::LimoStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<limo_msgs::msg::LimoStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__limo_msgs__msg__LimoStatus
    std::shared_ptr<limo_msgs::msg::LimoStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__limo_msgs__msg__LimoStatus
    std::shared_ptr<limo_msgs::msg::LimoStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LimoStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vehicle_state != other.vehicle_state) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->motion_mode != other.motion_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const LimoStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LimoStatus_

// alias to use template instance with default allocator
using LimoStatus =
  limo_msgs::msg::LimoStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace limo_msgs

#endif  // LIMO_MSGS__MSG__DETAIL__LIMO_STATUS__STRUCT_HPP_
