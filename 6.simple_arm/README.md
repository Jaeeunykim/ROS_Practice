# Simple Arm 움직이기

## 사전준비
- Package 만들기 
```
> cd ~/subak_ws/src
> catkin_create_pkg mover rospy roscpp std_msgs
```
- git 에서 package clone하기 
```
> cd ~/subak_ws/src
> git clone https://github.com/Jaeeunykim/ROS_Practice.git 
```
## move_arm node 만들기
- [소스참조](https://github.com/Jaeeunykim/ROS_Practice/blob/master/6.simple_arm/main.cpp)
```
> cd ~/subak_ws/src/mover
> code ./main.cpp
```
- CMakeLists 추가 
```
> cd ~/subak_ws/src/mover
> code ./CMakeLists.txt 
add_executable(move_arm main.cpp)
target_link_libraries(move_arm ${catkin_LIBRARIES})

```

## 빌드하기 
```
> cd ~/subak_ws
> catkin_make
```

## 실행하기 
```
> roslaunch simple_arm robot_spawn.launch
```
새 터미널 열기
```
> cd ~/subak_ws
> source ./devel/setup.bash
> rosrun mover move_arm
```
