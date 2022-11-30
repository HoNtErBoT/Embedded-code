#  4*4 Keypad interface with 16F877a

Keypads are widely used input devices being used in various electronics and embedded projects. They are used to take inputs in the form of numbers and alphabets, and feed the same into system for further processing. by using a matrix keypad; we can reduce pin usage counts, which associate 4x4 matrix keys. It will use only 8 pins to interface 16 SPST push buttons, out of which 4 connected in rows and 4 connected in columns, therefore saving 8 pins of the microcontroller’s.

![image](https://user-images.githubusercontent.com/109785046/204701115-d9c4d9f7-6bf2-4b76-89f9-6b8ee7782107.png)

 4x4 matrix keypad has 16 built-in pushbutton contacts connected to row and column lines.  A microcontroller can scan these lines for a button-pressed state. Here we  sets all the column lines to input, and all the row lines to output. Then, it picks a row and sets it high one pin at a time .  After that, it checks the column lines one at a time.  If the column connection stays low, the button on the row has not been pressed.  If it goes high, the microcontroller knows which row (the one it set high), and which column, (the one that was detected high when checked).
 
![image](https://user-images.githubusercontent.com/109785046/204701480-795fe95e-9d6c-4b26-bd81-e60db3495c67.png)



# Firmware for interfacing 4*4 Keypad with 16f877a

<pre>
<font color="#95a5a6">&#47;*</font>
<font color="#95a5a6"> * File &nbsp;: &nbsp;&nbsp;main.c</font>
<font color="#95a5a6"> * Author: &nbsp;&nbsp;Rajeev TR</font>
<font color="#95a5a6"> * Title : &nbsp;&nbsp;4*4 Keypad with 16f877a</font>
<font color="#95a5a6"> *&#47;</font>

<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">htc</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#434f54">&#47;&#47; Configuration word for PIC16F877A</font>
<font color="#000000">__CONFIG</font><font color="#000000">(</font> <font color="#000000">FOSC_HS</font> <font color="#434f54">&amp;</font> <font color="#000000">WDTE_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">PWRTE_ON</font> <font color="#434f54">&amp;</font> <font color="#000000">CP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">BOREN_ON</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&amp;</font> <font color="#000000">LVP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">CPD_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">WRT_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">DEBUG_OFF</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#5e6d03">#define</font> <font color="#000000">r1</font> &nbsp;<font color="#000000">RB0</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define RB0 as row-1</font>
<font color="#5e6d03">#define</font> <font color="#000000">r2</font> &nbsp;<font color="#000000">RB1</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define RB1 as row-2</font>
<font color="#5e6d03">#define</font> <font color="#000000">r3</font> &nbsp;<font color="#000000">RB2</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define RB2 as row-3</font>
<font color="#5e6d03">#define</font> <font color="#000000">r4</font> &nbsp;<font color="#000000">RB3</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define RB3 as row-4</font>

<font color="#5e6d03">#define</font> <font color="#000000">c1</font> &nbsp;<font color="#000000">RB4</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define RB4 as column-1</font>
<font color="#5e6d03">#define</font> <font color="#000000">c2</font> &nbsp;<font color="#000000">RB5</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define RB5 as column-2</font>
<font color="#5e6d03">#define</font> <font color="#000000">c3</font> &nbsp;<font color="#000000">RB6</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define RB6 as column-3</font>
<font color="#5e6d03">#define</font> <font color="#000000">c4</font> &nbsp;<font color="#000000">RB7</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define RB7 as column-4</font>

<font color="#5e6d03">#define</font> <font color="#000000">_XTAL_FREQ</font> &nbsp;&nbsp;<font color="#000000">20000000</font> &nbsp;<font color="#434f54">&#47;&#47; Define CPU Frequency</font>




<font color="#00979c">void</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#00979c">void</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#00979c">int</font> <font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">0</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">TRISB</font> <font color="#434f54">=</font> <font color="#000000">0b11110000</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make RB0 to RB3 output and RB4 to RB7 input</font>
 &nbsp;<font color="#000000">TRISC</font> <font color="#434f54">=</font> <font color="#000000">0b00000000</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make PORTC as output</font>
 &nbsp;<font color="#000000">PORTC</font> <font color="#434f54">=</font> <font color="#000000">0b00000000</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make all pins in PORTC as LOW</font>
 &nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">PORTB</font> <font color="#434f54">=</font> <font color="#000000">0b00000001</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c1</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">7</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c2</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">8</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c3</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">9</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c4</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">12</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">PORTB</font> <font color="#434f54">=</font> <font color="#000000">0b00000010</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c1</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">4</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c2</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">5</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c3</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">6</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c4</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">13</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">PORTB</font> <font color="#434f54">=</font> <font color="#000000">0b00000100</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c1</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">1</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c2</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">2</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c3</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">3</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c4</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">14</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">PORTB</font> <font color="#434f54">=</font> <font color="#000000">0b00001000</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c1</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">10</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c2</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">0</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c3</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">11</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">c4</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">15</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">PORTC</font><font color="#434f54">=</font><font color="#000000">x</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## Circuit Diagram

![image](https://user-images.githubusercontent.com/109785046/204717132-a9c95a5f-232a-41e4-af46-9e70ee5b56d5.png)


