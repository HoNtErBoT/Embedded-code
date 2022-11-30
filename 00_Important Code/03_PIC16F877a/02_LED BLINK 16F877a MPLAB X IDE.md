# PIC 16F877a PORT's

![image](https://user-images.githubusercontent.com/109785046/204212425-12f5682d-9019-41af-a36c-dc1da94d7377.png)

PIC 16F877a has normally five input/output ports. They are used for the input/output interfacing with other devices/circuits. Most of these port pins are multiplexed for handling alternate function for peripheral features on the devices. All ports in a PIC chip are bi-directional.

## PORT A and the TRIS A Registers
![image](https://user-images.githubusercontent.com/109785046/204199630-ccb49220-9150-45ff-a48f-bb0d7c35689b.png)

PORT A is a 6-bit wide bi-directional port, the direction of this port is controlled by TRIS  A data direction register. Setting a TRIS A (=1) makes corresponding PORT A pin as an input, clearing the TRIS A (=0) making the corresponding PORT A pin as an output
Pin RA4 is multiplexed with the “Timer0” module clock input to become the RA4/T0CKI pin and functioning either input/output operation or Timer 0 clock functioning module. The RA4/T0CKI pin is a Schmitt Trigger input and an open-drain output. All other PORT A pins have TTL input levels and full CMOS output drivers.
Other PORT A pins in this microcontroller multiplexed with analog inputs and the analog VREF input for both the A/D converters and the comparators. The operation of each pin is selected by clearing/setting the appropriate control bits in the ADCON1 and/or CMCON registers. The TRIS A register controls the direction of the PORT pins even when they are being used as analog inputs. The user must ensure the bits in the TRISA register are maintained set when using them as analog inputs.
![image](https://user-images.githubusercontent.com/109785046/204199383-4234edfc-bf6c-4769-9b45-c8a684d5e2cb.png)

## PORT B and the TRIS B Registers
![image](https://user-images.githubusercontent.com/109785046/204200002-23f8448f-9d1e-47d3-8d5b-5ed4083e6b57.png)

PORT B is also an 8 bit bi-directional PORT. Its direction controlled and maintained by TRIS B data direction register. Setting the TRIS B into logic ‘1’ makes the corresponding   “PORT B” pin as an input. Clearing the TRIS B bit make PORT B as an output. Three pins of PORT B are multiplexed with the In-Circuit Debugger and Low-Voltage Programming function: RB3/PGM, RB6/PGC and RB7/PGD for performing its alternate functions.

![image](https://user-images.githubusercontent.com/109785046/204201427-dd473ef2-c7b2-4454-ab7a-af2b4aa5a082.png)
![image](https://user-images.githubusercontent.com/109785046/204204616-2f8787c8-bd22-4c20-9339-0fdd04ec0a2b.png)


## PORT C and the TRIS C Registers
![image](https://user-images.githubusercontent.com/109785046/204200342-124deb24-d802-4cb4-b0d7-00bc55420cd8.png)

PORT C is an 8-bit wide, bidirectional PORT which controlled and maintained by TRIS C data direction register. Setting a TRIS C bit (= 1) will make the corresponding PORT C pin an input (i.e., put the corresponding output driver in a High-Impedance mode). Clearing a TRIS C bit (= 0) will make the corresponding PORT C pin an output PORT C is also multiplexed with several peripheral functions. PORT C pins have Schmitt Trigger input buffers.
When enabling peripheral functions, more care should be taken in defining TRIS bits for each PORT C pin as compared to other. Some peripherals override the TRIS bit to make a pin an output, while other peripherals override the TRIS bit to make a pin an input. Since the TRIS bit override is in effect while the peripheral is enabled, read-modify write instructions (BSF, BCF, and XORWF) with TRISC as the destination, should be avoided. The user should refer to the corresponding peripheral section for the correct TRIS bit settings.

![image](https://user-images.githubusercontent.com/109785046/204205068-68b29be7-b74c-4906-bbfc-9d05d1cf3dab.png)


## PORT D and TRIS D Registers
![image](https://user-images.githubusercontent.com/109785046/204200550-2e191569-e549-4b80-be6e-54edac8e739a.png)

PORT D is an 8-bit PORT with bi-directional nature. This port also with Schmitt Trigger input buffers, each pin in this PORT D individually configurable as either input or output. PORT D can be configured as an 8-bit wide microprocessor PORT (functioning as Parallel Slave PORT) by setting control bit, PSPMODE ((TRISE<4>). In this mode, the input buffers are TTL.

![image](https://user-images.githubusercontent.com/109785046/204205174-5a2a821d-3f32-42ea-908a-adef69832049.png)


## PORT E and TRIS E Registers
![image](https://user-images.githubusercontent.com/109785046/204200852-ee60e994-1e46-496a-ac21-11cf876d6c53.png)

PORT E has only three pins (RE0/RD/AN5, RE1/WR/AN6 and RE2/CS/AN7) which are individually configurable as inputs or outputs. These pins controllable by using its corresponding data direction register “TRIS E”. These pins also have Schmitt Trigger input buffers. The PORT E pins become the I/O control inputs for the microprocessor PORT when bit PSPMODE is set. In this mode, the user must make certain that the TRIS E bits are set and that the pins are configured as digital inputs. Also, ensure that ADCON1 is configured for digital I/O. In this mode, the input buffers are TTL.
TRISE register which also controls the Parallel Slave PORT operation. PORT E pins are multiplexed with analog inputs. When selected for analog input, these pins will read as ‘0’s. TRIS E controls the direction of the RE pins, even when they are being used as analog inputs. The user must make sure to keep the pins configured as inputs when using them as analog inputs.

![image](https://user-images.githubusercontent.com/109785046/204205264-40e93fa9-10c0-4b9e-b836-40f07f87bfde.png)

## LED Blink Code

<pre>
<font color="#95a5a6">&#47;*</font>
<font color="#95a5a6"> * File &nbsp;: &nbsp;&nbsp;main.c</font>
<font color="#95a5a6"> * Author: &nbsp;&nbsp;Rajeev TR</font>
<font color="#95a5a6"> * Title : &nbsp;&nbsp;LED Blink</font>
<font color="#95a5a6"> *&#47;</font>

<font color="#5e6d03">#include</font><font color="#434f54">&lt;</font><font color="#000000">htc</font><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font>

<font color="#434f54">&#47;&#47; Configuration word for PIC16F877A</font>
<font color="#000000">__CONFIG</font><font color="#000000">(</font> <font color="#000000">FOSC_HS</font> <font color="#434f54">&amp;</font> <font color="#000000">WDTE_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">PWRTE_ON</font> <font color="#434f54">&amp;</font> <font color="#000000">CP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">BOREN_ON</font>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&amp;</font> <font color="#000000">LVP_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">CPD_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">WRT_OFF</font> <font color="#434f54">&amp;</font> <font color="#000000">DEBUG_OFF</font><font color="#000000">)</font><font color="#000000">;</font>

<font color="#5e6d03">#define</font> <font color="#000000">LED</font> &nbsp;<font color="#000000">RB0</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Define LED pin as RB0</font>
<font color="#5e6d03">#define</font> <font color="#000000">_XTAL_FREQ</font> &nbsp;&nbsp;<font color="#000000">20000000</font> &nbsp;<font color="#434f54">&#47;&#47; Define CPU Frequency</font>


<font color="#00979c">void</font> <font color="#000000">main</font><font color="#000000">(</font><font color="#00979c">void</font><font color="#000000">)</font>
<font color="#000000">{</font>
 &nbsp;<font color="#000000">TRISB0</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make RB0 pin output</font>
 &nbsp;<font color="#000000">LED</font> &nbsp;&nbsp;&nbsp;<font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Make RB0 low</font>
 &nbsp;
 &nbsp;<font color="#5e6d03">while</font><font color="#000000">(</font><font color="#000000">1</font><font color="#000000">)</font>
 &nbsp;<font color="#000000">{</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">__delay_ms</font><font color="#000000">(</font><font color="#000000">500</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Half sec delay</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">LED</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; LED off</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">__delay_ms</font><font color="#000000">(</font><font color="#000000">500</font><font color="#000000">)</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; Half sec delay</font>
 &nbsp;&nbsp;&nbsp;<font color="#000000">LED</font> <font color="#434f54">=</font> <font color="#000000">1</font><font color="#000000">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#434f54">&#47;&#47; LED on</font>
 &nbsp;<font color="#000000">}</font>
<font color="#000000">}</font>

</pre>

## LED Blink Circuit

![image](https://user-images.githubusercontent.com/109785046/204692980-b66ab419-26f7-4a4d-b28e-7945766ce0e9.png)


