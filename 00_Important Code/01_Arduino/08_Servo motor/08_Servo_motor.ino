
#include <Servo.h>

Servo myservo; 


int pos = 0;

void setup() 
{
  Serial.begin(9600);
  myservo.attach(9); 
}

void loop()
{
  if(Serial.available())
  {
    char x;
    x=Serial.read();
    if(x=='a')
    {
      pos = Serial.parseInt();
      myservo.write(pos);
      Serial.println(pos);
      delay(150);
    }
  }
  
}
