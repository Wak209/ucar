# -*- coding: utf-8 -*-
import numpy as np
import cv2
import time
from cv2 import aruco

import rospy
from geometry_msgs.msg import Twist

# Initialize ROS node
rospy.init_node('auto_park')

# Create publisher to control robot movement
cmd_vel_pub = rospy.Publisher('/cmd_vel', Twist, queue_size=1)

# Set target distance from marker in meters
target_distance = 0.5

# Set linear and angular speed
linear_speed = 0.5
angular_speed = 0.3
cap = cv2.VideoCapture("/dev/video0")

#cap.set(cv2.CAP_PROP_FOURCC, cv2.VideqoWriter_fourcc(*'MJPG'))

weight=400
height=500


cap.set(4, weight)  # 设置分辨率 3和4 分别代表摄像头的属性值。你可以使用函数 cap.get(propId) 来获得视频的一些参数信息。这里propId 可以是 0 到 18 之间的任何整数。每一个数代表视频的一个属性,见表其中的一些值可以使用cap.set(propId,value) 来修改,value 就是你想要设置成的新值。例如,我可以使用 cap.get(3) 和 cap.get(4) 来查看每一帧的宽和高。默认情况下得到的值是 640X480。但是我可以使用 ret=cap.set(3,320)和 ret=cap.set(4,240) 来把宽和高改成 320X240。
cap.set(3, height)

codec = cv2.VideoWriter_fourcc('M', 'J', 'P', 'G')
cap.set(cv2.CAP_PROP_FOURCC, codec)
#print(codec)
print(cap.get(cv2.CAP_PROP_FRAME_WIDTH),cap.get(cv2.CAP_PROP_FRAME_HEIGHT))


cap.set(cv2.CAP_PROP_AUTOFOCUS, False)  # 禁止自动对焦


target_size=400
while(True):
    ret, frame = cap.read()
    frame = cv2.flip(frame,1)
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Detect markers using aruco module
    aruco_dict = aruco.Dictionary_get(aruco.DICT_4X4_50)
    parameters = aruco.DetectorParameters_create()
    corners, ids, rejectedImgPoints = aruco.detectMarkers(gray, aruco_dict, parameters=parameters)

    # Draw detected markers on frame
    frame = aruco.drawDetectedMarkers(frame, corners, ids)

    # Show frame with detected markers
    #cv2.imshow('frame', frame)
   
    if ids is not None:
        # Get the center of the marker
        marker_size = cv2.norm(corners[0][0][0] - corners[0][0][1])
        print(marker_size)
        marker_center = corners[0][0].mean(axis=0)
        marker_x, marker_y = marker_center

         # Create Twist message to control robot movement
        twist = Twist()

        # Set linear speed if marker size is smaller than target size
        if marker_size < target_size:
            twist.linear.x = linear_speed

        # Publish Twist message
        cmd_vel_pub.publish(twist)
    else:
        # Marker not detected, stop robot movement
        cmd_vel_pub.publish(Twist())
    # Check if 'q' key was pressed
    if ids is None:
        print("find done!!!")
        break
    elif marker_size > target_size:
        print("stop done!!!")
        break
cap.release()
cv2.destroyAllWindows()
