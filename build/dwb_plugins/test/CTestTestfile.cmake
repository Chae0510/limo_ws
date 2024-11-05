# CMake generated Testfile for 
# Source directory: /home/agilex/limo_ros2_ws/src/navigation2/nav2_dwb_controller/dwb_plugins/test
# Build directory: /home/agilex/limo_ros2_ws/build/dwb_plugins/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(vtest "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/agilex/limo_ros2_ws/build/dwb_plugins/test_results/dwb_plugins/vtest.gtest.xml" "--package-name" "dwb_plugins" "--output-file" "/home/agilex/limo_ros2_ws/build/dwb_plugins/ament_cmake_gtest/vtest.txt" "--command" "/home/agilex/limo_ros2_ws/build/dwb_plugins/test/vtest" "--gtest_output=xml:/home/agilex/limo_ros2_ws/build/dwb_plugins/test_results/dwb_plugins/vtest.gtest.xml")
set_tests_properties(vtest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/agilex/limo_ros2_ws/build/dwb_plugins/test/vtest" TIMEOUT "60" WORKING_DIRECTORY "/home/agilex/limo_ros2_ws/build/dwb_plugins/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/agilex/limo_ros2_ws/src/navigation2/nav2_dwb_controller/dwb_plugins/test/CMakeLists.txt;1;ament_add_gtest;/home/agilex/limo_ros2_ws/src/navigation2/nav2_dwb_controller/dwb_plugins/test/CMakeLists.txt;0;")
add_test(twist_gen_test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/agilex/limo_ros2_ws/build/dwb_plugins/test_results/dwb_plugins/twist_gen_test.gtest.xml" "--package-name" "dwb_plugins" "--output-file" "/home/agilex/limo_ros2_ws/build/dwb_plugins/ament_cmake_gtest/twist_gen_test.txt" "--command" "/home/agilex/limo_ros2_ws/build/dwb_plugins/test/twist_gen_test" "--gtest_output=xml:/home/agilex/limo_ros2_ws/build/dwb_plugins/test_results/dwb_plugins/twist_gen_test.gtest.xml")
set_tests_properties(twist_gen_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/agilex/limo_ros2_ws/build/dwb_plugins/test/twist_gen_test" TIMEOUT "60" WORKING_DIRECTORY "/home/agilex/limo_ros2_ws/build/dwb_plugins/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/agilex/limo_ros2_ws/src/navigation2/nav2_dwb_controller/dwb_plugins/test/CMakeLists.txt;3;ament_add_gtest;/home/agilex/limo_ros2_ws/src/navigation2/nav2_dwb_controller/dwb_plugins/test/CMakeLists.txt;0;")
subdirs("../gtest")
