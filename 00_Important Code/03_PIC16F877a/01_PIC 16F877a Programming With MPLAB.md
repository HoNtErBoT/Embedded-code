# PIC 16F877a Programming With MPLAB

![image](https://user-images.githubusercontent.com/109785046/204069872-2eb31f14-fc11-44d2-9127-6b7e2b7368c2.png)
<br>

- PIC16F877a is a 40-pin PIC Microcontroller
- It is designed using RISC architecture
- Manufactured by Microchip and is used in Embedded Projects.
- It has five Ports on it, starting from Port A to Port E.
- It has three Timers in it, two of which are 8-bit Timers while 1 is of 16 Bit.
- It supports many communication protocols like
  - Serial Protocol
  - Parallel Protocol.
  - I2C Protocol.
- It supports both hardware pin interrupts and timer interrupts.
- In order to provide frequency to PIC Microcontroller, we use a crystal oscillator and for PIC16F877a, you can use a crystal oscillator of frequency range from 4MHz to 40MHz.


# PIC16F877a Basic Circuit

![image](https://user-images.githubusercontent.com/109785046/204070256-99fdc2cf-6c43-4fff-b0a2-9e997b2d2cf8.png)

# Introduction of MPLAB
The MPLAB X IDE is the new graphical, integrated debugging tool set for all of Microchip’s more than 800 8-bit, 16-bit and 32-bit MCUs and digital signal controllers, and memory devices.

It includes a feature-rich editor, source-level debugger, project manager, software simulator, and supports Microchip’s popular hardware tools, such as the MPLAB ICD 3 in-circuit debugger, PICkit™ 3, and MPLAB PM3 programmer.
#  Create a Project
- MPLAB is a standard Windows application and started by clicking on the program icon.
  ![image](https://user-images.githubusercontent.com/109785046/204070538-d8a2bb29-eedd-4a9c-8699-fc5fc0078213.png)

- To create a new project, From **"File"** select **"New Project"** 
- Project Wizard opens . This opened a standard Windows dialog that asks you for choose project select **"Standalone Project"** from **"Microchip Embedded"**.

![image](https://user-images.githubusercontent.com/109785046/204070653-80cf0b05-a138-41d7-bb8c-16e01bd046bc.png)

- Select Device -> **PIC16F877a** and select Compiler -> **HI-TECH PICC**

![image](https://user-images.githubusercontent.com/109785046/204071117-ed0d3b18-f057-4398-9a54-d040ed3a3fe0.png)

- Select **Project name** and **Folder**

![image](https://user-images.githubusercontent.com/109785046/204071268-cf5e9046-5878-467b-ac50-6604fd7ab3c4.png)

- Create main file from Source files

![image](https://user-images.githubusercontent.com/109785046/204071343-bb31847b-8527-495c-9b10-18017eef1ec1.png)

- Write your first program
![image](https://user-images.githubusercontent.com/109785046/204071455-40ae7806-96f6-4df1-9458-82b1f260c7e7.png)

#  PORT BLINK CODE

<pre>
<font color="#95a5a6">&#47;*</font>
<font color="#95a5a6"> * File: &nbsp;&nbsp;main.c</font>
<font color="#95a5a6"> * Author: Rajeev TR *</font>
<font color="#95a5a6"> * Title : PORT Blink</font>
<font color="#95a5a6"> * Created on 26 November, 2022, 9:18 AM</font>
<font color="#95a5a6"> *&#47;</font>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">htc</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#434f54">&#47;&#47; Configuration word for PIC16F877A</font>
<font color="#000000">__CONFIG</font><font color="#000000">(</font> <font color="#000000">FOSC_HS</font> <font color="#434f54">&amp;</font> <font color="#000000">WDTE_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">PWRTE_ON</font> <font color="#434f54">&amp;</font> <font color="#000000">CP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">BOREN_ON</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&amp;</font> <font color="#000000">LVP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">CPD_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">WRT_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">DEBUG_OFF</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#5e6d03">#define</font> <font color="#000000">_XTAL_FREQ</font> &nbsp;&nbsp;<font color="#000000">20000000</font> &nbsp;<font color="#434f54">&#47;&#47; Define CPU Frequency</font>


<font color="#00979c">void</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#00979c">void</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">TRISB</font> <font color="#434f54">=</font> <font color="#000000">0x00</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make RB0 pin output</font>
 &nbsp;
 &nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">__delay_ms</font><font color="#000000">(</font><font color="#000000">500</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Half sec delay</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">PORTB</font> <font color="#434f54">=</font> <font color="#000000">0XFF</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; LED off</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">__delay_ms</font><font color="#000000">(</font><font color="#000000">500</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Half sec delay</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">PORTB</font> <font color="#434f54">=</font> <font color="#000000">0X00</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; LED on</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>


# Circuit diagram

![image](https://user-images.githubusercontent.com/109785046/204072067-925bffa6-54ee-4109-8247-17cecfa1205d.png)


