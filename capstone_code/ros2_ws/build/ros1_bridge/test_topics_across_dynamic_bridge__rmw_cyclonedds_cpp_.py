# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os
import re

import unittest

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import OpaqueFunction

import launch_testing
import launch_testing.actions
import launch_testing_ros

from ros2run.api import get_executable_path


TEST_BRIDGE_ROS1_ENV = '/opt/ros/noetic/env.sh'
TEST_BRIDGE_ROSCORE = '/opt/ros/noetic/bin/roscore'
TEST_BRIDGE_ROS1_TALKER = ['rosrun', 'roscpp_tutorials', 'talker']
TEST_BRIDGE_ROS1_LISTENER = ['rosrun', 'rospy_tutorials', 'listener']
TEST_BRIDGE_DYNAMIC_BRIDGE = '/home/bofengluo/ros2_ws/build/ros1_bridge/dynamic_bridge'
TEST_BRIDGE_ROS2_TALKER = get_executable_path(
    package_name='demo_nodes_cpp', executable_name='talker')
TEST_BRIDGE_ROS2_LISTENER = get_executable_path(
    package_name='demo_nodes_cpp', executable_name='listener')
TEST_BRIDGE_RMW = 'rmw_cyclonedds_cpp'


@launch_testing.parametrize('test_name,talker_cmd,listener_cmd,logs_stream', [
    ('ros1_talker_ros2_listener_across_dynamic_bridge',
     [TEST_BRIDGE_ROS1_ENV] + TEST_BRIDGE_ROS1_TALKER,
     [TEST_BRIDGE_ROS2_LISTENER], 'stderr'),
    ('ros2_talker_ros1_listener_across_dynamic_bridge',
     [TEST_BRIDGE_ROS2_TALKER],
     [TEST_BRIDGE_ROS1_ENV] + TEST_BRIDGE_ROS1_LISTENER, 'stdout'),
])
def generate_test_description(test_name, talker_cmd, listener_cmd, logs_stream):
    launch_description = LaunchDescription()

    # ROS 1 core
    launch_description.add_action(ExecuteProcess(
        cmd=[TEST_BRIDGE_ROS1_ENV, TEST_BRIDGE_ROSCORE],
        name=test_name + '__roscore',
    ))

    # dynamic bridge
    rosbridge_process = ExecuteProcess(
        cmd=[TEST_BRIDGE_ROS1_ENV, TEST_BRIDGE_DYNAMIC_BRIDGE],
        name=test_name + '__dynamic_bridge',
    )
    launch_description.add_action(rosbridge_process)

    talker_process = ExecuteProcess(
        cmd=talker_cmd, name=test_name + '__talker',
    )
    launch_description.add_action(talker_process)

    env = dict(os.environ)
    env['PYTHONUNBUFFERED'] = '1'
    listener_process = ExecuteProcess(
        cmd=listener_cmd, name=test_name + '__listener', env=env
    )
    launch_description.add_action(listener_process)

    launch_description.add_action(
        launch_testing.actions.ReadyToTest()
    )
    return launch_description, locals()


class TestTopicsAcrossDynamicBridge(unittest.TestCase):

    def test_listener_output(self, proc_output, listener_process, logs_stream):
        output_filter = launch_testing_ros.tools.basic_output_filter(
            filtered_rmw_implementation=TEST_BRIDGE_RMW
        )
        proc_output.assertWaitFor(
            expected_output=[re.compile('I heard.+')],
            process=listener_process,
            output_filter=output_filter,
            timeout=10,
            stream=logs_stream
        )


@launch_testing.post_shutdown_test()
class TestTopicsAcrossDynamicBridgeAfterShutdown(unittest.TestCase):

    def test_processes_finished_gracefully(self, proc_info, rosbridge_process,
                                           talker_process, listener_process):
        """Test that both executables finished gracefully."""
        launch_testing.asserts.assertExitCodes(proc_info, process=rosbridge_process)
        launch_testing.asserts.assertExitCodes(proc_info, process=talker_process)
        launch_testing.asserts.assertExitCodes(proc_info, process=listener_process)
