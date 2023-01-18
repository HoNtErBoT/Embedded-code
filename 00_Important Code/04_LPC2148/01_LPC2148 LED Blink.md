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

PINSEL0 controls PORT0 pins P0.0 to P0.15, PINSEL1 controls PORT0 pins P0.16 to P0.31 and PINSEL2 controls PORT1 pins P1.16 to P1.31.


