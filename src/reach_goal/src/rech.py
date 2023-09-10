import cv2
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
linear_speed = 0.2
angular_speed = 0.5

# Open camera using OpenCV
cap = cv2.VideoCapture("/dev/video0")
weight=2000
height=3000
cap.set(4, weight) 
cap.set(3, height)
codec = cv2.VideoWriter_fourcc('M', 'J', 'P', 'G')
cap.set(cv2.CAP_PROP_FOURCC, codec)
cap.set(cv2.CAP_PROP_AUTOFOCUS, False)
while(True):
    ret, frame = cap.read()
    cv2.imshow('Camera_USB', frame)
cap.release()
cv2.destroyAllWindows()
'''
while not rospy.is_shutdown():
    # Read frame from camera
    print(cap)
    ret, frame = cap.read()
    cv2.imshow('Camera_USB', frame)
    if not ret:
        continue

    # Convert frame to grayscale
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Detect markers using aruco module
    aruco_dict = aruco.Dictionary_get(aruco.DICT_6X6_250)
    parameters = aruco.DetectorParameters_create()
    corners, ids, rejectedImgPoints = aruco.detectMarkers(gray, aruco_dict, parameters=parameters)
    
    # Check if marker was detected
    if ids is not None:

        frame = aruco.drawDetectedMarkers(frame, corners, ids)
        # Show frame with detected markers
        
        # Get the center of the marker
        marker_center = corners[0][0].mean(axis=0)
        marker_x, marker_y = marker_center

        # Get the size of the marker
        marker_size = cv2.norm(corners[0][0][0] - corners[0][0][1])

        # Calculate distance from marker using marker size
        distance = 1 / marker_size

        # Calculate error between center of frame and center of marker
        error_x = frame.shape[1] / 2 - marker_x

        # Create Twist message to control robot movement
        twist = Twist()

        # Set linear speed if distance is greater than target distance
        if distance > target_distance:
            twist.linear.x = linear_speed

        # Set angular speed based on error_x
        twist.angular.z = -error_x * angular_speed

        # Publish Twist message
        cmd_vel_pub.publish(twist)
    else:
        # Marker not detected, stop robot movement
        cmd_vel_pub.publish(Twist())

# Release camera and destroy all windows
cap.release()
cv2.destroyAllWindows()'''

