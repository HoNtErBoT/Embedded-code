# OpenCV Python Tutorial
Python Tutorial for OpenCV
A significant open-source library for image processing, machine learning, and computer vision is called OpenCV. Python, C++, Java, and many other programming languages are supported by OpenCV. It can analyze images and videos to find faces, objects, and even human handwriting. 

# Read and display an image

```diff
import cv2
img = cv2.imread("2.jpg") # cv2.imread function, in below method,
cv2.imshow("image", img)  # Creating GUI window to display an image on screen
print(img.shape)
cv2.waitKey(0)            # To hold the window on screen, we use cv2.waitKey method
                          # If 0 pass an parameter, then it will hold the screen until user close it.
cv2.destroyAllWindows()   # It is for removing/deleting created GUI window from screen and memory

```

![image](https://github.com/HoNtErBoT/Embedded-code/assets/109785046/e664dad0-85ed-4080-8a83-f848ded0027c)







