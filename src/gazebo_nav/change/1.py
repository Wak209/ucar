from PIL import Image

def read_img():
    im = Image.open("/home/inano/ucar_ws/src/gazebo_nav/maps/523.pgm")    # 读取文件
    im.show()    # 展示图片
    print(im.size)   # 输出图片大小

if __name__ == "__main__":
    read_img()     # 调用read_img()