void setup()
{
 Serial.begin(9600);                  
 Serial.println("Serial Interface");
 pinMode(13,OUTPUT);
}

void loop() 
{
  if(Serial.available())
  {
    char x=Serial.read();
    if(x=='a')
    {
      digitalWrite(13,HIGH);
      delay(50);
    }
    else if(x=='b')
    {
      digitalWrite(13,LOW);
      delay(50);
    }
    
  }

}
