# Bluetooth


Bluetooth is a technology standard used to enable short-range wireless communication between electronic devices. Since Bluetooth operates on radio frequencies, rather than the infrared spectrum used by traditional remote controls, devices using this technology do not have to maintain a line of sight to communicate. Every bluetooth enabled device requires a low-cost **transceiver** chip be included in each device. The transceiver chip transmits and receives data through a previously unused frequency band of **2.45 Ghz** that is available globally,The maximum Bluetooth range is 10 meters.




**HC-05** is a Bluetooth module which is designed for wireless comunication, This HC05 bluetooth serial module allow all serial enabled devices to communicate with each other using Bluetooth.This can be used in two modes of operation.
## Modes of Operation
   - Command Mode 
   - Data Mode. 

### Command Mode
In Command Mode, you can communicate with the Bluetooth module through AT Commands for configuring various settings and parameters of the Module like changing Baud Rate, changing module name and it can be used to set the device as master or slave. 

### Data Mode
In this mode, the module is used for communicating with other Bluetooth device like computer mobile phone etc.

## HC-05 Pinout Configuration
|Pin Number  |Pin Name |Description |
| :---: | :---: | :---: |
| 1 |Enable / Key |This pin is used to toggle between Data Mode (set low) and AT command mode (set high). By default it is in Data mode, The default baud rate of HC-05 **in command mode is 38400bps** and **9600 in data mode** |
| 2 | Vcc| Powers the module. Connect to +5V Supply voltage |
| 3 | Ground|Ground pin of module, connect to system ground. |
| 4 | TX| Transmits Serial Data. Everything received via Bluetooth will be given out by this pin as serial data.|
| 5 | RX| Receive Serial Data. Every serial data given to this pin will be broadcasted via Bluetooth|
| 6 | State| The state pin is connected to on board LED, it can be used as a feedback to check if Bluetooth is working properly.|
| 7 | LED| Indicates the status of Module <br>1) Blink once in 2 sec-> Module has entered Command Mode   <br>2) Repeated Blinking -> Waiting for connection in Data Mode <br>3) Blink twice in 1 sec -> Connection successful in Data Mode |
| 8 | Button|Used to control the Key/Enable pin to toggle between Data and command Mode |

## Arduino HC-05 Code

<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">SoftwareSerial</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<b><font color="#d35400">SoftwareSerial</font></b> <font color="#000000">Bluetooth</font><font color="#000000">(</font><font color="#000000">10</font><font color="#434f54">,</font> <font color="#000000">11</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; RX, TX</font>
<font color="#00979c">char</font> <font color="#000000">x</font><font color="#000000">;</font>
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;<font color="#000000">Bluetooth</font><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font><font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#005c5f">&#34;Serial monitor&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>
<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;
 &nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">Bluetooth</font><font color="#434f54">.</font><font color="#d35400">available</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">)</font>
 &nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><font color="#000000">Bluetooth</font><font color="#434f54">.</font><font color="#d35400">read</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">x</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><font color="#000000">x</font><font color="#434f54">==</font><font color="#00979c">&#39;a&#39;</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font><font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">else</font> <font color="#5e6d03">if</font><font color="#000000">(</font><font color="#000000">x</font><font color="#434f54">==</font><font color="#00979c">&#39;b&#39;</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font><font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">10</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">available</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">)</font> 
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">Bluetooth</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">read</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">10</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>

 &nbsp;
<font color="#000000">}</font>

</pre>

## Arduino HC-05 circuit diagram

![Arduino HC05 Interface CKT](https://github.com/HoNtErBoT/Embedded-Circuit-importat/blob/main/03_Arduino/05_Arduino%20Bluetooth_HC05.jpg)






