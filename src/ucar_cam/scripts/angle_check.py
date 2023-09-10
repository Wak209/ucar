#!/usr/bin/env python3
import rospy
import math
import time
from geometry_msgs.msg import Twist, Point
# from tf.transformations import *
from geometry_msgs.msg import Pose
from geometry_msgs.msg import Quaternion
from nav_msgs.msg import Odometry

import numpy as np
import cv2
import time

# from math import copysign, sqrt, pow
import sys

times = 0 
class angleCheckNode():
    def __init__(self):
        global times
        # Give the node a name
        rospy.init_node('angle_check_node', anonymous=False)
        self.odom_sub = rospy.Subscriber("/odom", Odometry, self.odomCB,queue_size=1) 

        # Set rospy to execute a shutdown function when terminating the script
        rospy.on_shutdown(self.shutdown)

        # Set the angle to travel
        '''
        if len(sys.argv) == 2:
            if '.' in sys.argv[1]:
                try:
                    self.test_dyaw = float(sys.argv[1])
                except Exception:
                    self.test_dyaw = 2*math.pi
                    print("set test angle =",self.test_dyaw)
                
            else:
                try:
                    self.test_dyaw = int(sys.argv[1])/180*math.pi
                except Exception:
                    self.test_dyaw = 2*math.pi
                    print("set test angle =",self.test_dyaw)
                
        else:
            self.test_dyaw = rospy.get_param('~test_dyaw', 2*math.pi) # 默认测试360度
            print("set test angle =",self.test_dyaw)
        '''
        self.take_photo()
        times+=1
        self.test_dyaw = rospy.get_param('~test_dyaw', math.pi/2)
        self.d_yaw = self.test_dyaw
        self.r_speed     = rospy.get_param('~rotate_speed', 1.2) # rad per second
        self.r_tolerance = rospy.get_param('~yaw_tolerance', 0.05) # meters
        # self.odom_linear_scale_correction = rospy.get_param('~odom_linear_scale_correction', 1.0)
        self.start_test = rospy.get_param('~start_test', True)
        
        # Publisher to control the robot's speed
        self.cmd_vel = rospy.Publisher('/cmd_vel', Twist, queue_size=1)

        rospy.spin()

    def odomCB(self, data):
        global times
        print("odomCB")
        if abs(self.d_yaw) < self.r_tolerance or not self.start_test:
            return
        
        self.d_yaw = self.d_yaw - data.twist.twist.angular.z* 0.05
        print("d_yaw: ",self.d_yaw)
        if abs(self.d_yaw) < self.r_tolerance:
            print("finish.")
            time.sleep(0.2)

            if times <=2:
                print(times)
                self.take_photo()
                self.d_yaw = math.pi/2
                self.start_test = True
                times+=1
            elif times == 3:
                self.take_photo()
                times+=1
            #self.odom_sub.unregister()
            return
        
        move_cmd = Twist()
        if self.d_yaw < 0:
            move_cmd.angular.z = -1 * self.r_speed
        else:
            move_cmd.angular.z =      self.r_speed
        self.cmd_vel.publish(move_cmd)

    def take_photo(self):
        cap = cv2.VideoCapture("/dev/video0")
        weight=2000
        height=3000
        cap.set(4, weight)  
        cap.set(3, height)
        codec = cv2.VideoWriter_fourcc('M', 'J', 'P', 'G')
        cap.set(cv2.CAP_PROP_FOURCC, codec)
        ret, frame = cap.read()
        frame = cv2.flip(frame,1) 
        cv2.imwrite("./game/"+str(times)+".jpg",frame)
        cap.release()
    
    def shutdown(self):
        # Always stop the robot when shutting down the node
        rospy.loginfo("Stopping the robot...")
        self.cmd_vel.publish(Twist())
        rospy.sleep(1)
 
if __name__ == "__main__":
    try:
        angleCheckNode()
        rospy.spin()
    except Exception as e:
        print("TRY_ERROR: ")
        print(e)