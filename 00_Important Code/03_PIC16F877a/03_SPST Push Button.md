# PIC 16f877a SPST Push Button in MPLAB-X

![image](https://user-images.githubusercontent.com/109785046/204700549-5bf060f7-eb34-4d4a-9a8a-6d2272c30b2f.png)


# Push button switches
Push buttons are basic input device in an embedded system seen in very simple to highly complex systems. They are the basic mechanical on-off buttons which act as control devices. It short circuits the line when it is pressed and opens when it is not pressed. Push-button switches are of two types push to on and push to off switches. Push-button switches open and closes the contact between two ends of a line and returns two to the default state when released. It is used as an input device, by connecting it to a pin of the microcontroller which is configured as an input. The button is connected to the IO pin such that it can change the state of the controller pin(high or low)when it is pressed. The change in the state of the pin can be scanned in firmware.

![image](https://user-images.githubusercontent.com/109785046/204694098-ab5bc9dc-68c8-4bee-b005-be91c46fa6d7.png)

# Pull up mode

![image](https://user-images.githubusercontent.com/109785046/204697595-75885a79-6a17-4437-8b2b-9c1db47893bb.png)

The above figure shows push-button interfacing in pull up mode. The push-button switch with a Pull-Up or a Pull-Down mode is a better choice than a direct interface, which will source current to the microcontroller pin. The microcontroller pin is connected to Vcc through a pull-up resistor. It is also connected to ground through a push-button switch. When the switch is pressed the pin will be connected to ground and thus the voltage will drop to zero. This change can be verified in firmware if the above-mentioned pin is configured as an input.

## Firmware for checking the keypress event in Pull up mode

<pre>
<font color="#95a5a6">&#47;*</font>
<font color="#95a5a6"> * File &nbsp;: &nbsp;&nbsp;main.c</font>
<font color="#95a5a6"> * Author: &nbsp;&nbsp;Rajeev TR</font>
<font color="#95a5a6"> * Title : &nbsp;&nbsp;SPST Push Button Pull Up Mode</font>
<font color="#95a5a6"> *&#47;</font>

<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">htc</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#434f54">&#47;&#47; Configuration word for PIC16F877A</font>
<font color="#000000">__CONFIG</font><font color="#000000">(</font> <font color="#000000">FOSC_HS</font> <font color="#434f54">&amp;</font> <font color="#000000">WDTE_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">PWRTE_ON</font> <font color="#434f54">&amp;</font> <font color="#000000">CP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">BOREN_ON</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&amp;</font> <font color="#000000">LVP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">CPD_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">WRT_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">DEBUG_OFF</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#5e6d03">#define</font> <font color="#000000">LED</font> &nbsp;<font color="#000000">RB0</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define LED pin as RB0</font>
<font color="#5e6d03">#define</font> <font color="#000000">SW1</font> &nbsp;<font color="#000000">RB1</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define Switch-1 pin as RB1</font>
<font color="#5e6d03">#define</font> <font color="#000000">_XTAL_FREQ</font> &nbsp;&nbsp;<font color="#000000">20000000</font> &nbsp;<font color="#434f54">&#47;&#47; Define CPU Frequency</font>


<font color="#00979c">void</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#00979c">void</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">TRISB0</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make RB0 pin output</font>
 &nbsp;<font color="#000000">TRISB1</font> <font color="#434f54">=</font> <font color="#000000">1</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make RB1 pin Input</font>
 &nbsp;<font color="#000000">LED</font> &nbsp;&nbsp;&nbsp;<font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make RB0 low</font>
 &nbsp;
 &nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><font color="#000000">SW1</font><font color="#434f54">==</font><font color="#000000">0</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">__delay_ms</font><font color="#000000">(</font><font color="#000000">50</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; 50 milli sec delay</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">LED</font> <font color="#434f54">=</font> <font color="#000000">1</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; LED on</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">else</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">__delay_ms</font><font color="#000000">(</font><font color="#000000">50</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; 50 milli sec delay</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">LED</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; LED on &nbsp;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>


# Pull-down mode

![image](https://user-images.githubusercontent.com/109785046/204698741-e90718a5-766d-4d12-9ec0-84dfb349c559.png)

The above figure shows push-button interfacing in Pull-down mode mode. the switch connection in pull-down mode. The pin will be connected to ground by default and it reads a logic zero when not pressed. When the key is pressed the pin reads a logic high.

## Firmware for checking the keypress event in Pull-down mode

<pre>
<font color="#95a5a6">&#47;*</font>
<font color="#95a5a6"> * File &nbsp;: &nbsp;&nbsp;main.c</font>
<font color="#95a5a6"> * Author: &nbsp;&nbsp;Rajeev TR</font>
<font color="#95a5a6"> * Title : &nbsp;&nbsp;SPST Push Button Pull Down</font>
<font color="#95a5a6"> *&#47;</font>

<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">htc</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#434f54">&#47;&#47; Configuration word for PIC16F877A</font>
<font color="#000000">__CONFIG</font><font color="#000000">(</font> <font color="#000000">FOSC_HS</font> <font color="#434f54">&amp;</font> <font color="#000000">WDTE_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">PWRTE_ON</font> <font color="#434f54">&amp;</font> <font color="#000000">CP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">BOREN_ON</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&amp;</font> <font color="#000000">LVP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">CPD_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">WRT_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">DEBUG_OFF</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#5e6d03">#define</font> <font color="#000000">LED</font> &nbsp;<font color="#000000">RB0</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define LED pin as RB0</font>
<font color="#5e6d03">#define</font> <font color="#000000">SW1</font> &nbsp;<font color="#000000">RB1</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define Switch-1 pin as RB1</font>
<font color="#5e6d03">#define</font> <font color="#000000">_XTAL_FREQ</font> &nbsp;&nbsp;<font color="#000000">20000000</font> &nbsp;<font color="#434f54">&#47;&#47; Define CPU Frequency</font>


<font color="#00979c">void</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#00979c">void</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">TRISB0</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make RB0 pin output</font>
 &nbsp;<font color="#000000">TRISB1</font> <font color="#434f54">=</font> <font color="#000000">1</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make RB1 pin Input</font>
 &nbsp;<font color="#000000">LED</font> &nbsp;&nbsp;&nbsp;<font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make RB0 low</font>
 &nbsp;
 &nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><font color="#000000">SW1</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">__delay_ms</font><font color="#000000">(</font><font color="#000000">50</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; 50 milli sec delay</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">LED</font> <font color="#434f54">=</font> <font color="#000000">1</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; LED on</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">else</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">__delay_ms</font><font color="#000000">(</font><font color="#000000">50</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; 50 milli sec delay</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">LED</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; LED on &nbsp;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>
