# What is OpenCV ?
OpenCV is a Python open-source library that is used for computer vision in artificial intelligence, machine learning, face recognition, etc. In OpenCV, the CV is an abbreviation form of computer vision, which is defined as a field of study that helps computers understand the content of digital images such as photographs and videos. Python, C++, Java, and many other programming languages are supported by OpenCV. It can analyse images and videos to find faces, objects, and even human handwriting.
Computer vision allows the computer to perform the same kind of tasks as humans with the same efficiency. There are a two main task which are defined below:

- **Object Classification** - In the object classification, we train a model on a dataset of particular objects, and the model classifies new objects as belonging to one or more of your training categories.
- **Object Identification** - In the object identification, our model will identify a particular instance of an object

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

# Read and Write an image 

```diff
import cv2
img = cv2.imread("2.jpg") # cv2.imread function, in below method,
cv2.imshow("image", img)  # Creating GUI window to display an image on screen
key = cv2.waitKey(0)      # To hold the window on screen, we use cv2.waitKey method
                          # If 0 pass an parameter, then it will hold the screen until user close it.
if key == ord('s'):       # Save image as converted.png when pressing 's'
   cv2.imwrite("Converted.png", img)
cv2.destroyAllWindows()   # It is for removing/deleting created GUI window from screen and memory
```

![image](https://github.com/HoNtErBoT/Embedded-code/assets/109785046/b467fe1c-f55b-4b80-857d-12914bd69612)









