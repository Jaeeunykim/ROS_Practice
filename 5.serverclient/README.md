# ROS Server/Client 구현 

## 사전준비
- worksapce 만들기
```
> mkdir -p ~/subak_ws/src
> cd ~/subak_ws/src
> catkin_init_workspace
> cd ~/subak_ws
> catkin_make
```
- message package 만들기
```
> cd ~/subak_ws/src
> catkin_create_pkg serverclient rospy roscpp std_msgs
```


## srv 파일 생성
- [코드 참조](https://github.com/Jaeeunykim/ROS_Practice/blob/master/5.serverclient/srv/Sum.srv)
```
> cd ~/subak_ws/src/serverclient
> mkdir srv
> cd ./srv
> code ./Sum.srv
```

## package.xml 수정
- message 생성을 위한 dependency 추가 
```
> cd ~/subak_ws/src/serverclient
> code ./package.xml

<build_depend>message_generation</build_depend>
<exec_depend>message_runtime</exec_depend>
  ```

## CMakeLists.txt 수정
- 
```
> cd ~/subak_ws/src/serverclient
> code ./CMakeLists.txt 
find_package(catkin REQUIRED COMPONENTS
 ...
 message_generation //추가
 )
```

```
generate_messages(
  DEPENDENCIES
  std_msgs
)
  ```

```
add_service_files(
  FILES
  Sum.srv
)
```

## message 빌드하기
```
> cd ~/subak_ws
> catkin_make install
```

## message 확인
```
> rossrv show Sum
or 
> rossrv info Sum
```
![](./result_image.png)

## node 만들기
- server node 만들기 
- [코드참조](https://github.com/Jaeeunykim/ROS_Practice/blob/master/5.serverclient/server.cpp)
```
> cd ~/subak_ws/src/serverclient
> code ./server.cpp
```
- client node 만들기 
- [코드참조](https://github.com/Jaeeunykim/ROS_Practice/blob/master/5.serverclient/client.cpp)
```
> cd ~/subak_ws/src/serverclient
> code ./client.cpp
```


## CMakLists.txt 추가 
```
> cd ~/subak_ws/src/serverclient
> code ./CMakeLists.txt 

add_executable(server server.cpp)
target_link_libraries(server ${catkin_LIBRARIES})
add_executable(client client.cpp)
target_link_libraries(client ${catkin_LIBRARIES})

```

## 빌드 및 실행
```
> cd ~/subak_ws
> catkin_make
> roscore
> rosrun serverclient server
> new terminal 실행
> source ./devel/setup.bash 
> rosrun serverclient client 3 5
```
