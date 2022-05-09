# cpastone code about ros1_bridge and publisher in ROS1 and ROS2
## prerequisite
Install  ROS noetic and ROS foxy on ubuntu 20.04.  Note that we have to install the full version.
See more on the following website:
 [ROS1 noetic install ](http://wiki.ros.org/noetic/Installation/Ubuntu)
 [ROS2 foxy install](https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Binary.html)
[ install Universial robot pakage](https://github.com/ros-industrial/universal_robot)
## Use steps
### step1 
On your ubuntu system, first you need to open the terminal, and source the setup.bash file

> source /rso1_ws/setup.bash // in terminal 1 

> source /ros2_ws/setup.bash // in terminal 2
### step2
then we need to establish soft connection by input:

> catkin_make talker  // in ros1 in terminal 1

> colcon build talker // int ros2 in terminal 2
### step3
start gazebo in terminal1
> source /rso1_ws/setup.bash

> roslaunch ur_e_gazebo ur3e.launch

start ros1_bridge in terminal2:

> source /rso1_ws/setup.bash

> source /ros2_ws/setup.bash

> ros2 run ros1_bridge dynamic_bridge --bridge-all-1to2-topics

### step4
start talker in ros2 in terminal3

> source /ros2_ws/setup.bash

> ros2 run talker talker

start talker in ros1 in terminal4

>  source /rso1_ws/setup.bash

>   rosrun talker talker
