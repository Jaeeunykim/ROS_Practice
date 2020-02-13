#include "ros/ros.h"
#include <iostream>

int main(int argc, char **argv)
{
    //hello 노드 초기화
    ros::init(argc, argv, "hello2");

    //nodehandle 만들기 
    ros::NodeHandle nh;

    ros::Rate loop_rate(10);
    int count =0;

    while(ros::ok())
    {
        printf("hello world : %d\n", count);

        loop_rate.sleep();
        ros::spinOnce();
        count++;

    }

    return 0;
}