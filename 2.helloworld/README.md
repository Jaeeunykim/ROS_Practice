# Hello World 출력하기

## 사전준비
- worksapce 만들기
```
> mkdir -p ~/subak_ws/src
> cd ~/subak_ws/src
> catkin_init_workspace
> cd ~/subak_ws
> catkin_make
> source ~/subak_ws/devel/setup.bash 
```
- helloworld package 만들기
```
> cd ~/subak_ws/src
> catkin_create_pkg helloworld rospy roscpp std_msgs
```

## hello node 만들기 
- [소스참고](https://github.com/Jaeeunykim/ROS_Practice/blob/master/2.helloworld/hello.cpp)
```
> cd ~/subak_ws/src/helloworld
> code ./hello.cpp
```

## 빌드하기

### CMakeLists.txt 수정
  - CMakeLists.txt 파일에 아래 추가
```
add_executable(hello hello.cpp)
target_link_libraries(hello ${catkin_LIBRARIES})

```

  - 빌드 
  ```
  > cd ~/subak_ws
  > catkin_make

  ```

## 실행하기 
```
> roscore (new terminal)
> rosrun helloworld hello
```
