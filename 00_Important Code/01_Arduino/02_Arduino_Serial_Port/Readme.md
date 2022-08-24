# Serial Communication


Serial communication is the process of handling data with one or two transmission lines to send and receive data, In our devices a data is in the form of binary pulses. Binary One represents a logic HIGH or 5 Volts, and zero represents a logic LOW or 0 Volts. In serial communication data is continuously sent and received one bit at a time. In a serial communication there are three transmission modes they are as follows
 - Simplex
 - Half Duplex
 - Full Duplex

### Simplex
The Simplex method is a one-way communication technique. Only one client (either the sender or receiver) is active at a time. If a sender transmits, the receiver can only accept. Radio and Television transmission are the examples of simplex mode.

### Half Duplex
In Half Duplex mode, both sender and receiver are active but not at a time, if a sender transmits, then the receiver can accept, but it cannot send. A good example is a walkie-talkie. It is a two-way radio that has a push-to-talk button. When the local user wants to speak to the remote person, they push this button, which turns on the transmitter and turns off the receiver, preventing them from hearing the remote person while talking.

### Full Duplex
In a Full Duplex mode, The sender and receiver can transmit and receive at the same time. A telephone call is an example of full duplex communications, as we know in a telephone call where both parties can communicate at the same time so it is a full duplex communication.

### What is serial communication in Arduino

In Arduino Uno, **Pin 0** and **Pin 1** are assigned for the serial communication known as **USART** (Universal Synchronous Asynchronous Receiver Transmitter).These pins are operated at 3.3 volts or 5 volts so it is not recommended to connect them with the RS232 serial port because it is operated at 12 volts which can harm the Arduino board, moreover, the serial communication can also be done with a computer through the USB plug.

Here in arduino uno with the help of UART we can interface several devices such as GPS, GSM, RFID, sensors, etc. In an electronic system/device we need to communicate a micro controller with varity of sensors,devices and other microcontrollers, for this we use several communication protocols such as RS232, SPI, I2C, CAN etc.Basically, a protocol is a set of rules agreed by both, the sender and the receiver, on that system
