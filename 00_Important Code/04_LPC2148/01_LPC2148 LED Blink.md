# What is LPC2148 and GPIO

LPC2148 is a 32-bit Microcontroller based on the ARM7TDMI-S Family. It is manufactured by NXP Semiconductors (formerly Philips) and is one of the widely used and highly successful ARM7 based Microcontroller.Even though ARM7 family is considered obsolete with the introduction of many advanced processors and controllers, it is one of the best and easiest microcontrollers to work around for beginners in ARM based microcontrollers.

<p align="center" style="margin-bottom: 0px !important;">
  <img src="https://user-images.githubusercontent.com/109785046/213093311-901dbe5e-fae2-4133-b81f-8096ea8073dc.png" alt="Material Bread logo" align="center">
</p>


## key features of the LPC2148 microcontroller.

- LPC2148 is a -bit microcontroller based on ARM7 family (ARM7TDMI-S to be specific) and is available in a 64 pin LQFP Package (Low Profile Quad Flat Package).
- It has an on-chip static RAM of 32kB and an on-chip flash memory of 512kB.
- LPC2148 has an on-chip boot loader software that can be used to program the microcontroller using the feature of In-System Programming.
- It also has the feature of in-Application Programming using which the user can program the microcontroller without using the boot loader software.
- It has an embedded in-circuit emulator that helps in real time debugging.
- LPC2148 has two 10-bit ADCs (ADC0 and ADC1) of Successive Approximation type.
- It also has a 10-bit DAC of Resistor String type.

## General Purpose Input Output (GPIO)
**General Purpose Input Output (GPIO)** pins of a microcontroller are the first thing we need to learn before starting its embedded programming as input/output pins are the only way to interface with the microcontroller. GPIO pins can be used for driving loads, reading digital and analog signal, controlling external components, generating triggers for external devices etc.LPC2148 has two IO ports namely PORT0 (P0) and PORT1 (P1). These two IO ports are of 32-bit wide and are provided by the 64 pins of the microcontroller.
- **PORT0** is a 32-bit wide input/output port with dedicated direction control bits for each physical pin. Out of the 32 pins, 28 pins can be used as general purpose bidirectional I/O pins. **Pin P0.31 is an output only pin. Pins P0.24, P0.26 and P0.27 of PORT0 are not available**.
- **PORT1** is also a 32-bit wide input/output port. In PORT1, **pins P1.0 to P1.15 are not available** and pins P1.16 to P1.31 are the available general purpose input/output pins.

The naming convention of the I/O pins on the LPC2148 Microcontroller is Pa.bc where ‘a’ is the number of the port i.e. 0 or 1 (as LPC2148 has only two ports) and ‘bc’ is the number of the pin in the port a. For example, P0.1 indicates pin number 1 of PORT0 and P1.10 indicates pin number 10 of PORT1. Most of the pins in both the I/O ports of the LPC2148 have more than one function i.e. they are multiplexed with different functions. For example, Pin 19 of the LPC2148 has three functions namely P0.0, a general purpose I/O pin, TXD0, the transmitter O/P for UART0 and PWM1, the pulse width modulator O/P.
At any point of operation, each pin can have a single function and the function can be selected with the help of three Configuration Registers which control the multiplexers to allow connection between the external pin and the on-chip peripheral.

The configuration register is called PINSEL and is classified in to three registers: PINSEL0, PINSEL1 and PINSEL2. These configuration registers are of 32-bit wide. Any pin on the LPC2148 can have a maximum of 4 functions. Hence in order to select one of the four functions, two corresponding bits of the PINSEL register are needed. So, a 32-bit PINSEL register can control 16 pins with 2-bits to control each pin.

PINSEL0 controls PORT0 pins P0.0 to P0.15, PINSEL1 controls PORT0 pins P0.16 to P0.31 and PINSEL2 controls PORT1 pins P1.16 to P1.31.The following table shows the PINSEL0 and corresponding functions on the PORT0.

<p align="center" style="margin-bottom: 0px !important;">
  <img src="https://user-images.githubusercontent.com/109785046/213102094-259b781d-3705-4cc6-a6b0-b91e1b637fe0.png" alt="Material Bread logo" align="center">
</p>

The default function of all the Pins is GPIO. But it is a good programming practice to mention “PINSEL0=0” in order to select the GPIO function of the Pins.GPIO function is the most frequently used functionality of the microcontroller. The GPIO function in both the Ports are controlled by a set of 4 registers: IOPIN, IODIR, IOSET and IOCLR.
- **IOPIN**: It is a GPIO Port Pin Value register and can be used to read or write values directly to the pin. The status of the Pins that are configured as GPIO can always be read from this register irrespective of the direction set on the pin (Input or Output).

The syntax for this register is IOxPIN, where ‘x’ is the port number i.e. IO0PIN for PORT0 and IO1PIN for PORT1.

- **IODIR**: It is a GPIO Port Direction Control register and is used to set the direction i.e. either input or output of individual pins. When a bit in this register is set to ‘0’, the corresponding pin in the microcontroller is configured as Input. Similarly, when a bit is set as ‘1’, the corresponding pin is configured as Output.

The syntax for this register is IOxDIR, where ‘x’ is the port number i.e. IO0DIR for PORT0 and IO1DIR for PORT1.

- **IOSET**: It is a GPIO Port Output Set Register and can be used to set the value of a GPIO pin that is configured as output to High (Logic 1). When a bit in the IOSET register is set to ‘1’, the corresponding pin is set to Logic 1. Setting a bit ‘0’ in this register has no effect on the pin.

The syntax for this register is IOxSET, where ‘x’ is the port number i.e. IO0SET for PORT0 and IO1SET for PORT1.

- **IOCLR**: It is a GPIO Port Output Clear Register and can be used to set the value of a GPIO pin that is configured as output to Low (Logic 0). When a bit in the IOCLR register is set to ‘1’, the corresponding pin in the respective Port is set to Logic 0 and at the same time clears the corresponding bit in the IOSET register. Setting ‘0’ in the IOCLR has no effect on the pin.

The syntax for this register is IOxCLR, where ‘x’ is the port number i.e. IO0CLR for PORT0 and IO1CLR for PORT1.

# LED Interfacing(PORT BLINK) – LPC2148 GPIO Code

<pre>
<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">lpc214x</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>
<font color="#00979c">void</font> <font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#00979c">void</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">IO0DIR</font> <font color="#434f54">|=</font><font color="#000000">0XfffffFFF</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;Port 0 is now acting as a output pin</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font> <font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">IOSET0</font> <font color="#434f54">|=</font><font color="#000000">0XfffffFFF</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;Port 0&#39;s all pins are high now (LED is glowing)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">IOCLR0</font> <font color="#434f54">|=</font><font color="#000000">0XFFFfffff</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47;Port 0&#39;s all pins are low now (LED is OFF)</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font> &nbsp;&nbsp;
<font color="#000000">}</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<font color="#00979c">void</font> <font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#00979c">unsigned</font> <font color="#00979c">int</font> <font color="#000000">i</font><font color="#000000">;</font>
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">for</font><font color="#000000">(</font><font color="#000000">i</font><font color="#434f54">=</font><font color="#000000">0</font><font color="#000000">;</font><font color="#000000">i</font><font color="#434f54">&lt;</font><font color="#000000">30000</font><font color="#000000">;</font><font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font><font color="#000000">;</font>
<font color="#000000">}</font>

</pre>


# LED Interface

To interface an LED with the LPC2148, you need to use one of the microcontroller's General Purpose Input/Output (GPIO) pins. The LPC2148 has a total of 32 GPIO pins that can be configured as input or output.

Here's a step-by-step guide to connecting an LED to an LPC2148:

- Connect the anode (positive) of the LED to one of the LPC2148's GPIO pins.
- Connect the cathode (negative) of the LED to the ground.
- In your software, configure the selected GPIO pin as an output pin.
- To turn on the LED, set the output of the GPIO pin to a high level (3.3V).
- To turn off the LED, set the output of the GPIO pin to a low level (0V).

If you want to blink the LED, you can use the LPC2148's built-in timer peripheral and configure it to generate an interrupt at a specific interval. In the interrupt service routine, you can toggle the output of the GPIO pin to blink the LED.

It's important to note that the LPC2148 also has built-in peripheral features like PWM(Pulse Width Modulation) that can be used to control the brightness of the LED. It is also important to keep in mind the current consumption and power dissipation while working with LEDs.

<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><font color="#000000">lpc214x</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font> &nbsp;&nbsp;<font color="#434f54">&#47;&#47; Header file for LPC2148</font>
<font color="#5e6d03">#define</font> <font color="#000000">LED</font> <font color="#000000">(</font><font color="#000000">1</font><font color="#434f54">&lt;&lt;</font><font color="#000000">1</font><font color="#000000">)</font> &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; GPIO pin connected to the LED</font>
<font color="#00979c">int</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#00979c">void</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#00979c">int</font> <font color="#000000">i</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Configure the LED pin as output &nbsp;&nbsp;&nbsp;</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">IODIR0</font> <font color="#434f54">|=</font> <font color="#000000">LED</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; P0.1 as output</font>

 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">IOSET0</font> <font color="#434f54">|=</font> <font color="#000000">LED</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Turn on the LED Set P0.1 high &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">for</font><font color="#000000">(</font><font color="#000000">i</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">i</font> <font color="#434f54">&lt;</font> <font color="#000000">100000</font><font color="#000000">;</font> <font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; Wait for a while</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">IOCLR0</font> <font color="#434f54">|=</font> <font color="#000000">LED</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Turn off the LED Clear P0.1 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#5e6d03">for</font><font color="#000000">(</font><font color="#000000">i</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> <font color="#000000">i</font> <font color="#434f54">&lt;</font> <font color="#000000">100000</font><font color="#000000">;</font> <font color="#000000">i</font><font color="#434f54">++</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;<font color="#434f54">&#47;&#47; Wait for a while</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>


</pre>




