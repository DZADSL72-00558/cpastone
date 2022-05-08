import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from geometry_msgs.msg import Twist
from geometry_msgs.msg import TwistStamped
from unity_robotics_demo_msgs.msg import PosRot
from sensor_msgs.msg import JointState
import math


class RobtoVR(Node):

    def __init__(self):
        super().__init__('RobToVR_node')
        self.publisher_ = self.create_publisher(PosRot, '/RobtoVR', 10)
        
        self.subscription = self.create_subscription(
            JointState,
            '/joint_states',
            self.listener_callback,
            10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

        self.j1 = 0.0
        self.j2 = 0.0
        self.j3 = 0.0
        self.j4 = 0.0
        self.j5 = 0.0
        self.j6 = 0.0
        self.j7 = 0.0


    def timer_callback(self):
        msg = PosRot()

        msg.pos_x = float(self.j3)
        msg.pos_y = float(self.j2)
        msg.pos_z = float(self.j1)
        msg.rot_x = float(self.j4)
        msg.rot_y = float(self.j5)
        msg.rot_z = float(self.j6)
        msg.rot_w = float(self.j7)
    
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg)

        self.i += 1
        self.get_logger().info('Publishing: "%s"' % self.i)



    
    def listener_callback(self, msg):
        self.j1 = msg.position[0]
        self.j2 = msg.position[1]
        self.j3 = msg.position[2]
        self.j4 = msg.position[3]
        self.j5 = msg.position[4]
        self.j6 = msg.position[5]
        # self.j1 = 0
        # self.j2 = 0
        # self.j3 = 0
        # self.j4 += 0.1
        # self.j5 -= 0.1
        # self.j6 = 0


        self.get_logger().info('I heard: "%s"' % msg)




def main(args=None):
    rclpy.init(args=args)

    talker = RobtoVR()

    rclpy.spin(talker)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    talker.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
