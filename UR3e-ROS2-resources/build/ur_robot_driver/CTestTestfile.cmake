# CMake generated Testfile for 
# Source directory: /home/zpw/UR3e-ROS2-resources/src/Universal_Robots_ROS2_Driver/ur_robot_driver
# Build directory: /home/zpw/UR3e-ROS2-resources/build/ur_robot_driver
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_integration_test.py "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/zpw/UR3e-ROS2-resources/build/ur_robot_driver/test_results/ur_robot_driver/test_integration_test.py.xunit.xml" "--package-name" "ur_robot_driver" "--output-file" "/home/zpw/UR3e-ROS2-resources/build/ur_robot_driver/launch_test/CHANGEME.txt" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/zpw/UR3e-ROS2-resources/src/Universal_Robots_ROS2_Driver/ur_robot_driver/test/integration_test.py" "--junit-xml=/home/zpw/UR3e-ROS2-resources/build/ur_robot_driver/test_results/ur_robot_driver/test_integration_test.py.xunit.xml" "--package-name=ur_robot_driver")
set_tests_properties(test_integration_test.py PROPERTIES  TIMEOUT "60" WORKING_DIRECTORY "/home/zpw/UR3e-ROS2-resources/build/ur_robot_driver" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;125;ament_add_test;/home/zpw/UR3e-ROS2-resources/src/Universal_Robots_ROS2_Driver/ur_robot_driver/CMakeLists.txt;117;add_launch_test;/home/zpw/UR3e-ROS2-resources/src/Universal_Robots_ROS2_Driver/ur_robot_driver/CMakeLists.txt;0;")
