#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "nav2_rviz_plugins::nav2_rviz_plugins" for configuration "Release"
set_property(TARGET nav2_rviz_plugins::nav2_rviz_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(nav2_rviz_plugins::nav2_rviz_plugins PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libnav2_rviz_plugins.so"
  IMPORTED_SONAME_RELEASE "libnav2_rviz_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS nav2_rviz_plugins::nav2_rviz_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_nav2_rviz_plugins::nav2_rviz_plugins "${_IMPORT_PREFIX}/lib/libnav2_rviz_plugins.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
