# Arduino LCD Interface

16×2 LCD is one kind of electronic device used to display the message and data.
The term LCD full form is Liquid Crystal Display.  The display is named 16×2 LCD
because it has 16 Columns and 2 Rows. it can be displayed (16×2=32) 32 characters 
in total and each character will be made of 5×8 Pixel Dots. These displays are mainly
based on multi-segment light-emitting diodes.  There are a lot of combinations of display 
available in the market like 8×1, 8×2, 10×2, 16×1, etc. but the 16×2 LCD is widely used.
These LCD modules are low cost,and programmer-friendly, therefore, is used in various 
DIY circuits, devices, and embedded projects.



| Pin number |name |Description |
| :---: | :---: | :---: |
| 1 | Ground/Source Pin | This is a GND pin of display, used to connect the GND terminal of the microcontroller unit or power source. |
| 2 | VCC/Source Pin | This is the voltage supply pin of the display, used to connect the supply pin of the power source. |
| 3 | V0/VEE/Control Pin | Adjusts the contrast of the LCD. |
| 4 | Register Select|This pin toggles among command or data register, used to connect a microcontroller unit pin and obtains either 0 or 1(0 = data mode, and 1 = command mode). |
| 5 |Read/Write/Control Pin |This pin toggles the display among the read or writes operation, and it is connected to a microcontroller unit pin to get either 0 or 1 (0 = Write Operation, and 1 = Read Operation). |
| 6 |Enable/Control Pin|This pin should be held high to execute Read/Write process, and it is connected to the microcontroller unit & constantly held high. |
| 7 to 14 |Data Pins |These pins are used to send data to the display. These pins are connected in two-wire modes like 4-wire mode and 8-wire mode. In 4-wire mode, only four pins are connected to the microcontroller unit like 0 to 3, whereas in 8-wire mode, 8-pins are connected to microcontroller unit like 0 to 7. |
| 15 |+ve pin of the LED |This pin is connected to +5V |
| 16 | -ve pin of the LED |  This pin is connected to GND.|

# Arduino LCD Interface code
<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">LiquidCrystal</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<b><font color="#d35400">LiquidCrystal</font></b> <font color="#000000">lcd</font><font color="#000000">(</font><font color="#000000">2</font><font color="#434f54">,</font> <font color="#000000">3</font><font color="#434f54">,</font> <font color="#000000">4</font><font color="#434f54">,</font> <font color="#000000">5</font><font color="#434f54">,</font> <font color="#000000">6</font><font color="#434f54">,</font> <font color="#000000">7</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">16</font><font color="#434f54">,</font> <font color="#000000">2</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;hello, world!&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">clear</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 <font color="#00979c">int</font> <font color="#000000">a</font><font color="#434f54">=</font><font color="#000000">20</font><font color="#000000">;</font>

 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">5</font><font color="#434f54">,</font> <font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; set the cursor to column 5, line 1</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#d35400">millis</font><font color="#000000">(</font><font color="#000000">)</font><font color="#434f54">&#47;</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">setCursor</font><font color="#000000">(</font><font color="#000000">5</font><font color="#434f54">,</font> <font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; set the cursor to column 5, line 2</font>
 &nbsp;<font color="#000000">lcd</font><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#000000">a</font><font color="#000000">)</font><font color="#000000">;</font>
 
<font color="#000000">}</font>

</pre>



# Arduino LCD Interface Circuit

![Arduino LCD Interface CKT](https://github.com/HoNtErBoT/Embedded-Circuit-importat/blob/main/03_Arduino/03_Arduino%20LCD%20Circuit.png)


## LCD Commands

There are some preset commands instructions in LCD, which we need to send to LCD through some microcontroller. Some important command instructions are given below: in arduino we dont need these commands ,whith the help of LiquidCrystal library we can controll lcd easily

|Hex Code|	Command to LCD Instruction Register|
| :---: | :---: | 
|0F|	LCD ON, cursor ON|
|01|	Clear display screen|
|02|	Return home|
|04|	Decrement cursor (shift cursor to left)|
|06|	Increment cursor (shift cursor to right)|
|05|	Shift display right|
|07|	Shift display left|
|0E|	Display ON, cursor blinking|
|80|	Force cursor to beginning of first line|
|C0|	Force cursor to beginning of second line|
|38|	2 lines and 5×7 matrix|
|83|	Cursor line 1 position 3|
|3C|	Activate second line|
|08|	Display OFF, cursor OFF|
|C1|	Jump to second line, position 1|
|OC|	Display ON, cursor OFF|
|C1|	Jump to second line, position 1|
|C2|	Jump to second line, position 2|



