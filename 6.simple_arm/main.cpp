#include "ros/ros.h"
#include <iostream>
#include "std_msgs/Float64.h"

 
int main(int argc, char **argv)
{
 
   ros::init(argc, argv, "move_arm");
   ros::NodeHandle nh;
 
   ros::Rate loop_rate(10);
 
   int count = 0;
 
   ros::Publisher pub_j1 = nh.advertise<std_msgs::Float64>("/simple_arm/joint_1_position_controller/command", 10);
   ros::Publisher pub_j2 = nh.advertise<std_msgs::Float64>("/simple_arm/joint_2_position_controller/command", 10);
  
   double start_time = 0;
   double elapsed;
 
    while (start_time != 0)
   {
       start_time = ros::Time::now().toSec();
   }
 
   while (ros::ok())
   {
       //std::cout <<"hello world\t : "<< count << std::endl;
 
       elapsed = ros::Time::now().toSec() - start_time;
 
       std_msgs::Float64 v;
       
       //sin함수 이용하여 joint angle값 계산
       v.data = sin(2*M_PI*0.1*elapsed)*(M_PI/2);
 
       //publish 할때는 클래스 타입
       pub_j1.publish(v);
       pub_j2.publish(v);
 
       loop_rate.sleep();
       ros::spinOnce();
       //count++;
      
 
   }
  
  
 
   return 0;
}
