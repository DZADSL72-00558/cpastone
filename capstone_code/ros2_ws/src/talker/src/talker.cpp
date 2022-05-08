#include "rclcpp/rclcpp.hpp"
#include "trajectory_msgs/msg/joint_trajectory.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int32.hpp"
using namespace std::chrono_literals;
class talker : public rclcpp::Node
{

public:
    // 构造函数,有一个参数为节点名称
    talker() : Node("talker")
    {
        trajectory_pub_ = this->create_publisher<trajectory_msgs::msg::JointTrajectory>(
  "/arm_controller/command", rclcpp::QoS(1));
        timer_ = this->create_wall_timer(500ms, std::bind(&talker::timer_callback, this));
    }

private:
    void timer_callback()
    {
        trajectory_msgs::msg::JointTrajectory msg;
        msg.joint_names.emplace_back("elbow_joint");
        msg.joint_names.emplace_back("shoulder_lift_joint");
        msg.joint_names.emplace_back("shoulder_pan_joint");
        msg.joint_names.emplace_back("wrist_1_joint");
        msg.joint_names.emplace_back("wrist_2_joint");
        msg.joint_names.emplace_back("wrist_3_joint");
        msg.points.resize(100);
        for(int i=0;i<100;++i)
        {
            double cur=static_cast<double>(i);
            msg.points[i].positions={0,0,cur,cur,cur,cur};
            msg.points[i].velocities={0,0,0,0,0,0};
            //msg.points[i].accelerations={};
            //msg.points[i].effort={};
            msg.points[i].time_from_start=rclcpp::Duration(i);
        }
        trajectory_pub_->publish(msg);
    }
    rclcpp::Publisher<trajectory_msgs::msg::JointTrajectory>::SharedPtr trajectory_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

};
int main(int agrc, char** argv)
{
    rclcpp::init(agrc,argv);
    rclcpp::spin(std::make_shared<talker>());
    rclcpp::shutdown();
    return 0;
}