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
CMAKE_SOURCE_DIR = /home/agilex/limo_ros2_ws/src/ros2_astra_camera/glog-0.6.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agilex/limo_ros2_ws/build/glog

# Include any dependencies generated for this target.
include CMakeFiles/logging_custom_prefix_unittest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/logging_custom_prefix_unittest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/logging_custom_prefix_unittest.dir/flags.make

CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.o: CMakeFiles/logging_custom_prefix_unittest.dir/flags.make
CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.o: /home/agilex/limo_ros2_ws/src/ros2_astra_camera/glog-0.6.0/src/logging_custom_prefix_unittest.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agilex/limo_ros2_ws/build/glog/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.o -c /home/agilex/limo_ros2_ws/src/ros2_astra_camera/glog-0.6.0/src/logging_custom_prefix_unittest.cc

CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agilex/limo_ros2_ws/src/ros2_astra_camera/glog-0.6.0/src/logging_custom_prefix_unittest.cc > CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.i

CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agilex/limo_ros2_ws/src/ros2_astra_camera/glog-0.6.0/src/logging_custom_prefix_unittest.cc -o CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.s

# Object files for target logging_custom_prefix_unittest
logging_custom_prefix_unittest_OBJECTS = \
"CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.o"

# External object files for target logging_custom_prefix_unittest
logging_custom_prefix_unittest_EXTERNAL_OBJECTS =

logging_custom_prefix_unittest: CMakeFiles/logging_custom_prefix_unittest.dir/src/logging_custom_prefix_unittest.cc.o
logging_custom_prefix_unittest: CMakeFiles/logging_custom_prefix_unittest.dir/build.make
logging_custom_prefix_unittest: libglogtest.a
logging_custom_prefix_unittest: /usr/lib/aarch64-linux-gnu/libgflags.so.2.2.2
logging_custom_prefix_unittest: CMakeFiles/logging_custom_prefix_unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agilex/limo_ros2_ws/build/glog/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable logging_custom_prefix_unittest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/logging_custom_prefix_unittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/logging_custom_prefix_unittest.dir/build: logging_custom_prefix_unittest

.PHONY : CMakeFiles/logging_custom_prefix_unittest.dir/build

CMakeFiles/logging_custom_prefix_unittest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/logging_custom_prefix_unittest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/logging_custom_prefix_unittest.dir/clean

CMakeFiles/logging_custom_prefix_unittest.dir/depend:
	cd /home/agilex/limo_ros2_ws/build/glog && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agilex/limo_ros2_ws/src/ros2_astra_camera/glog-0.6.0 /home/agilex/limo_ros2_ws/src/ros2_astra_camera/glog-0.6.0 /home/agilex/limo_ros2_ws/build/glog /home/agilex/limo_ros2_ws/build/glog /home/agilex/limo_ros2_ws/build/glog/CMakeFiles/logging_custom_prefix_unittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/logging_custom_prefix_unittest.dir/depend

