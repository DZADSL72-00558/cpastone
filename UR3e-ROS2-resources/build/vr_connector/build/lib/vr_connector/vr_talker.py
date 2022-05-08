import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from geometry_msgs.msg import Twist
from geometry_msgs.msg import TwistStamped
from unity_robotics_demo_msgs.msg import PosRot


class VRtoRob(Node):

    def __init__(self):
        super().__init__('VRtoRob_node')
        self.publisher_ = self.create_publisher(TwistStamped, '/servo_server/delta_twist_cmds', 10)

        # self.subscription = self.create_subscription(
        #     PosRot,
        #     '/VRtoRob',
        #     self.listener_callback,
        #     10)
        self.subscription = self.create_subscription(
            PosRot,
            '/pos_rot',
            self.listener_callback,
            10)            
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

        self.lx = 0.0
        self.ly = 0.0
        self.lz = 0.0
        self.ax = 0.0
        self.ay = 0.0
        self.az = 0.0


    def timer_callback(self):
        msg = TwistStamped()

        msg.header.frame_id = 'base_link'
        # msg.header.frame_id = 'tool0'

        msg.header.stamp = self.get_clock().now().to_msg()

        msg.twist.linear.x = float(self.lx)
        msg.twist.linear.y = float(self.ly)
        msg.twist.linear.z = float(self.lz)
        msg.twist.angular.x = float(self.ax)
        msg.twist.angular.y = float(self.ay)
        msg.twist.angular.z = float(self.az)

        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg)

        self.i += 1
        self.get_logger().info('Publishing: "%s"' % self.i)

    
    def listener_callback(self, msg):
        self.lx = msg.pos_x
        self.ly = msg.pos_y
        self.lz = msg.pos_z
        self.ax = msg.rot_x
        self.ay = msg.rot_y
        self.az = msg.rot_z
        self.get_logger().info('I heard: "%s"' % msg)




def main(args=None):
    rclpy.init(args=args)

    talker = VRtoRob()

    rclpy.spin(talker)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    talker.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
