# PIC16F877A timer
The Timer is used to measure the time or generate an accurate time delay. The microcontroller can also generate/measure the required time delays by running loops, but the timer/counter relieves the CPU from that redundant and repetitive task, allowing it to allocate maximum processing time for other tasks. It is an important application in an embedded system. It maintains the timing of operation in sync with a system clock or an external clock. The timer is used to count cycles and perform a particular action at a specified moment or optionally start an interrupt cycle. The digital cycles counted by the timer can be supplied internally through the peripheral clock or externally through a crystal
Timer is nothing but a simple binary counter that can be configured to count clock pulses (Internal/External). Once it reaches the Max value, it will roll back to zero setting up an Overflow flag and generates the interrupt if enabled.
![image](https://user-images.githubusercontent.com/109785046/206388719-be1610fc-d678-4af4-9446-0c64d7b02a94.png)

## PIC Timer Module
The PIC16F877A basically has three timer modules. These timer module terminals are also multiplexed with other functions for handling alternate functions. These three-timer modules as named as TIMER 0, TIMER 1 and TIMER 2. 
Below table provides the details of the three Timers.

![image](https://user-images.githubusercontent.com/109785046/206389294-528f40da-68cb-4023-a530-0305969eb4de.png)

## TIMER 0
The main features of Timer 0 are given below:
- 8-bit timer/counter with prescaler
- Readable and Writable
- Internal or external Clock set
- Build 8-bit software programmable prescaler
- Edge select for external clock
- Interrupt on overflow from 0XFF to 0X00

## Timer-0 Registers
Timer 0 has a register called TMR0 Register, which is 8 bits of size. The below table shows the registers associated with PIC16f877A Timer 0 module.

![image](https://user-images.githubusercontent.com/109785046/206390537-79ba1b0e-11e9-4341-bcbc-46a9960a2f87.png)

![image](https://user-images.githubusercontent.com/109785046/206391193-0644a2a0-a9a4-44ee-be2f-738ba0fd09ca.png)

![image](https://user-images.githubusercontent.com/109785046/206391489-773ab2e6-ea47-48d9-b0b2-ecff9d0cc109.png)

![image](https://user-images.githubusercontent.com/109785046/206391640-6c21220d-bf58-4351-860f-7bd752335e4f.png)

![image](https://user-images.githubusercontent.com/109785046/206391907-40440bdc-d5d9-4d26-b957-ced490da28d7.png)


# Firmware for 1ms delay in 16f877a using Timer-0

<pre>
<font color="#95a5a6">&#47;*</font>
<font color="#95a5a6"> * File &nbsp;: main.c</font>
<font color="#95a5a6"> * Author: Rajeev TR</font>
<font color="#95a5a6"> *</font>
<font color="#95a5a6"> *&#47;</font>


<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">htc</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#434f54">&#47;&#47; Configuration word for PIC16F877A</font>
<font color="#000000">__CONFIG</font><font color="#000000">(</font> <font color="#000000">FOSC_HS</font> <font color="#434f54">&amp;</font> <font color="#000000">WDTE_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">PWRTE_ON</font> <font color="#434f54">&amp;</font> <font color="#000000">CP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">BOREN_ON</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&amp;</font> <font color="#000000">LVP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">CPD_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">WRT_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">DEBUG_OFF</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#5e6d03">#define</font> <font color="#000000">LED</font> &nbsp;<font color="#000000">RB0</font> &nbsp;<font color="#434f54">&#47;&#47; Define LED pin as RB0</font>
<font color="#5e6d03">#define</font> <font color="#000000">_XTAL_FREQ</font> &nbsp;&nbsp;<font color="#000000">20000000</font> &nbsp;<font color="#434f54">&#47;&#47; Define CPU Frequency</font>
<font color="#5e6d03">#define</font> <font color="#000000">SBIT_PS2</font> &nbsp;<font color="#000000">2</font>
<font color="#00979c">char</font> <font color="#d35400">value</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font>

<font color="#00979c">void</font> <font color="#000000">interrupt</font> <font color="#000000">timer_isr</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font> &nbsp;
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font><font color="#000000">(</font><font color="#000000">TMR0IF</font><font color="#434f54">==</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">value</font><font color="#434f54">=</font><font color="#434f54">~</font><font color="#d35400">value</font><font color="#000000">;</font> &nbsp;&nbsp;<font color="#434f54">&#47;&#47; complement the value for blinking the LEDs</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">TMR0</font> <font color="#434f54">=</font> <font color="#000000">101</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;<font color="#95a5a6">&#47;*Load the timer Value, (Note: Timervalue is 101 instaed of 100 as the</font>
<font color="#95a5a6"> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;TImer0 needs two instruction Cycles to start incrementing TMR0 *&#47;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">TMR0IF</font><font color="#434f54">=</font><font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Clear timer interrupt flag</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font> 
<font color="#000000">}</font>

<font color="#00979c">void</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#00979c">void</font><font color="#000000">)</font> 
<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">TRISD</font><font color="#434f54">=</font><font color="#000000">0x00</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;COnfigure PORTD as output to blink the LEDs</font>

 &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;OPTION_REG = (1&lt;&lt;SBIT_PS2); &nbsp;&#47;&#47; Timer0 with external freq and 32 as prescalar</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">OPTION_REG</font> <font color="#434f54">=</font> <font color="#000000">0x04</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">TMR0</font><font color="#434f54">=</font><font color="#000000">100</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Load the time value for 1ms delay</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">TMR0IE</font><font color="#434f54">=</font><font color="#000000">1</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;Enable timer interrupt bit in PIE1 register</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">GIE</font><font color="#434f54">=</font><font color="#000000">1</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;Enable Global Interrupt</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">PEIE</font><font color="#434f54">=</font><font color="#000000">1</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;Enable the Peripheral Interrupt</font>

 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">PORTD</font> <font color="#434f54">=</font> <font color="#d35400">value</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">return</font><font color="#000000">;</font>
<font color="#000000">}</font>


</pre>

# Circuit Diagram

![image](https://user-images.githubusercontent.com/109785046/206392923-5fb4d773-36e9-421c-9595-8a3b7efb8652.png)







