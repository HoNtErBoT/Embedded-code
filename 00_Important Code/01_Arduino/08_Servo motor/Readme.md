# Servo motor with Arduino


A servo motor (or servo motor) is a rotary actuator or linear actuator that 
allows for precise control of angular or linear position, velocity and acceleration. 
It consists of a suitable motor coupled to a sensor for position feedback.


## Servo motor with Arduino code

<br>

<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">Servo</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<b><font color="#d35400">Servo</font></b> <font color="#000000">myservo</font><font color="#000000">;</font> 


<font color="#00979c">int</font> <font color="#000000">pos</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">myservo</font><font color="#434f54">.</font><font color="#d35400">attach</font><font color="#000000">(</font><font color="#000000">9</font><font color="#000000">)</font><font color="#000000">;</font> 
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">available</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">char</font> <font color="#000000">x</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">read</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><font color="#000000">x</font><font color="#434f54">==</font><font color="#00979c">&#39;a&#39;</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">pos</font> <font color="#434f54">=</font> <b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">parseInt</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">myservo</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">pos</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">pos</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">150</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#000000">}</font>
 &nbsp;
<font color="#000000">}</font>

</pre>

## Servo motor with Arduino circuit

<br>

![image](https://user-images.githubusercontent.com/109785046/187021541-39c4f2fc-0f78-4042-be02-5fbf3e853a2b.png)


<br>

# Servo Tester code

<pre>

<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">Servo</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<b><font color="#d35400">Servo</font></b> <font color="#000000">myservo</font><font color="#000000">;</font> 

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#005c5f">&#34;Servo tester code&#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">myservo</font><font color="#434f54">.</font><font color="#d35400">attach</font><font color="#000000">(</font><font color="#000000">9</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;<font color="#000000">myservo</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font> 
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;<font color="#00979c">char</font> <font color="#000000">x</font><font color="#000000">;</font>
 &nbsp;<font color="#00979c">int</font> <font color="#000000">pos</font><font color="#000000">;</font>
 &nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">available</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">x</font><font color="#434f54">=</font><b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">read</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><font color="#000000">x</font><font color="#434f54">==</font><font color="#00979c">&#39;a&#39;</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">pos</font> <font color="#434f54">=</font> <b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">parseInt</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">print</font><font color="#000000">(</font><font color="#005c5f">&#34;POS =&gt; &#34;</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">println</font><font color="#000000">(</font><font color="#000000">pos</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">myservo</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">pos</font><font color="#000000">)</font><font color="#000000">;</font> 
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">500</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;<font color="#000000">}</font>

<font color="#000000">}</font>

</pre>
