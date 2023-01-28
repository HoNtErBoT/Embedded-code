# PIC16F877A Analogue to Digital Converter (ADC)

Analogue to Digital Converter, or ADC, is a data converter which allows digital circuits to interface with the real world by encoding an analogue signal into a binary code
The Analogue-to-Digital Converter, (ADCs) allow micro-processor controlled circuits, Arduinos, Raspberry Pi, and other such digital logic circuits to communicate with the real world.
 In the real world, analogue signals have continuously changing values which come from various sources and sensors which can measure sound, light, temperature or movement, and many digital systems interact with their environment by measuring the analogue signals from such transducers.
 
![image](https://user-images.githubusercontent.com/109785046/215242366-e5c9b39f-4d25-40ac-be46-f1eb8e61f474.png)

While analogue signals can be continuous and provide an infinite number different voltage values, digital circuits on the other hand work with binary signal which have only two discrete states, a logic “1” (HIGH) or a logic “0” (LOW). So it is necessary to have an electronic circuit which can convert between the two different domains of continuously changing analogue signals and discrete digital signals, and this is where Analogue-to-Digital Converters (A/D) come in.

Basically an analogue to digital converter takes a snapshot of an analogue voltage at one instant in time and produces a digital output code which represents this analogue voltage. The number of binary digits, or bits used to represent this analogue voltage value depends on the resolution of an A/D converter.

For example a 4-bit ADC will have a resolution of one part in 15, (24 – 1) whereas an 8-bit ADC will have a resolution of one part in 255, (28 – 1). Thus an analogue to digital converter takes an unknown continuous analogue signal and converts it into an “n”- bit binary number of 2n bits.


