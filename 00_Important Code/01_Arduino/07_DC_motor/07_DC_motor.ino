void setup()
{
   
   pinMode(2,OUTPUT);
   pinMode(2,OUTPUT);2
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   Serial.begin(9600);
   Serial.println("DC motor speed controll ");

}

void loop()
{
  
  if(Serial.available())
  {
    
    else if(x=='s')
    {
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      Serial.println("Motor stopped");
    }
    else if(x=='f')
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      Serial.println("Motor Forward");
    }
    else if(x=='r')
    {
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      Serial.println("Motor rev");
    }
  }
  
}
