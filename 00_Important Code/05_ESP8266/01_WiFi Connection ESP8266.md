# ESP8266 WiFi Connection 

## Simple Code to connect WiFi

<pre>
<font color="#95a5a6">&#47;*************************************************************&#47;</font>
 &nbsp;<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#d35400">ESP8266WiFi</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#95a5a6">&#47;*************************************************************&#47;</font>
 &nbsp;<font color="#5e6d03">#define</font> <font color="#000000">WIFI_SSID</font> <font color="#005c5f">&#34;xxxxx&#34;</font>
 &nbsp;<font color="#5e6d03">#define</font> <font color="#000000">WIFI_PASS</font> <font color="#005c5f">&#34;xxxxx&#34;</font>
<font color="#95a5a6">&#47;*************************************************************&#47;</font>
 &nbsp;<font color="#00979c">void</font> <font color="#000000">Connecting_WiFi</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#95a5a6">&#47;*************************************************************&#47;</font>
 &nbsp;<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">Connecting_WiFi</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#95a5a6">&#47;*************************************************************&#47;</font>
 &nbsp;<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;
 &nbsp;
 &nbsp;<font color="#000000">}</font>
<font color="#95a5a6">&#47;*************************************************************&#47;</font>
 &nbsp;<font color="#00979c">void</font> <font color="#000000">Connecting_WiFi</font><font color="#000000">(</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">disconnect</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#005c5f">&#34;Connecting&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">WIFI_SSID</font><font color="#434f54">,</font><font color="#000000">WIFI_PASS</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font> <font color="#000000">(</font><font color="#000000">(</font><font color="#434f54">!</font><font color="#000000">(</font><b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">status</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#434f54">==</font> <font color="#000000">WL_CONNECTED</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">300</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;*&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#005c5f">&#34;&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#005c5f">&#34; &nbsp;Connected&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#005c5f">&#34; &nbsp;---------&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;IP address: &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">localIP</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
<font color="#95a5a6">&#47;*************************************************************&#47;</font>

</pre>
