# message 만들기 

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
> cd ~/subak/src
> catkin_create_pkg message rospy roscpp std_msgs
```



## msg 파일 생성
```
> cd ~/subak/message
> code ./Info.msg
```

## package.xml 수정
- message 생성을 위한 dependency 추가 
```
<build_depend>message_generation</build_depend>
<exec_depend>message_runtime</exec_depend>
  ```

  ## CMakeLists.txt 수정
  - 
  ```
  find_package(catkin REQUIRED COMPONENTS
   ...
   message_generation //추가
   )
```

```
catkin_package(
  ...
  CATKIN_DEPENDS message_runtime ... //추가
  ...)
  ```

```
add_message_files(
  FILES
  Info.msg
)
```

## message 빌드하기
```
> cd ~/subak
> catkin_make install
```

## message 확인
```
> rosmsg show Info
or 
> rosmsg info Info
```
![](./result_image.png)