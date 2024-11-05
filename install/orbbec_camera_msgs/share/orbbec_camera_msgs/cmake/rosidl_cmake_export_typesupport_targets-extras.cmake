# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_typesupport_introspection_c:orbbec_camera_msgs__rosidl_typesupport_introspection_c;__rosidl_typesupport_introspection_cpp:orbbec_camera_msgs__rosidl_typesupport_introspection_cpp")

# populate orbbec_camera_msgs_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "orbbec_camera_msgs::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'orbbec_camera_msgs' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND orbbec_camera_msgs_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
