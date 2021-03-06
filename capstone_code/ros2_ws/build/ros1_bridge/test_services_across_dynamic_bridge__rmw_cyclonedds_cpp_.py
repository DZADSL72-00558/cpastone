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

import unittest

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import OpaqueFunction

import launch_testing
import launch_testing.actions


TEST_BRIDGE_ROS1_ENV = '/opt/ros/noetic/env.sh'
TEST_BRIDGE_ROSCORE = '/opt/ros/noetic/bin/roscore'
TEST_BRIDGE_ROS1_CLIENT = '/home/bofengluo/ros2_ws/build/ros1_bridge/test_ros1_client'
TEST_BRIDGE_ROS1_SERVER = '/home/bofengluo/ros2_ws/build/ros1_bridge/test_ros1_server'
TEST_BRIDGE_DYNAMIC_BRIDGE = '/home/bofengluo/ros2_ws/build/ros1_bridge/dynamic_bridge'
TEST_BRIDGE_ROS2_CLIENT = '/home/bofengluo/ros2_ws/build/ros1_bridge/test_ros2_client_cpp'
TEST_BRIDGE_ROS2_SERVER = '/home/bofengluo/ros2_ws/build/ros1_bridge/test_ros2_server_cpp'


@launch_testing.parametrize('test_name,server_cmd,client_cmd', [
    ('ros1_server_ros2_client_across_dynamic_bridge',
     [TEST_BRIDGE_ROS1_ENV, TEST_BRIDGE_ROS1_SERVER],
     [TEST_BRIDGE_ROS2_CLIENT]),
    ('ros2_server_ros1_client_across_dynamic_bridge',
     [TEST_BRIDGE_ROS2_SERVER],
     [TEST_BRIDGE_ROS1_ENV, TEST_BRIDGE_ROS1_CLIENT]),
])
def generate_test_description(test_name, server_cmd, client_cmd):
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

    server_process = ExecuteProcess(
        cmd=server_cmd, name=test_name + '__server',
    )
    launch_description.add_action(server_process)

    client_process = ExecuteProcess(
        cmd=client_cmd, name=test_name + '__client',
    )
    launch_description.add_action(client_process)

    launch_description.add_action(
        launch_testing.actions.ReadyToTest()
    )
    return launch_description, locals()


class TestServicesAcrossDynamicBridge(unittest.TestCase):
    def test_client_process_terminates_after_a_finite_amount_of_time(self,
                                                                     client_process,
                                                                     proc_info):
        """Test that the client executables terminates after a finite amount of time."""
        proc_info.assertWaitForShutdown(process=client_process, timeout=30)


@launch_testing.post_shutdown_test()
class TestServicesAcrossDynamicBridgeAfterShutdown(unittest.TestCase):

    def test_processes_finished_gracefully(self, proc_info, rosbridge_process,
                                           server_process, client_process):
        """Test that both executables finished gracefully."""
        launch_testing.asserts.assertExitCodes(proc_info, process=rosbridge_process)
        launch_testing.asserts.assertExitCodes(proc_info, process=server_process)
        launch_testing.asserts.assertExitCodes(
            proc_info,
            [launch_testing.asserts.EXIT_OK],
            client_process
        )
