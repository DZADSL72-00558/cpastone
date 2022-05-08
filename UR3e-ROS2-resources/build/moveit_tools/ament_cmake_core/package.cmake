set(_AMENT_PACKAGE_NAME "moveit_tools")
set(moveit_tools_VERSION "0.0.0")
set(moveit_tools_MAINTAINER "tlips <thomas.lips@ugent.be>")
set(moveit_tools_BUILD_DEPENDS "eigen" "geometric_shapes" "moveit_common" "moveit_ros_planning" "rclcpp" "control_msgs" "interactive_markers" "moveit_core" "moveit_ros_perception" "moveit_ros_planning_interface" "moveit_servo" "moveit_visual_tools" "pluginlib" "rviz_visual_tools" "tf2_eigen" "tf2_geometry_msgs" "tf2_ros")
set(moveit_tools_BUILDTOOL_DEPENDS "ament_cmake")
set(moveit_tools_BUILD_EXPORT_DEPENDS "rclcpp" "control_msgs" "interactive_markers" "moveit_core" "moveit_ros_perception" "moveit_ros_planning_interface" "moveit_servo" "moveit_visual_tools" "pluginlib" "rviz_visual_tools" "tf2_eigen" "tf2_geometry_msgs" "tf2_ros")
set(moveit_tools_BUILDTOOL_EXPORT_DEPENDS )
set(moveit_tools_EXEC_DEPENDS "controller_manager" "gripper_controllers" "joint_state_broadcaster" "joint_state_publisher" "joint_trajectory_controller" "joy" "moveit" "robot_state_publisher" "rviz2" "warehouse_ros_mongo" "xacro" "rclcpp" "control_msgs" "interactive_markers" "moveit_core" "moveit_ros_perception" "moveit_ros_planning_interface" "moveit_servo" "moveit_visual_tools" "pluginlib" "rviz_visual_tools" "tf2_eigen" "tf2_geometry_msgs" "tf2_ros")
set(moveit_tools_TEST_DEPENDS "ament_lint_auto" "ament_lint_common")
set(moveit_tools_GROUP_DEPENDS )
set(moveit_tools_MEMBER_OF_GROUPS )
set(moveit_tools_DEPRECATED "")
set(moveit_tools_EXPORT_TAGS)
list(APPEND moveit_tools_EXPORT_TAGS "<build_type>ament_cmake</build_type>")