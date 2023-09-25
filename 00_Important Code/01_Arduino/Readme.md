# Arduino UNO
The Arduino UNO is one of the most popular Arduino board.  Arduino UNO uses ATmega328P microcontroller as the main control and processing unit of the board. The Atmega328P has 32kB In-System Programmable Flash Memory, 1kB EEPROM, and 2kB internal SRAM.

The UNO board provides access to 14 Digital I/O pins (0-13). Of these 14 digital I/O pins, 6 pins can be used as PWM pins (pins 3, 5, 6, 9, 10 and 11). The PWM pins are indicated by ~ before the pin number on the Arduino UNO boards (E.g. ~3).Digital pins 0 and 1 are the serial communication pins RX and TX respectively.6 pins are available for use as Analog input pins (A0-A5). The analog pins can be used as digital I/O pins as well if there is no analog input to be measured. The numbers given to the pins on the Arduino board are not the pin numbers of the ATmega328P microcontroller. These are the pin numbers used while accessing the functions from the Arduino libraries. The UNO board can be powered through a USB cable , external AC-DC adapter and with an external battery, While uploading the sketch using Arduino IDE, make sure that there are no connections from other devices to pins 0 and 1 of UNO board. These are the Rx and Tx pins of ATmega328P, because these pins are used while uploading the sketch.

![image](https://user-images.githubusercontent.com/109785046/187017307-8ab35b82-10e4-4288-a67c-8d02fb257eda.png)

##  What is a Bootloader?
If we take a bare microcontroller chip fresh from the factory and apply power to it, the internal system clock will start ticking away.  But nothing else will happen.  Without a program to run, the chip wont get processed until a program is been loaded. Most microcontroller chips have a special programming interface that allows you to burn programs into Flash memory.  Unfortunately, these programming interfaces generally require some specialized tools

The bootloader is a small piece of software that allows uploading of sketches onto the Arduino board via a more convenient interface like a standard USB cable

##  Digital GPIO of Arduino
General-Purpose Input Output (GPIO) is a digital pin of an IC. It can be used for interfacing devices. Arduino Uno board has various digital IO pins and Arduino analog pins also can be used as digital input/output pins.

### LED Blinking code

<pre>
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; sets the digital pin 13 as output</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font> <font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; sets the digital pin 13 on</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; waits for a second</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font> <font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; sets the digital pin 13 off</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; waits for a second</font>
<font color="#000000">}</font>

</pre>

### LED Blinking circuit
![Arduino LED Interface CKT](https://github.com/HoNtErBoT/Embedded-Circuit-importat/blob/main/03_Arduino/Arduino%20led%20interface.png)

### Controlling LED using switch

<pre>
<font color="#00979c">int</font> <font color="#000000">pushButton</font> <font color="#434f54">=</font> <font color="#000000">2</font><font color="#000000">;</font>
<font color="#00979c">int</font> <font color="#000000">LED</font> <font color="#434f54">=</font> <font color="#000000">13</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">pushButton</font><font color="#434f54">,</font> <font color="#00979c">INPUT_PULLUP</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47;configure pin as input with pullup enabled &nbsp;&nbsp;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">LED</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;configure pin as output</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;
 &nbsp;<font color="#00979c">int</font> <font color="#000000">buttonState</font> <font color="#434f54">=</font> <font color="#d35400">digitalRead</font><font color="#000000">(</font><font color="#000000">pushButton</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; read the input pin: </font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">LED</font><font color="#434f54">,</font> <font color="#000000">(</font><font color="#434f54">!</font><font color="#000000">(</font><font color="#000000">buttonState</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;turn len on when switch pressed &nbsp;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; delay in between reads for stability</font>
<font color="#000000">}</font>

</pre>
### Controlling LED using switch Circuit
![Arduino Controlling LED using switch CKT](https://github.com/HoNtErBoT/Embedded-Circuit-importat/blob/main/03_Arduino/Digital%20IO.png)



