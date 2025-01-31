# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/agilex/limo_ros2_ws/src/limo_visions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agilex/limo_ros2_ws/build/limo_visions

# Include any dependencies generated for this target.
include CMakeFiles/traffic_light.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/traffic_light.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/traffic_light.dir/flags.make

CMakeFiles/traffic_light.dir/src/traffic_light.cpp.o: CMakeFiles/traffic_light.dir/flags.make
CMakeFiles/traffic_light.dir/src/traffic_light.cpp.o: /home/agilex/limo_ros2_ws/src/limo_visions/src/traffic_light.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agilex/limo_ros2_ws/build/limo_visions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/traffic_light.dir/src/traffic_light.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/traffic_light.dir/src/traffic_light.cpp.o -c /home/agilex/limo_ros2_ws/src/limo_visions/src/traffic_light.cpp

CMakeFiles/traffic_light.dir/src/traffic_light.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/traffic_light.dir/src/traffic_light.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agilex/limo_ros2_ws/src/limo_visions/src/traffic_light.cpp > CMakeFiles/traffic_light.dir/src/traffic_light.cpp.i

CMakeFiles/traffic_light.dir/src/traffic_light.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/traffic_light.dir/src/traffic_light.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agilex/limo_ros2_ws/src/limo_visions/src/traffic_light.cpp -o CMakeFiles/traffic_light.dir/src/traffic_light.cpp.s

# Object files for target traffic_light
traffic_light_OBJECTS = \
"CMakeFiles/traffic_light.dir/src/traffic_light.cpp.o"

# External object files for target traffic_light
traffic_light_EXTERNAL_OBJECTS =

traffic_light: CMakeFiles/traffic_light.dir/src/traffic_light.cpp.o
traffic_light: CMakeFiles/traffic_light.dir/build.make
traffic_light: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
traffic_light: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_c.so
traffic_light: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
traffic_light: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_cpp.so
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_stitching.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_aruco.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_bgsegm.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_bioinspired.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_ccalib.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_dnn_objdetect.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_dnn_superres.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_dpm.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_face.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_freetype.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_fuzzy.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_hdf.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_hfs.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_img_hash.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_line_descriptor.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_quality.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_reg.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_rgbd.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_saliency.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_shape.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_stereo.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_structured_light.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_superres.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_surface_matching.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_tracking.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_videostab.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_viz.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_xobjdetect.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_xphoto.so.4.2.0
traffic_light: /opt/ros/foxy/lib/libcv_bridge.so
traffic_light: /opt/ros/foxy/lib/libimage_transport.so
traffic_light: /opt/ros/foxy/lib/libmessage_filters.so
traffic_light: /opt/ros/foxy/lib/librclcpp.so
traffic_light: /opt/ros/foxy/lib/librclcpp.so
traffic_light: /opt/ros/foxy/lib/liblibstatistics_collector.so
traffic_light: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
traffic_light: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
traffic_light: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
traffic_light: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
traffic_light: /opt/ros/foxy/lib/librcl.so
traffic_light: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
traffic_light: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
traffic_light: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
traffic_light: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
traffic_light: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
traffic_light: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
traffic_light: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
traffic_light: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
traffic_light: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
traffic_light: /opt/ros/foxy/lib/libtracetools.so
traffic_light: /opt/ros/foxy/lib/libsensor_msgs__rosidl_generator_c.so
traffic_light: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
traffic_light: /opt/ros/foxy/lib/libsensor_msgs__rosidl_generator_c.so
traffic_light: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_c.so
traffic_light: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
traffic_light: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_cpp.so
traffic_light: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
traffic_light: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_c.so
traffic_light: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
traffic_light: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
traffic_light: /opt/ros/foxy/lib/aarch64-linux-gnu/libconsole_bridge.so.1.0
traffic_light: /opt/ros/foxy/lib/libclass_loader.so
traffic_light: /opt/ros/foxy/lib/librcutils.so
traffic_light: /opt/ros/foxy/lib/librcpputils.so
traffic_light: /opt/ros/foxy/lib/libament_index_cpp.so
traffic_light: /opt/ros/foxy/lib/libclass_loader.so
traffic_light: /usr/lib/aarch64-linux-gnu/libtinyxml2.so
traffic_light: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
traffic_light: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
traffic_light: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
traffic_light: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
traffic_light: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
traffic_light: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
traffic_light: /opt/ros/foxy/lib/librmw_implementation.so
traffic_light: /opt/ros/foxy/lib/librmw.so
traffic_light: /opt/ros/foxy/lib/librcl_logging_spdlog.so
traffic_light: /usr/lib/aarch64-linux-gnu/libspdlog.so.1.5.0
traffic_light: /opt/ros/foxy/lib/libyaml.so
traffic_light: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
traffic_light: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
traffic_light: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_generator_c.so
traffic_light: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
traffic_light: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
traffic_light: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
traffic_light: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
traffic_light: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
traffic_light: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
traffic_light: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
traffic_light: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
traffic_light: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
traffic_light: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
traffic_light: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
traffic_light: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
traffic_light: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
traffic_light: /opt/ros/foxy/lib/librosidl_typesupport_c.so
traffic_light: /opt/ros/foxy/lib/librosidl_runtime_c.so
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_highgui.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_datasets.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_plot.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_text.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_dnn.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_ml.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_phase_unwrapping.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_optflow.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_ximgproc.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_video.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_videoio.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_imgcodecs.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_objdetect.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_calib3d.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_features2d.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_flann.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_photo.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_imgproc.so.4.2.0
traffic_light: /usr/lib/aarch64-linux-gnu/libopencv_core.so.4.2.0
traffic_light: /opt/ros/foxy/lib/aarch64-linux-gnu/libconsole_bridge.so.1.0
traffic_light: /opt/ros/foxy/lib/librcpputils.so
traffic_light: /opt/ros/foxy/lib/librcutils.so
traffic_light: CMakeFiles/traffic_light.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agilex/limo_ros2_ws/build/limo_visions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable traffic_light"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/traffic_light.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/traffic_light.dir/build: traffic_light

.PHONY : CMakeFiles/traffic_light.dir/build

CMakeFiles/traffic_light.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/traffic_light.dir/cmake_clean.cmake
.PHONY : CMakeFiles/traffic_light.dir/clean

CMakeFiles/traffic_light.dir/depend:
	cd /home/agilex/limo_ros2_ws/build/limo_visions && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agilex/limo_ros2_ws/src/limo_visions /home/agilex/limo_ros2_ws/src/limo_visions /home/agilex/limo_ros2_ws/build/limo_visions /home/agilex/limo_ros2_ws/build/limo_visions /home/agilex/limo_ros2_ws/build/limo_visions/CMakeFiles/traffic_light.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/traffic_light.dir/depend

