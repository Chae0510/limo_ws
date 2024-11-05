# CMake generated Testfile for 
# Source directory: /home/agilex/limo_ros2_ws/src/YDLidar-SDK/python
# Build directory: /home/agilex/limo_ros2_ws/build/ydlidar_sdk/python
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(ydlidar_py_test "/usr/bin/python" "/home/agilex/limo_ros2_ws/src/YDLidar-SDK/python/test/pytest.py")
set_tests_properties(ydlidar_py_test PROPERTIES  ENVIRONMENT "PYTHONPATH=/home/agilex/limo_ros2_ws/install/teb_msgs/lib/python3.8/site-packages:/home/agilex/limo_ros2_ws/install/orbbec_camera_msgs/lib/python3.8/site-packages:/home/agilex/limo_ros2_ws/install/dwb_msgs/lib/python3.8/site-packages:/home/agilex/limo_ros2_ws/install/nav_2d_msgs/lib/python3.8/site-packages:/home/agilex/limo_ros2_ws/install/nav2_msgs/lib/python3.8/site-packages:/home/agilex/limo_ros2_ws/install/nav2_gazebo_spawner/lib/python3.8/site-packages:/home/agilex/limo_ros2_ws/install/nav2_common/lib/python3.8/site-packages:/home/agilex/limo_ros2_ws/install/limo_msgs/lib/python3.8/site-packages:/home/agilex/limo_ros2_ws/install/costmap_converter_msgs/lib/python3.8/site-packages:/home/agilex/limo_ros2_ws/install/astra_camera_msgs/lib/python3.8/site-packages:/opt/ros/foxy/lib/python3.8/site-packages:/home/agilex/limo_ros2_ws/build/ydlidar_sdk/python" _BACKTRACE_TRIPLES "/home/agilex/limo_ros2_ws/src/YDLidar-SDK/python/CMakeLists.txt;42;add_test;/home/agilex/limo_ros2_ws/src/YDLidar-SDK/python/CMakeLists.txt;0;")
subdirs("examples")
