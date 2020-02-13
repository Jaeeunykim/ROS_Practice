# ROS Pub/Sub node 구현

## 사전준비
- worksapce 만들기
```
> mkdir -p ~/subak_ws/src
> cd ~/subak_ws/src
> catkin_init_workspace
> cd ~/subak_ws
> catkin_make
```
- pub_sub package 만들기
```
> cd ~/subak_ws/src
> catkin_create_pkg pub_sub rospy roscpp std_msgs
```

## pub node 만들기 
- [소스참고](https://github.com/Jaeeunykim/ROS_Practice/blob/master/4.pub_sub/pub.cpp)
```
> cd ~/subak_ws/src/pub_sub
> code ./pub.cpp
```

## sub node 만들기
- [소스참고](https://github.com/Jaeeunykim/ROS_Practice/blob/master/4.pub_sub/sub.cpp)
```
> cd ~/subak_ws/src/pub_sub
> code ./sub.cpp
```

### CMakeLists.txt 수정
- CMakeLists.txt 파일에 아래 추가
```
> cd ~/subak_ws/src/pub_sub
> code ./CMakeLists.txt

add_executable(pub pub.cpp)
target_link_libraries(pub ${catkin_LIBRARIES})

add_executable(sub sub.cpp)
target_link_libraries(sub ${catkin_LIBRARIES})
```

## 빌드 
```
> cd ~/subak_ws
> catkin_make
```

## 실행하기 
```
> roscore
> rosrun pub_sub pub
> new terminal 실행
> cd ~/subak_ws
> source ./devel/setup.bash 
> rosrun pub_sub sub
```
