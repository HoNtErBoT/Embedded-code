
# Arduino LDR(Light dependent resistors) interface
Light dependent resistors, LDRs or photoresistors are electronic components 
that are often used in electronic circuit designs where it is necessary to 
detect the presence or the level of light.

LDRs are very different to other forms of resistor like the carbon film resistor,
metal oxide film resistor, metal film resistor and the like that are widely used 
in other electronic designs. They are specifically designed for their light 
sensitivity and the change in resistance this causes.

## Arduino LDR circuit 

<br>

![image](https://user-images.githubusercontent.com/109785046/187017545-0f3e80bc-1fab-4a0d-a9ca-24ecf359594a.png)

<br>

## Arduino LDR code 
<br>
<pre>
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#005c5f">&#34;LDR Inteface&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#00979c">int</font> <font color="#000000">LDR_val</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">LDR_val</font><font color="#434f54">=</font><font color="#d35400">analogRead</font><font color="#000000">(</font><font color="#000000">A0</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;LDR ADC_Val =&gt; &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">LDR_val</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">500</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>


