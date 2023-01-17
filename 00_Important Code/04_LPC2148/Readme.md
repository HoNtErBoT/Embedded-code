
# ARM (Advanced RISC Machine)

<p align="center" style="margin-bottom: 0px !important;">
  <img src="https://user-images.githubusercontent.com/109785046/212823768-472007c7-1bda-4497-86ed-608592b31682.png" alt="Material Bread logo" align="center">
</p>

ARM is generally known as Advanced RISC Machine, in the family of **Reduced Instruction Set Computer** (RISC) .  Arm Ltd. develops the architectures and licenses them to other companies, who design their own products that implement one or more of those architectures, including system on a chip (SoC) and system on module (SOM) designs, that incorporate different components such as memory, interfaces, and radios. It also designs cores that implement these instruction set architectures and licenses these designs to many companies that incorporate those core designs into their own products.

Due to their low costs, minimal power consumption, and lower heat generation than their competitors, ARM processors are desirable for light, portable, battery-powered devices, including smartphones, laptops and tablet computers, and other embedded systems. However, ARM processors are also used for desktops and servers, including the world's fastest supercomputer (Fugaku) from 2020. With over 230 billion ARM chips produced, as of 2022, ARM is the most widely used family of **instruction set architectures** (ISA) and the ISAs produced in the largest quantity.



# LPC2148

<p align="center" style="margin-bottom: 0px !important;">
  <img src="https://user-images.githubusercontent.com/109785046/212825207-80fa4817-15b5-4abb-8071-f33b6d637224.png" alt="Material Bread logo" align="center">
</p>

The LPC2141/42/44/46/48 microcontrollers are based on a 16-bit/32-bit ARM7TDMI-S CPU with real-time emulation and embedded trace support, that combine the microcontroller with embedded high-speed flash memory ranging from 32 kB to 512 kB. A 128-bit wide memory interface and unique accelerator architecture enable 32-bit code execution at the maximum clock rate. For critical code size applications, the alternative 16-bit Thumb mode reduces code by more than 30 % with a minimal performance penalty. Due to their tiny size and low power consumption, LPC2141/42/44/46/48 are ideal for applications where miniaturization is a key requirement, such as access control and point-of-sale. Serial communications interfaces ranging from a USB 2.0 Full-speed device, multiple UARTs, SPI, SSP to I2C-bus and on-chip SRAM of 8 kB up to 40 kB, make these devices very well suited for communication gateways and protocol converters, soft modems, voice recognition, and low-end imaging, providing both large buffer size and high processing power. Various 32-bit timers, single or dual 10-bit ADC(s), 10-bit DAC, PWM channels, and 45 fast GPIO lines with up to nine edge or level sensitive external interrupt pins make these microcontrollers suitable for industrial control and medical systems.

# Features

- 16-bit/32-bit ARM7TDMI-S microcontroller in a tiny LQFP64 package.
- 8 kB to 40 kB of on-chip static RAM and 32 kB to 512 kB of on-chip flash memory.128-bit wide interface/accelerator enables high-speed 60 MHz operations.
- In-System Programming/In-Application Programming (ISP/IAP) via on-chip boot loader software.
- Single flash sector or full chip erase in 400 ms and programming of 256 bytes in 1 ms.
- Embedded ICE RT and Embedded Trace interfaces offer real-time debugging with the on-chip Real Monitor software and high-speed tracing of instruction execution.
- USB 2.0 Full-speed compliant device controller with 2 kB of endpoint RAM. In addition, the LPC2146/48 provides 8 kB of on-chip RAM accessible to USB by DMA.
- One or two (LPC2141/42 vs. LPC2144/46/48) 10-bit ADCs provide a total of 6/14 analog inputs, with conversion times as low as 2.44 μs per channel.
- Single 10-bit DAC provides variable analog output (LPC2142/44/46/48 only).
- Two 32-bit timers/external event counters (with four capture and four compare channels each), PWM unit (six outputs), and watchdog.
- Low power Real-Time Clock (RTC) with independent power and 32 kHz clock input.
- Multiple serial interfaces including two UARTs (16C550), two Fast I2C-bus (400 kbit/s),
- SPI and SSP with buffering and variable data length capabilities.
- Vectored Interrupt Controller (VIC) with configurable priorities and vector addresses.
- Up to 45 of 5 V tolerant fast general-purpose I/O pins in a tiny LQFP64 package.
- Up to 21 external interrupt pins available.
- 60 MHz maximum CPU clock available from programmable on-chip PLL with settling time of 100 μs.
- The on-chip integrated oscillator operates with an external crystal from 1 MHz to 25 MHz
- Power saving modes include idle and Power-down
- Individual enables/disable peripheral functions as well as peripheral clock scaling for additional power optimization.
- Processor wake-up from Power-down mode via external interrupt or BOD.
- Single power supply chip with POR and BOD circuits CPU operating voltage range of 3.0 V to 3.6 V (3.3 V ± 10 %) with 5 V tolerant I/O pads.
