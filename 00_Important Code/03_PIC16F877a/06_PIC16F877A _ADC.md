# PIC16F877A Analogue to Digital Converter (ADC)

Analogue to Digital Converter, or ADC, is a data converter which allows digital circuits to interface with the real world by encoding an analogue signal into a binary code
The Analogue-to-Digital Converter, (ADCs) allow micro-processor controlled circuits, Arduinos, Raspberry Pi, and other such digital logic circuits to communicate with the real world.
 In the real world, analogue signals have continuously changing values which come from various sources and sensors which can measure sound, light, temperature or movement, and many digital systems interact with their environment by measuring the analogue signals from such transducers.
 
![image](https://user-images.githubusercontent.com/109785046/215242366-e5c9b39f-4d25-40ac-be46-f1eb8e61f474.png)

While analogue signals can be continuous and provide an infinite number different voltage values, digital circuits on the other hand work with binary signal which have only two discrete states, a logic “1” (HIGH) or a logic “0” (LOW). So it is necessary to have an electronic circuit which can convert between the two different domains of continuously changing analogue signals and discrete digital signals, and this is where Analogue-to-Digital Converters (A/D) come in.

Basically an analogue to digital converter takes a snapshot of an analogue voltage at one instant in time and produces a digital output code which represents this analogue voltage. The number of binary digits, or bits used to represent this analogue voltage value depends on the resolution of an A/D converter.

For example a 4-bit ADC will have a resolution of one part in 15, (24 – 1) whereas an 8-bit ADC will have a resolution of one part in 255, (28 – 1). Thus an analogue to digital converter takes an unknown continuous analogue signal and converts it into an “n”- bit binary number of 2n bits.ADC module of the PIC16F877A controller has a 10-bit resolution output. That means an analog input converted into a corresponding 10-bit digital output and 7 channel ADC.

# BLOCK DIAGRAM
![image](https://user-images.githubusercontent.com/109785046/215248540-25d7988c-eea0-4320-9336-2c2d871ebc1d.png)

This is the 10-bit Successive Approximation block diagram.

- A sample and hold circuit to acquire the input voltage, Vin.
- A voltage comparator that compares Vin to the DAC output. It outputs the comparison result to the successive approximation register (SAR).
- A successive approximation register designed to supply the approximated digital code of Vin to the internal DAC.
- An internal reference DAC that supplies the comparator with an analog voltage equivalent of the digital code supplied by the SAR.
- A register ADRES to store the ADC result upon-end of-conversion(EOC).

# REGISTERS FOR ADC IN PIC16F877A

Most of the configurations to set up the ADC has to be done in the ADCON register. The ADCON register is the Control Register of the ADC. The ADC conversion is given in the user manual of PIC16F877A. Under the register description, you will notice the various bits associated with the ADCON register. The following are the necessary configurations of the bits in the ADCON register which we will be using for the ADC setup.

### A/D has 4 main registers:

- A/D Control Register 0 (ADCON0)
- A/D Control Register 1 (ADCON1)
- A/D Result High Register (ADRESH)
- A/D Result Low Register (ADRESL)


