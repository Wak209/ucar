# -*- coding: utf-8 -*-
import numpy as np
import cv2
import time

cap = cv2.VideoCapture("/dev/video0")

#cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc(*'MJPG'))

weight=2000
height=3000


cap.set(4, weight)  # 设置分辨率 3和4 分别代表摄像头的属性值。你可以使用函数 cap.get(propId) 来获得视频的一些参数信息。这里propId 可以是 0 到 18 之间的任何整数。每一个数代表视频的一个属性,见表其中的一些值可以使用cap.set(propId,value) 来修改,value 就是你想要设置成的新值。例如,我可以使用 cap.get(3) 和 cap.get(4) 来查看每一帧的宽和高。默认情况下得到的值是 640X480。但是我可以使用 ret=cap.set(3,320)和 ret=cap.set(4,240) 来把宽和高改成 320X240。
cap.set(3, height)

codec = cv2.VideoWriter_fourcc('M', 'J', 'P', 'G')
cap.set(cv2.CAP_PROP_FOURCC, codec)
#print(codec)
print(cap.get(cv2.CAP_PROP_FRAME_WIDTH),cap.get(cv2.CAP_PROP_FRAME_HEIGHT))


cap.set(cv2.CAP_PROP_AUTOFOCUS, False)  # 禁止自动对焦
#cap.set(cv2.CAP_PROP_SETTINGS, 1) 
b_fps=time.time()  #后帧时间全局变量赋值
num=1
#print(cap.get(cv2.CAP_PROP_CONTRAST))
#cap.set(cv2.CAP_PROP_CONTRAST,0.3)
#print(cap.get(cv2.CAP_PROP_CONTRAST))


#print(cap.get(cv2.CAP_PROP_SATURATION))
#cap.set(cv2.CAP_PROP_SATURATION,0.3)
#print(cap.get(cv2.CAP_PROP_SATURATION))



while(True):
    # 读取一帧
    f_fps=time.time() #前帧时间
    fps_now=str(round(1/(f_fps-b_fps),2))   #求当前帧率
    b_fps=f_fps #后帧时间
    
    ret, frame = cap.read()
    frame = cv2.flip(frame,1)   ##图像左右颠倒

    #frame = frame[300:600,400:800]
    #cv2.putText(frame,'FPS:'+' '+fps_now,(10, 30), cv2.FONT_HERSHEY_COMPLEX_SMALL, 1 ,(0,0,255),2,cv2.LINE_AA)
    h,w=frame.shape[:2]
    #print(h,w)
    #print("获得的帧率:",fps)
    cv2.imshow('Camera_USB', frame)
    if cv2.waitKey(1)& 0xFF == ord('q'):
        cv2.imwrite("./test/"+str(num)+".jpg",frame)
        num+=1
    if cv2.waitKey(1) & 0xFF == 27:
        break
cap.release()
cv2.destroyAllWindows()
