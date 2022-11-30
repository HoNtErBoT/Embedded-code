# 4*4 Keypad interface with 16F877a

Keypads are widely used input devices being used in various electronics and embedded projects. They are used to take inputs in the form of numbers and alphabets, and feed the same into system for further processing. by using a matrix keypad; we can reduce pin usage counts, which associate 4x4 matrix keys. It will use only 8 pins to interface 16 SPST push buttons, out of which 4 connected in rows and 4 connected in columns, therefore saving 8 pins of the microcontroller’s.

![image](https://user-images.githubusercontent.com/109785046/204701115-d9c4d9f7-6bf2-4b76-89f9-6b8ee7782107.png)

 4x4 matrix keypad has 16 built-in pushbutton contacts connected to row and column lines.  A microcontroller can scan these lines for a button-pressed state. Here we  sets all the column lines to input, and all the row lines to output. Then, it picks a row and sets it high one pin at a time .  After that, it checks the column lines one at a time.  If the column connection stays low, the button on the row has not been pressed.  If it goes high, the microcontroller knows which row (the one it set high), and which column, (the one that was detected high when checked).
 
![image](https://user-images.githubusercontent.com/109785046/204701480-795fe95e-9d6c-4b26-bd81-e60db3495c67.png)


