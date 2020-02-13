# Hello World 10Hz로 출력하기

## 사전준비
- worksapce 만들기
```
> mkdir -p ~/subak_ws/src
> cd ~/subak_ws/src
> catkin_init_workspace
> cd ~/subak_ws
> catkin_make
```
- helloworld10hz package 만들기
```
> cd ~/subak_ws/src
> catkin_create_pkg helloworld10hz rospy roscpp std_msgs
```

## hello node 만들기 
- [소스참고](https://github.com/Jaeeunykim/ROS_Practice/blob/master/3.helloworld10hz/main.cpp)
```
> cd ~/subak_ws/src/helloworld10hz
> code ./main.cpp
```

## 빌드하기

### CMakeLists.txt 수정
  - CMakeLists.txt 파일에 아래 추가
```
> cd ~/subak_ws/src/helloworld10hz
> code ./CMakeLists.txt
add_executable(hello2 main.cpp)
target_link_libraries(hello2 ${catkin_LIBRARIES})

```

  - 빌드 
  ```
  > cd ~/subak_ws
  > catkin_make

  ```

## 실행하기 
```
> roscore 
> rosrun helloworld10hz hello2 (new terminal)
```
