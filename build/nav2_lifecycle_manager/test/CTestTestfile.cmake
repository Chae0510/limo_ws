# CMake generated Testfile for 
# Source directory: /home/agilex/limo_ros2_ws/src/navigation2/nav2_lifecycle_manager/test
# Build directory: /home/agilex/limo_ros2_ws/build/nav2_lifecycle_manager/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_lifecycle "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/agilex/limo_ros2_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/test_lifecycle.xml" "--package-name" "nav2_lifecycle_manager" "--generate-result-on-success" "--env" "TEST_EXECUTABLE=/home/agilex/limo_ros2_ws/build/nav2_lifecycle_manager/test/test_lifecycle_gtest" "--command" "/home/agilex/limo_ros2_ws/src/navigation2/nav2_lifecycle_manager/test/launch_lifecycle_test.py")
set_tests_properties(test_lifecycle PROPERTIES  TIMEOUT "180" WORKING_DIRECTORY "/home/agilex/limo_ros2_ws/build/nav2_lifecycle_manager/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/home/agilex/limo_ros2_ws/src/navigation2/nav2_lifecycle_manager/test/CMakeLists.txt;13;ament_add_test;/home/agilex/limo_ros2_ws/src/navigation2/nav2_lifecycle_manager/test/CMakeLists.txt;0;")
subdirs("../gtest")
