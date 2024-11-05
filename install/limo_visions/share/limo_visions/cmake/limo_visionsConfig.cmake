# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_limo_visions_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED limo_visions_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(limo_visions_FOUND FALSE)
  elseif(NOT limo_visions_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(limo_visions_FOUND FALSE)
  endif()
  return()
endif()
set(_limo_visions_CONFIG_INCLUDED TRUE)

# output package information
if(NOT limo_visions_FIND_QUIETLY)
  message(STATUS "Found limo_visions: 0.0.0 (${limo_visions_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'limo_visions' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${limo_visions_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(limo_visions_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${limo_visions_DIR}/${_extra}")
endforeach()
