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
CMAKE_SOURCE_DIR = /home/agilex/limo_ros2_ws/src/YDLidar-SDK

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agilex/limo_ros2_ws/build/ydlidar_sdk

# Utility rule file for ydlidar_swig_compilation.

# Include the progress variables for this target.
include python/CMakeFiles/ydlidar_swig_compilation.dir/progress.make

python/CMakeFiles/ydlidar_swig_compilation: python/CMakeFiles/_ydlidar.dir/ydlidar_sdkPYTHON.stamp


python/CMakeFiles/_ydlidar.dir/ydlidar_sdkPYTHON.stamp: /home/agilex/limo_ros2_ws/src/YDLidar-SDK/python/ydlidar_sdk.i
python/CMakeFiles/_ydlidar.dir/ydlidar_sdkPYTHON.stamp: /home/agilex/limo_ros2_ws/src/YDLidar-SDK/python/ydlidar_sdk.i
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/agilex/limo_ros2_ws/build/ydlidar_sdk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Swig compile ydlidar_sdk.i for python"
	cd /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python && /usr/bin/cmake -E make_directory /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python/CMakeFiles/_ydlidar.dir
	cd /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python && /usr/bin/cmake -E touch /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python/CMakeFiles/_ydlidar.dir/ydlidar_sdkPYTHON.stamp
	cd /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python && /usr/bin/cmake -E env SWIG_LIB=/usr/share/swig4.0 /usr/bin/swig4.0 -python -module ydlidar -outdir /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python -c++ -interface _ydlidar -I/home/agilex/limo_ros2_ws/src/YDLidar-SDK/. -I/home/agilex/limo_ros2_ws/src/YDLidar-SDK/core -I/home/agilex/limo_ros2_ws/src/YDLidar-SDK/src -I/home/agilex/limo_ros2_ws/src/YDLidar-SDK -I/home/agilex/limo_ros2_ws/build/ydlidar_sdk -I/home/agilex/limo_ros2_ws/src/YDLidar-SDK/python -I/home/agilex/limo_ros2_ws/src/YDLidar-SDK/.. -I/home/agilex/limo_ros2_ws/build/ydlidar_sdk/python -I/usr/include/python3.8 -o /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python/CMakeFiles/_ydlidar.dir/ydlidar_sdkPYTHON_wrap.cxx /home/agilex/limo_ros2_ws/src/YDLidar-SDK/python/ydlidar_sdk.i

ydlidar_swig_compilation: python/CMakeFiles/ydlidar_swig_compilation
ydlidar_swig_compilation: python/CMakeFiles/_ydlidar.dir/ydlidar_sdkPYTHON.stamp
ydlidar_swig_compilation: python/CMakeFiles/ydlidar_swig_compilation.dir/build.make

.PHONY : ydlidar_swig_compilation

# Rule to build all files generated by this target.
python/CMakeFiles/ydlidar_swig_compilation.dir/build: ydlidar_swig_compilation

.PHONY : python/CMakeFiles/ydlidar_swig_compilation.dir/build

python/CMakeFiles/ydlidar_swig_compilation.dir/clean:
	cd /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python && $(CMAKE_COMMAND) -P CMakeFiles/ydlidar_swig_compilation.dir/cmake_clean.cmake
.PHONY : python/CMakeFiles/ydlidar_swig_compilation.dir/clean

python/CMakeFiles/ydlidar_swig_compilation.dir/depend:
	cd /home/agilex/limo_ros2_ws/build/ydlidar_sdk && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agilex/limo_ros2_ws/src/YDLidar-SDK /home/agilex/limo_ros2_ws/src/YDLidar-SDK/python /home/agilex/limo_ros2_ws/build/ydlidar_sdk /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python/CMakeFiles/ydlidar_swig_compilation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : python/CMakeFiles/ydlidar_swig_compilation.dir/depend

