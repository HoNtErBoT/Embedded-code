# Arduino UNO
The Arduino UNO is one of the most popular Arduino board.  Arduino UNO uses ATmega328P microcontroller as the main control and processing unit of the board. The Atmega328P has 32kB In-System Programmable Flash Memory, 1kB EEPROM, and 2kB internal SRAM.

The UNO board provides access to 14 Digital I/O pins (0-13). Of these 14 digital I/O pins, 6 pins can be used as PWM pins (pins 3, 5, 6, 9, 10 and 11). The PWM pins are indicated by ~ before the pin number on the Arduino UNO boards (E.g. ~3).Digital pins 0 and 1 are the serial communication pins RX and TX respectively.6 pins are available for use as Analog input pins (A0-A5). The analog pins can be used as digital I/O pins as well if there is no analog input to be measured. The numbers given to the pins on the Arduino board are not the pin numbers of the ATmega328P microcontroller. These are the pin numbers used while accessing the functions from the Arduino libraries. The UNO board can be powered through a USB cable , external AC-DC adapter and with an external battery, While uploading the sketch using Arduino IDE, make sure that there are no connections from other devices to pins 0 and 1 of UNO board. These are the Rx and Tx pins of ATmega328P, because these pins are used while uploading the sketch.

![Arduino UNO CKT](https://github.com/HoNtErBoT/Embedded-Circuit-importat/blob/main/03_Arduino/Arduino%20uno%20Digital%20and%20analog%20pins.png)

##  What is a Bootloader?
If we take a bare microcontroller chip fresh from the factory and apply power to it, the internal system clock will start ticking away.  But nothing else will happen.  Without a program to run, the chip will just sit there doing nothing. Most microcontroller chips have a special programming interface that allows you to burn programs into Flash memory.  Unfortunately, these programming interfaces generally require some specialized tools

The bootloader is a small piece of software that allows uploading of sketches onto the Arduino board via a more convenient interface like a standard USB cable




