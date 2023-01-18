# What is LPC2148 and GPIO

LPC2148 is a 32-bit Microcontroller based on the ARM7TDMI-S Family. It is manufactured by NXP Semiconductors (formerly Philips) and is one of the widely used and highly successful ARM7 based Microcontroller.Even though ARM7 family is considered obsolete with the introduction of many advanced processors and controllers, it is one of the best and easiest microcontrollers to work around for beginners in ARM based microcontrollers.

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
