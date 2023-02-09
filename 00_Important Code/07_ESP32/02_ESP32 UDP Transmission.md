# ESP32 UDP Transmission


### ESP32 Code

<pre>

<font color="#5e6d03"># include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#5e6d03"># include</font> <font color="#434f54">&lt;</font><font color="#000000">WiFiUdp</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#5e6d03"># include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">WebServer</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#5e6d03"># define</font> <font color="#d35400">SSID</font> <font color="#005c5f">&#34;Embedded&#34;</font>
<font color="#5e6d03"># define</font> <font color="#000000">PSWD</font> <font color="#005c5f">&#34;Embedded54321&#34;</font>

<b><font color="#d35400">WiFiUDP</font></b> <font color="#000000">udp</font><font color="#000000">;</font>
<font color="#95a5a6">&#47;**********************************************************&#47;</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">unsigned</font> <font color="#00979c">int</font> <font color="#000000">localUdpPort</font> <font color="#434f54">=</font> <font color="#000000">4210</font><font color="#000000">;</font> &nbsp;&nbsp;<font color="#434f54">&#47;&#47; &nbsp;port to listen on</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">char</font> <font color="#000000">incomingPacket</font><font color="#000000">[</font><font color="#000000">255</font><font color="#000000">]</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; buffer for incoming packets &nbsp;&nbsp;</font>

 &nbsp;&nbsp;&nbsp;<font color="#00979c">const</font> <font color="#00979c">char</font> <font color="#434f54">*</font> <font color="#000000">udpAddress</font> <font color="#434f54">=</font> <font color="#005c5f">&#34;192.168.2.174&#34;</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">const</font> <font color="#00979c">int</font> <font color="#000000">udpPort</font> <font color="#434f54">=</font> <font color="#000000">2020</font><font color="#000000">;</font> &nbsp;
<font color="#95a5a6">&#47;**********************************************************&#47;</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">void</font> <font color="#000000">Connect_WiFi</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">void</font> <font color="#000000">UDP_Transmit</font><font color="#000000">(</font><font color="#00979c">char</font> <font color="#434f54">*</font><font color="#000000">s</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#95a5a6">&#47;**********************************************************&#47;</font>
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">Connect_WiFi</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#000000">}</font>
<font color="#95a5a6">&#47;**********************************************************&#47;</font>
<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">String</font> <font color="#000000">x</font><font color="#434f54">=</font><font color="#005c5f">&#34;hai class&#34;</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">UDP_Transmit</font><font color="#000000">(</font><font color="#434f54">&amp;</font><font color="#000000">x</font><font color="#000000">[</font><font color="#000000">0</font><font color="#000000">]</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>
<font color="#95a5a6">&#47;**********************************************************&#47;</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">void</font> <font color="#000000">Connect_WiFi</font><font color="#000000">(</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">disconnect</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">pinMode</font><font color="#000000">(</font><font color="#000000">2</font><font color="#434f54">,</font><font color="#00979c">OUTPUT</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#005c5f">&#34;Connecting to WiFi&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#d35400">SSID</font><font color="#434f54">,</font> <font color="#000000">PSWD</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">100</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#005c5f">&#34;&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font> <font color="#000000">(</font><font color="#000000">(</font><font color="#434f54">!</font><font color="#000000">(</font><b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">status</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#434f54">==</font> <font color="#000000">WL_CONNECTED</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">2</font><font color="#434f54">,</font><font color="#00979c">LOW</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">250</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">digitalWrite</font><font color="#000000">(</font><font color="#000000">2</font><font color="#434f54">,</font><font color="#00979c">HIGH</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">250</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;*&#34;</font><font color="#000000">)</font><font color="#000000">;</font>

 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#005c5f">&#34;Connected to Wi-Fi&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">udp</font><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">localUdpPort</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;IP Adress : &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">(</font><b><font color="#d35400">WiFi</font></b><font color="#434f54">.</font><font color="#d35400">localIP</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;PORT &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">localUdpPort</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">1000</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
<font color="#95a5a6">&#47;**********************************************************&#47;</font>
 &nbsp;&nbsp;<font color="#00979c">void</font> <font color="#000000">UDP_Transmit</font><font color="#000000">(</font><font color="#00979c">char</font> <font color="#434f54">*</font><font color="#000000">s</font><font color="#000000">)</font>
 &nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">int</font> <font color="#000000">i</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#00979c">uint8_t</font> <font color="#d35400">buffer</font><font color="#000000">[</font><font color="#000000">50</font><font color="#000000">]</font> <font color="#434f54">=</font> <font color="#005c5f">&#34;&#34;</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">for</font><font color="#000000">(</font><font color="#000000">i</font><font color="#434f54">=</font><font color="#000000">0</font><font color="#000000">;</font><font color="#434f54">*</font><font color="#000000">s</font><font color="#434f54">!=</font><font color="#00979c">&#39;\0&#39;</font><font color="#000000">;</font><font color="#000000">i</font><font color="#434f54">++</font><font color="#434f54">,</font><font color="#000000">s</font><font color="#434f54">++</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">buffer</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">=</font><font color="#434f54">*</font><font color="#000000">s</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">buffer</font><font color="#000000">[</font><font color="#000000">i</font><font color="#000000">]</font><font color="#434f54">=</font><font color="#00979c">&#39;\0&#39;</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">udp</font><font color="#434f54">.</font><font color="#d35400">beginPacket</font><font color="#000000">(</font><font color="#000000">udpAddress</font><font color="#434f54">,</font> <font color="#000000">udpPort</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">udp</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#d35400">buffer</font><font color="#434f54">,</font> <font color="#000000">11</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">udp</font><font color="#434f54">.</font><font color="#d35400">endPacket</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;<font color="#000000">}</font>
<font color="#95a5a6">&#47;**********************************************************&#47;</font>

</pre>


### Python Code

<pre>

<font color="#000000">#</font> <font color="#000000">https</font><font color="#434f54">:</font><font color="#434f54">&#47;&#47;github.com&#47;HoNtErBoT&#47;01_python</font>
<font color="#000000">#</font> &nbsp;<font color="#000000">Simple</font> <font color="#000000">UDP</font> <font color="#000000">receiver</font> <font color="#000000">code</font>
<font color="#000000">#</font> &nbsp;<font color="#000000">Rajeev</font> <font color="#000000">TR</font>

<font color="#000000">import</font> <font color="#000000">socket</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">import</font> <font color="#000000">socket</font>

<font color="#000000">UDP_IP</font> <font color="#434f54">=</font> <font color="#005c5f">&#34;192.168.2.174&#34;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">Set</font> <font color="#000000">our</font> <font color="#000000">IP</font> <font color="#000000">address</font>
<font color="#000000">UDP_PORT</font> <font color="#434f54">=</font> <font color="#000000">2020</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">Set</font> <font color="#000000">PORT</font> <font color="#000000">number</font>
<font color="#000000">sock</font> <font color="#434f54">=</font> <font color="#000000">socket</font><font color="#434f54">.</font><font color="#000000">socket</font><font color="#000000">(</font><font color="#000000">socket</font><font color="#434f54">.</font><font color="#000000">AF_INET</font><font color="#434f54">,</font> <font color="#000000">socket</font><font color="#434f54">.</font><font color="#000000">SOCK_DGRAM</font><font color="#000000">)</font> &nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">UDP</font>
<font color="#000000">sock</font><font color="#434f54">.</font><font color="#000000">bind</font><font color="#000000">(</font><font color="#000000">(</font><font color="#000000">UDP_IP</font><font color="#434f54">,</font> <font color="#000000">UDP_PORT</font><font color="#000000">)</font><font color="#000000">)</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">Initialize</font> <font color="#000000">UDP</font> <font color="#000000">socket</font>
<font color="#5e6d03">while</font> <font color="#000000">True</font><font color="#434f54">:</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">Start</font> <font color="#000000">infinite</font> <font color="#5e6d03">loop</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">data</font><font color="#434f54">,</font> <font color="#000000">addr</font> <font color="#434f54">=</font> <font color="#000000">sock</font><font color="#434f54">.</font><font color="#000000">recvfrom</font><font color="#000000">(</font><font color="#000000">1024</font><font color="#000000">)</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#d35400">buffer</font> <font color="#d35400">size</font> <font color="#000000">is</font> <font color="#000000">1024</font> <font color="#000000">bytes</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">data</font> <font color="#434f54">=</font> <font color="#d35400">data</font><font color="#434f54">.</font><font color="#d35400">decode</font><font color="#000000">(</font><font color="#005c5f">&#34;utf-8&#34;</font><font color="#000000">)</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">Decode</font> <font color="#000000">received</font> <font color="#d35400">data</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;received message: %s&#34;</font> <font color="#434f54">%</font> <font color="#d35400">data</font><font color="#000000">)</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">Print</font> <font color="#000000">Message</font>
 &nbsp;&nbsp;&nbsp;<font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;Addr &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: &#34;</font> <font color="#434f54">+</font> <font color="#000000">str</font><font color="#000000">(</font><font color="#000000">addr</font><font color="#000000">)</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#d35400">data</font> <font color="#434f54">==</font> <font color="#005c5f">&#34;stop&#34;</font><font color="#434f54">:</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">Check</font> <font color="#5e6d03">if</font> <font color="#d35400">stop</font> <font color="#000000">command</font> <font color="#000000">received</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34; Communication terminated&#34;</font><font color="#000000">)</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">Print</font> <font color="#000000">session</font> <font color="#000000">termination</font> <font color="#000000">message</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">sock</font><font color="#434f54">.</font><font color="#d35400">close</font><font color="#000000">(</font><font color="#000000">)</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">#</font> <font color="#000000">kill</font> <font color="#000000">UDP</font> <font color="#000000">communication</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">break</font>

</pre>
