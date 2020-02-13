# Simple Arm 움직이기

## 빌드하기 

- git 에서 package clone하기 
```
> cd ~/subak_ws/src
> git clone https://github.com/Jaeeunykim/ROS_Practice.git 
```
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
