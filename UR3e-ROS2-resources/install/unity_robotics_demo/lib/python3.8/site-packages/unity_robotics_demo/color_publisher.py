#!/usr/bin/env python

import random
import rclpy

from rclpy.node import Node

from unity_robotics_demo_msgs.msg import PosRot


class ColorPublisher(Node):

    def __init__(self):
        super().__init__('color_publisher')
        self.publisher_ = self.create_publisher(PosRot, 'color', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        while rclpy.ok():
            self.do_publish()

    def do_publish(self):
        if self.i == 0:
            cubePos = PosRot()

            cubePos.pos_x = 1.4
            cubePos.pos_y = 1.2
            cubePos.pos_z = 1.4
            cubePos.rot_x = 1.2
            cubePos.rot_y = 1.2
            cubePos.rot_z = 1.2
            cubePos.rot_w = 1.2

            
            self.get_logger().info(f'Publishing: {cubePos}')
            self.publisher_.publish(cubePos)
            
        # self.i += 1
        
    def timer_callback(self):
        quit()     


def main(args=None):
    rclpy.init(args=args)

    color_pub = ColorPublisher()
    
    # rclpy.spin(color_pub)

    while rclpy.ok():
        rclpy.spin(color_pub)
    #     rclpy.spin_once(color_pub)

    # color_pub.destroy_node()
    # rclpy.shutdown()


if __name__ == '__main__':
    main()
