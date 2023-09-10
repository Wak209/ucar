# encoding: utf-8
from Stitcher import Stitcher
import cv2
# 读取拼接图片（注意图片左右的放置）
#imageB = cv2.imread("75.png")
#imageA = cv2.imread("146.png")

#print(cv2.__version__)
# 是对右边的图形做变换
imageA = cv2.imread("146.png")
imageB = cv2.imread("75.png")
imageA = cv2.resize(imageA, (0, 0), fx=0.3, fy=0.3)
imageB = cv2.resize(imageB, (0, 0), fx=0.3, fy=0.3)


# 把图片拼接成全景图
stitcher = Stitcher()
(result, vis) = stitcher.stitch([imageA, imageB], showMatches=False)

# 显示所有图片
cv2.imshow("Image A", imageA)
cv2.imshow("Image B", imageB)
cv2.imshow("Keypoint Matches", vis)
cv2.imshow("Result", result)
#cv2.imwrite("result.jpg", result)
cv2.waitKey(0)
cv2.destroyAllWindows()
