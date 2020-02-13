#include "ros/ros.h"
#include <iostream>

int main(int argc, char **argv)
{
    //hello 노드 초기화
    ros::init(argc, argv, "hello");

    //nodehandle 만들기 
    ros::NodeHandle nh;

    printf("hello world\n");

    return 0;
}