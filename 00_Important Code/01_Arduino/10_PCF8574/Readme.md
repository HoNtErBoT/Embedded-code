# PCF8574 Interface with arduino

The PCF8574 is an I2C device,used to get 8-pot parallel bus IO expansion. 
It provides GPIO expansion for many microcontrollers in a simple and 
cost-effective method. The interface for this IC is I2C (or I2C) using SDA (Data)
and SCL (Clock) lines. So, if your microcontroller has a limited number of IO 
pins and has I2C capability, then you can use this IC to expand the IO pins.
<br>


## PCF8574 Interface with arduino code

<br>

<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#d35400">Wire</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">Wire</font><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">Wire</font><font color="#434f54">.</font><font color="#d35400">beginTransmission</font><font color="#000000">(</font><font color="#000000">0x20</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">Wire</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">0xFF</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">Wire</font><font color="#434f54">.</font><font color="#d35400">endTransmission</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">Wire</font><font color="#434f54">.</font><font color="#d35400">beginTransmission</font><font color="#000000">(</font><font color="#000000">0x20</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">Wire</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">0x00</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">Wire</font><font color="#434f54">.</font><font color="#d35400">endTransmission</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>

<br>

## PCF8574 Interface with arduino circuit

<br>

![image](https://user-images.githubusercontent.com/109785046/187169451-6c5051d2-6eae-4af7-a85c-21e2c122db1c.png)


