# Bluetooth


Bluetooth is a technology standard used to enable short-range wireless communication between electronic devices. Since Bluetooth operates on radio frequencies, rather than the infrared spectrum used by traditional remote controls, devices using this technology do not have to maintain a line of sight to communicate. Every bluetooth enabled device requires a low-cost **transceiver** chip be included in each device. The transceiver chip transmits and receives data through a previously unused frequency band of **2.45 Ghz** that is available globally,The maximum Bluetooth range is 10 meters.




**HC-05** is a Bluetooth module which is designed for wireless comunication, This HC05 bluetooth serial module allow all serial enabled devices to communicate with each other using Bluetooth.This can be used in two modes of operation.
### Modes of Operation
   - Command Mode 
   - Data Mode. 

### HC-05 Pinout Configuration
|Pin Number  |Pin Name |Description |
| :---: | :---: | :---: |
| 1 |Enable / Key |This pin is used to toggle between Data Mode (set low) and AT command mode (set high). By default it is in Data mode, The default baud rate of HC-05 **in command mode is 38400bps** and **9600 in data mode** |
| 2 | Vcc| Powers the module. Connect to +5V Supply voltage |
| 3 | Ground|Ground pin of module, connect to system ground. |
| 4 | TX| Transmits Serial Data. Everything received via Bluetooth will be given out by this pin as serial data.|
| 5 | RX| Receive Serial Data. Every serial data given to this pin will be broadcasted via Bluetooth|
| 6 | State| The state pin is connected to on board LED, it can be used as a feedback to check if Bluetooth is working properly.|
| 7 | LED| Indicates the status of Module <br>1) Blink once in 2 sec-> Module has entered Command Mode   <br>2) Repeated Blinking -> Waiting for connection in Data Mode <br>3) Blink twice in 1 sec -> Connection successful in Data Mode |
| 8 | Button|Used to control the Key/Enable pin to toggle between Data and command Mode |






