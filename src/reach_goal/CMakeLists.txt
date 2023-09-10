find_package(catkin REQUIRED COMPONENTS
        actionlib
	  nav_msgs
	  roscpp
	  rospy

)
find_package(OpenCV REQUIRED)
project(reach_goal)
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES navigation_goal
   CATKIN_DEPENDS roscpp rospy std_msgs actionlib
#  DEPENDS system_lib
)
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(task_goal src/task_goal.cpp)
add_executable(test src/test.cpp)
add_executable(last src/last.cpp)
add_executable(change_hope src/change_hope.cpp)
add_executable(change_final src/change_final.cpp)
add_executable(change_last src/change_last.cpp)
add_executable(dis src/dis.cpp)
target_link_libraries(test
   ${catkin_LIBRARIES}
)
target_link_libraries(task_goal
   ${catkin_LIBRARIES}
)
target_link_libraries(last
   ${catkin_LIBRARIES}
)
target_link_libraries(change_hope
   ${catkin_LIBRARIES}
)
target_link_libraries(change_final
   ${catkin_LIBRARIES}
)
target_link_libraries(change_last
   ${catkin_LIBRARIES}
)
target_link_libraries(dis
   ${catkin_LIBRARIES}
)
target_link_libraries(task_goal ${OpenCV_LIBS})
target_link_libraries(change_hope ${OpenCV_LIBS})
target_link_libraries(change_final ${OpenCV_LIBS})
target_link_libraries(change_last ${OpenCV_LIBS})
target_link_libraries(test ${OpenCV_LIBS})
target_link_libraries(last ${OpenCV_LIBS})
target_link_libraries(dis ${OpenCV_LIBS})
