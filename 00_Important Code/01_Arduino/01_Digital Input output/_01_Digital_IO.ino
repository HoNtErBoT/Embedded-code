void setup() 
{
 pinMode(13,OUTPUT);
 pinMode(2,INPUT);
}

void loop()
{
  if(digitalRead(2)==1)
  {
    digitalWrite(13,HIGH);
    delay(50);
  }
  else
  {
    digitalWrite(13,LOW);
    delay(50);
  }
}
