# UDP TX RX Code

<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#d35400">ESP8266WiFi</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">WiFiUdp</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
 
<font color="#434f54">&#47;&#47; Set WiFi credentials</font>
<font color="#5e6d03">#define</font> <font color="#000000">WIFI_SSID</font> <font color="#005c5f">&#34;soften2&#34;</font>
<font color="#5e6d03">#define</font> <font color="#000000">WIFI_PASS</font> <font color="#005c5f">&#34;Soften2@123&#34;</font>
<font color="#5e6d03">#define</font> <font color="#000000">UDP_PORT</font> <font color="#000000">4210</font>

<font color="#434f54">&#47;&#47; UDP</font>
<font color="#d35400">WiFiUDP</font> <font color="#000000">UDP</font><font color="#000000">;</font>
<font color="#00979c">char</font> <font color="#000000">packet</font><font color="#000000">[</font><font color="#000000">255</font><font color="#000000">]</font><font color="#000000">;</font>
<font color="#00979c">char</font> <font color="#000000">reply</font><font color="#000000">[</font><font color="#000000">]</font> <font color="#434f54">=</font> <font color="#005c5f">&#34;Packet received!&#34;</font><font color="#000000">;</font>
 
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;<font color="#434f54">&#47;&#47; Setup serial port</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">115200</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">2</font><font color="#434f54">,</font> <font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 
 &nbsp;<font color="#434f54">&#47;&#47; Begin WiFi</font>
 &nbsp;<b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">WIFI_SSID</font><font color="#434f54">,</font> <font color="#000000">WIFI_PASS</font><font color="#000000">)</font><font color="#000000">;</font>
 
 &nbsp;<font color="#434f54">&#47;&#47; Connecting to WiFi...</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;Connecting to &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#000000">WIFI_SSID</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#434f54">&#47;&#47; Loop continuously while WiFi is not connected</font>
 &nbsp;<font color="#5e6d03">while</font> <font color="#000000">(</font><b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">status</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#434f54">!=</font> <font color="#000000">WL_CONNECTED</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">100</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;.&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">hostname</font><font color="#000000">(</font><font color="#005c5f">&#34;emb1.local&#34;</font><font color="#000000">)</font> <font color="#000000">;</font>
 &nbsp;<font color="#434f54">&#47;&#47; Connected to WiFi</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;Connected! IP address: &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">localIP</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>

 &nbsp;<font color="#434f54">&#47;&#47; Begin listening to UDP port</font>
 &nbsp;<font color="#000000">UDP</font><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">UDP_PORT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;Listening on UDP port &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">UDP_PORT</font><font color="#000000">)</font><font color="#000000">;</font>
 
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#000000">{</font>

 &nbsp;<font color="#434f54">&#47;&#47; If packet received...</font>
 &nbsp;<font color="#00979c">int</font> <font color="#000000">packetSize</font> <font color="#434f54">=</font> <font color="#000000">UDP</font><font color="#434f54">.</font><font color="#d35400">parsePacket</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">packetSize</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;Received packet! Size: &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">packetSize</font><font color="#000000">)</font><font color="#000000">;</font> 
 &nbsp;&nbsp;&nbsp;<font color="#00979c">int</font> <font color="#000000">len</font> <font color="#434f54">=</font> <font color="#000000">UDP</font><font color="#434f54">.</font><font color="#d35400">read</font><font color="#000000">(</font><font color="#000000">packet</font><font color="#434f54">,</font> <font color="#000000">255</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">len</font> <font color="#434f54">&gt;</font> <font color="#000000">0</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">packet</font><font color="#000000">[</font><font color="#000000">len</font><font color="#000000">]</font> <font color="#434f54">=</font> <font color="#00979c">&#39;\0&#39;</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;Packet received: &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">packet</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Send return packet</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">UDP</font><font color="#434f54">.</font><font color="#d35400">beginPacket</font><font color="#000000">(</font><font color="#000000">UDP</font><font color="#434f54">.</font><font color="#d35400">remoteIP</font><font color="#000000">(</font><font color="#000000">)</font><font color="#434f54">,</font> <font color="#000000">UDP</font><font color="#434f54">.</font><font color="#d35400">remotePort</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">UDP</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">reply</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">UDP</font><font color="#434f54">.</font><font color="#d35400">endPacket</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">2</font><font color="#434f54">,</font><font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">100</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">2</font><font color="#434f54">,</font><font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">100</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>
