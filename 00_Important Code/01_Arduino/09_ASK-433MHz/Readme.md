 #     ASK-433Mhz Arduino interface

This module comes in two parts, the first one is transmitter ( Tx ) part and the other is Receiver ( Rx ) part. 
The RF ( radio frequency ) module always works in pair to transmit and receive data. The transmitter module 
transmit the encoded data and the receiver module receives it. So the data can only be sent from one end to other end. 


## ASK433MHz-Transmitter Arduino code

<br>

<pre>
<font color="#434f54">&#47;&#47;TX </font>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">VirtualWire</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">char</font> <font color="#434f54">*</font><font color="#000000">controller</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font><font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_set_ptt_inverted</font></b><font color="#000000">(</font><font color="#00979c">true</font><font color="#000000">)</font><font color="#000000">;</font> 
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_set_tx_pin</font></b><font color="#000000">(</font><font color="#000000">2</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_setup</font></b><font color="#000000">(</font><font color="#000000">4000</font><font color="#000000">)</font><font color="#000000">;</font><font color="#434f54">&#47;&#47; speed of data transfer Kbps</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">controller</font><font color="#434f54">=</font><font color="#005c5f">&#34;A1&#34;</font> &nbsp;<font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_send</font></b><font color="#000000">(</font><font color="#000000">(</font><font color="#00979c">uint8_t</font> <font color="#434f54">*</font><font color="#000000">)</font><font color="#000000">controller</font><font color="#434f54">,</font> <font color="#d35400">strlen</font><font color="#000000">(</font><font color="#000000">controller</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_wait_tx</font></b><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Wait until the whole message is gone</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font><font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font><font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">controller</font><font color="#434f54">=</font><font color="#005c5f">&#34;B1&#34;</font> &nbsp;<font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_send</font></b><font color="#000000">(</font><font color="#000000">(</font><font color="#00979c">uint8_t</font> <font color="#434f54">*</font><font color="#000000">)</font><font color="#000000">controller</font><font color="#434f54">,</font> <font color="#d35400">strlen</font><font color="#000000">(</font><font color="#000000">controller</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_wait_tx</font></b><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> <font color="#434f54">&#47;&#47; Wait until the whole message is gone</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font><font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font><font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#000000">}</font>

</pre>

<br>

## ASK433MHz-Transmitter Arduino circuit

<br>

![image](https://user-images.githubusercontent.com/109785046/187129928-f933d826-b92a-4640-9d9c-839748766261.png)

<br>

## ASK433MHz-Receiver Arduino code

<pre>
<font color="#434f54">&#47;&#47;RX CODE</font>

<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">VirtualWire</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_set_ptt_inverted</font></b><font color="#000000">(</font><font color="#00979c">true</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Required for DR3100</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_set_rx_pin</font></b><font color="#000000">(</font><font color="#000000">2</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_setup</font></b><font color="#000000">(</font><font color="#000000">4000</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Bits per sec</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">vw_rx_start</font></b><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Start the receiver PLL running</font>
<font color="#000000">}</font>
<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">uint8_t</font> <font color="#000000">buf</font><font color="#000000">[</font><font color="#00979c">VW_MAX_MESSAGE_LEN</font><font color="#000000">]</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">uint8_t</font> <font color="#000000">buflen</font> <font color="#434f54">=</font> <font color="#00979c">VW_MAX_MESSAGE_LEN</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><b><font color="#d35400">vw_get_message</font></b><font color="#000000">(</font><font color="#000000">buf</font><font color="#434f54">,</font> <font color="#434f54">&amp;</font><font color="#000000">buflen</font><font color="#000000">)</font><font color="#000000">)</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Non-blocking</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#000000">buf</font><font color="#000000">[</font><font color="#000000">0</font><font color="#000000">]</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#000000">buf</font><font color="#000000">[</font><font color="#000000">1</font><font color="#000000">]</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><font color="#000000">(</font><font color="#000000">buf</font><font color="#000000">[</font><font color="#000000">0</font><font color="#000000">]</font><font color="#434f54">==</font><font color="#00979c">&#39;A&#39;</font><font color="#000000">)</font><font color="#434f54">&amp;&amp;</font><font color="#000000">(</font><font color="#000000">buf</font><font color="#000000">[</font><font color="#000000">1</font><font color="#000000">]</font><font color="#434f54">==</font><font color="#00979c">&#39;1&#39;</font><font color="#000000">)</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font> &nbsp;&nbsp;
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font><font color="#000000">1</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font> &nbsp;
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">else</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">13</font><font color="#434f54">,</font><font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>

<font color="#000000">}</font>

</pre>

<br>

## ASK433MHz-Receiver Arduino circuit
<br>

![image](https://user-images.githubusercontent.com/109785046/187021879-7092271f-2578-4fab-8d98-1eb61de0138e.png)

<br>


