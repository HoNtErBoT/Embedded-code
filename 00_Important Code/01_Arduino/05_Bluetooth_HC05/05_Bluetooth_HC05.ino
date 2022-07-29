#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(10, 11); // RX, TX
char x;
void setup()
{
   Serial.begin(9600);
   Bluetooth.begin(9600);
   pinMode(13,OUTPUT);
   Serial.println("Serial monitor");
}
void loop() 
{
  
   if (Bluetooth.available())
   {
    x=Bluetooth.read();
    Serial.write(x);
    if(x=='a')
    {
      digitalWrite(13,HIGH);
    }
    else if(x=='b')
    {
       digitalWrite(13,LOW);
    }
    delay(10);
  }
    if (Serial.available()) 
    {
    Bluetooth.write(Serial.read());
    delay(10);
    }

  
}
