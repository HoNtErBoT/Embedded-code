# ESP32 LED Blink

The code shown here is designed to run on an ESP32 microcontroller, which is a powerful and popular choice for IoT (Internet of Things) and embedded system projects due to its Wi-Fi and Bluetooth capabilities.
This ESP32 code is designed to control an LED connected to GPIO pin 23, making it blink on and off at 1-second intervals. When the ESP32 starts, the setup() function runs first, where the serial communication is initialized using Serial.begin(115200); at a baud rate of 115200. This serial interface allows the ESP32 to communicate with a computer through the Serial Monitor, which is part of the Arduino IDE. It sends and receives text data, making it a crucial tool for debugging and monitoring the program's behavior in real-time. The message "Hello, ESP32!" is sent to the Serial Monitor to confirm that the code has started executing. Additionally, pin 23 is set as an output using pinMode(23, OUTPUT);. The loop() function, which runs repeatedly, turns the LED on by sending a HIGH signal to pin 23 and simultaneously sends the message "LED ON" to the Serial Monitor. After a 1-second delay (delay(1000);), the LED is turned off by sending a LOW signal to pin 23, and the message "LED OFF" is sent to the Serial Monitor. Another 1-second delay follows before the loop repeats. This continuous loop makes the LED blink while allowing you to monitor the status of the LED in real-time through the Serial Monitor, providing a simple yet effective demonstration of basic ESP32 functionality and serial communication.


![ESP32LEDBlinkLOGO-gif](https://github.com/user-attachments/assets/d440cc63-d6b5-4588-baa0-b44785d46f0a)



#  Reference link and code
- <p><a href="https://wokwi.com/projects/407982739253570561">Project Link</a></p>

```
/*
author  : Rajeev TR
date    : 04/09/2024
https://github.com/HoNtErBoT
*/


void setup() 
{
    Serial.begin(115200);
    Serial.println("Hello, ESP32!");
    pinMode(23,OUTPUT);
}

void loop() 
{
  digitalWrite(23,HIGH);
  Serial.println("LED ON");
  delay(1000); 
  digitalWrite(23,LOW);
  Serial.println("LED OFF");
  delay(1000);
}


```
