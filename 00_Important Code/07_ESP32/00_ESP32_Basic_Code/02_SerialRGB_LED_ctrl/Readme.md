# ES32 RGB LED Serial Contrl

This ESP32 code is designed to control three LEDs—Red, Green, and Blue—connected to GPIO pins 21, 19, and 18 respectively, allowing you to change the color displayed by the LEDs based on user input through the serial interface. The setup() function runs initially, setting up the serial communication with Serial.begin(115200); at a baud rate of 115200, which enables the ESP32 to send and receive data from the computer via the Serial Monitor. Additionally, the pins for the Red, Green, and Blue LEDs are configured as output pins using pinMode(R, OUTPUT);, pinMode(G, OUTPUT);, and pinMode(B, OUTPUT);. The main logic is handled in the loop() function, which runs repeatedly. The program reads a character from the serial input using Serial.read() and stores it in the variable x. Depending on the value of x, the colorDisplay() function is called, which turns on the corresponding LED by setting its pin to LOW (which allows current to flow and the LED to light up) while turning off the other two LEDs by setting their pins to HIGH. If x is 'r', the Red LED turns on; if it's 'g', the Green LED turns on; and if it's 'b', the Blue LED turns on. Each time an LED is turned on, a message like "RED LED ON", "Green LED ON", or "Blue LED ON" is sent to the Serial Monitor for real-time feedback. This code effectively demonstrates how to control multiple LEDs using serial input, providing a simple yet powerful way to interact with the ESP32 through the Serial Monitor.



![ESP32RGBSerialCtrllogo-gif](https://github.com/user-attachments/assets/b1ad24db-e382-4eb6-b144-3ac84bbab1ec)


#  Reference link and code
- <p><a href="https://wokwi.com/projects/408073592291807233">Project Link</a></p>

```
/*
author  : Rajeev TR
date    : 04/09/2024
https://github.com/HoNtErBoT
*/


#define R 21
#define G 19
#define B 18
 void colorDisplay(char x)
 {
  if(x=='r')
    {
      Serial.println("RED LED ON");
      digitalWrite(R,LOW);
      digitalWrite(G,HIGH);
      digitalWrite(B,HIGH);
    }
  else  if(x=='g')
    {
      Serial.println("Green LED ON");
      digitalWrite(G,LOW);
      digitalWrite(R,HIGH);
      digitalWrite(B,HIGH);
    } 
  else if(x=='b')
    {
      Serial.println("Blue LED ON");
      digitalWrite(B,LOW);
      digitalWrite(G,HIGH);
      digitalWrite(R,HIGH);
    }  
   
 }
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  //Serial.println("Hello, ESP32!");
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
   // this speeds up the simulation
  delay(10);
  char x;
  if(x=Serial.read())
   {
     
      
    colorDisplay(x);
     
  }
  }




```
