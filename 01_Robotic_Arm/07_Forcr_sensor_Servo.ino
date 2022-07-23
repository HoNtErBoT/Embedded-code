#include <Servo.h>
Servo servo1; 
Servo servo2; 
Servo servo3; 
Servo servo4;
Servo servo5;

/*************************************************************/
    void Force_Sensor();
    void Servo_tester();
/*************************************************************/
/*************************************************************/
    int F1=0,F2=0,F3=0,F4=0,F5=0;
    int mode = 0;
/*************************************************************/
/*************************************************************/
/*************************************************************/
void setup() 
{
  Serial.begin(9600);
  Serial.println("Robotic ARM");
  delay(1000);
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(6);
  servo5.attach(5);
  Serial.println("test 1");
  servo2.write(80);
  servo1.write(80);
  servo3.write(110);     
  servo4.write(85);
  servo1.write(30);  
  delay(1000);
  Serial.println("test 2");
  servo2.write(180);
  servo1.write(180);
  servo3.write(0);     
  servo4.write(0);
  servo1.write(120);
  delay(1000);
}
/*************************************************************/
void loop() 
{
  int msg1=0;    
  Servo_tester();
  if(mode == 1)
  {
        for(int i=0;i<120;i++)
        {
          msg1=0;
          Servo_tester();
          if(mode==0)
          {
            break;
          }
          int a,b,c;
          a = map(i, 0, 120, 180, 80);
          b = map(i, 0, 120, 0, 85);
          c = map(i, 0, 120, 10, 110);
          //Serial.print("Mode-1 ");
          
          Force_Sensor();
          /*--------------------------------------------------------------------*/
          if(F4>900 || i<5)
          {
            servo1.write(a);
          }
          else
          {
            msg1=1;
            //Serial.print("F4 Stop");
          }
          /*--------------------------------------------------------------------*/  
          if(F3>900 || i<5)
          {
            servo2.write(a);
          }
          else
          {
            msg1=1;
            //Serial.print("F3 Stop");
          }
          /*--------------------------------------------------------------------*/ 
          if(F2>900 || i<5)
          {
            servo3.write(c); 
          }
          else
          {
            msg1=1;
            //Serial.print("F2 Stop"); 
          }
          /*--------------------------------------------------------------------*/  
          if(F1>900 || i<5)
          {
            servo4.write(b); 
          }
          else
          {
            msg1=1;
            //Serial.print("F1 Stop");  
          }
          /*--------------------------------------------------------------------*/
          //Serial.println("");
          if(msg1==1)
          {
              Serial.print("  F1=>");
              Serial.print(F1);
              if(F1>1000)
              {
                Serial.print("  Safe");
              }
              else if(F1 >800 && F1 < 1000)
              {
                Serial.print("  LOW");
              }
              else if(F1 > 600)
              {
                Serial.print("  Med");
              }
              else if(F1 <= 600)
              {
                Serial.print("  HIGH");
              }
              else if(F1 > 1000)
              {
                Serial.print(" ");
              }
              
              Serial.print("  F2=>");
              Serial.print(F2);
              if(F2>1000)
              {
                Serial.print("  Safe");
              }
              else if(F2 >800 && F2 <= 1000)
              {
                Serial.print("  LOW");
              }
              else if(F2 > 600)
              {
                Serial.print("  Med");
              }
              else if(F2 <= 600)
              {
                Serial.print("  HIGH");
              }
              else if(F2 > 1000)
              {
                Serial.print(" ");
              }
              Serial.print("  F3=>");
              Serial.print(F3);
              if(F3>1000)
              {
                Serial.print("  Safe");
              }
              else if(F3 >800 && F3 <= 1000)
              {
                Serial.print("  LOW");
              }
              else if(F3 > 600)
              {
                Serial.print("  Med");
              }
              else if(F3 <= 600)
              {
                Serial.print("  HIGH");
              }
              else if(F3 > 1000)
              {
                Serial.print(" ");
              }
              Serial.print("  F4=>");
              Serial.print(F4);
              if(F4>1000)
              {
                Serial.print("  Safe");
              }
              else if(F4 >800 && F4 <= 1000)
              {
                Serial.print("  LOW");
              }
              else if(F4 > 600)
              {
                Serial.print("  Med");
              }
              else if(F4 <= 600)
              {
                Serial.print("  HIGH");
              }
              else if(F4 > 1000)
              {
                Serial.print(" ");
              }
              Serial.print("  F5=>");
              Serial.print(F5);
              if(F5>1000)
              {
                Serial.print("  Safe");
              }
              else if(F5 >800 && F5 <= 1000)
              {
                Serial.print("  LOW");
              }
              else if(F5 > 600)
              {
                Serial.print("  Med");
              }
              else if(F5 <= 600)
              {
                Serial.print("  HIGH");
              }
              else if(F5 > 1000)
              {
                Serial.print(" ");
              }
              Serial.println("");
          }
          
          delay(3);
        }        
        servo1.write(180);
        servo2.write(180);
        servo3.write(0);     
        servo4.write(0);      
  }
  else if(mode == 2)
  {
        for(int i=0;i<120;i++)
        {
          msg1=0;
          Servo_tester();
          if(mode==0)
          {
            break;
          }
          int a,b,c;
          a = map(i, 0, 120, 180, 80);
          b = map(i, 0, 120, 0, 85);
          c = map(i, 0, 120, 10, 110);
          //Serial.print("Mode-2 ");
          
          Force_Sensor();
          /*--------------------------------------------------------------------*/
          if(F4>800 || i<5)
          {
            servo1.write(a);
          }
          else
          {
            msg1=1;
            //Serial.print("F4 Stop");
          }
          /*--------------------------------------------------------------------*/  
          if(F3>800 || i<5)
          {
            servo2.write(a);
          }
          else
          {
            msg1=1;
            //Serial.print("F3 Stop");
          }
          /*--------------------------------------------------------------------*/ 
          if(F2>800 || i<5)
          {
            servo3.write(c); 
          }
          else
          {
            msg1=1;
            //Serial.print("F2 Stop"); 
          }
          /*--------------------------------------------------------------------*/  
          if(F1>800 || i<5)
          {
            servo4.write(b); 
          }
          else
          {
            msg1=1;
            //Serial.print("F1 Stop");  
          }
          /*--------------------------------------------------------------------*/
          //Serial.println("");
          if(msg1==1)
          {
              Serial.print("  F1=>");
              Serial.print(F1);
              if(F1>1000)
              {
                Serial.print("  Safe");
              }
              else if(F1 >800 && F1 < 1000)
              {
                Serial.print("  LOW");
              }
              else if(F1 > 600)
              {
                Serial.print("  Med");
              }
              else if(F1 <= 600)
              {
                Serial.print("  HIGH");
              }
              else if(F1 > 1000)
              {
                Serial.print(" ");
              }
              
              Serial.print("  F2=>");
              Serial.print(F2);
              if(F2>1000)
              {
                Serial.print("  Safe");
              }
              else if(F2 >800 && F2 <= 1000)
              {
                Serial.print("  LOW");
              }
              else if(F2 > 600)
              {
                Serial.print("  Med");
              }
              else if(F2 <= 600)
              {
                Serial.print("  HIGH");
              }
              else if(F2 > 1000)
              {
                Serial.print(" ");
              }
              Serial.print("  F3=>");
              Serial.print(F3);
              if(F3>1000)
              {
                Serial.print("  Safe");
              }
              else if(F3 >800 && F3 <= 1000)
              {
                Serial.print("  LOW");
              }
              else if(F3 > 600)
              {
                Serial.print("  Med");
              }
              else if(F3 <= 600)
              {
                Serial.print("  HIGH");
              }
              else if(F3 > 1000)
              {
                Serial.print(" ");
              }
              Serial.print("  F4=>");
              Serial.print(F4);
              if(F4>1000)
              {
                Serial.print("  Safe");
              }
              else if(F4 >800 && F4 <= 1000)
              {
                Serial.print("  LOW");
              }
              else if(F4 > 600)
              {
                Serial.print("  Med");
              }
              else if(F4 <= 600)
              {
                Serial.print("  HIGH");
              }
              else if(F4 > 1000)
              {
                Serial.print(" ");
              }
              Serial.print("  F5=>");
              Serial.print(F5);
              if(F5>1000)
              {
                Serial.print("  Safe");
              }
              else if(F5 >800 && F5 <= 1000)
              {
                Serial.print("  LOW");
              }
              else if(F5 > 600)
              {
                Serial.print("  Med");
              }
              else if(F5 <= 600)
              {
                Serial.print("  HIGH");
              }
              else if(F5 > 1000)
              {
                Serial.print(" ");
              }
              Serial.println("");
          }
          
          delay(3);
        }        
        servo1.write(180);
        servo2.write(180);
        servo3.write(0);     
        servo4.write(0);      
  }
  
}  
/*************************************************************/
    void Force_Sensor()
    {
      F1 = analogRead(A0);
      delay(10);
      F2 = analogRead(A1);
      delay(10);
      F3 = analogRead(A2);
      delay(10);
      F4 = analogRead(A3);
      delay(10);
      F5 = analogRead(A4);
      delay(10);
    
      /*Serial.print("  F1=>");
      Serial.print(F1);
      Serial.print("  F2=>");
      Serial.print(F2);
      Serial.print("  F3=>");
      Serial.print(F3);
      Serial.print("  F4=>");
      Serial.print(F4);
      Serial.print("  F5=>");
      Serial.print(F5);
      Serial.println("");*/
    }
/*************************************************************/
    void Servo_tester()
    {
        if(Serial.available())
        {
          int pos;
          char x;
          x=Serial.read();
          if(x=='a')
          {
            pos = Serial.parseInt();
            servo1.write(pos); 
            Serial.print("Servo 1 pos => ");
            Serial.println(pos);
            delay(500);
          }
          else if(x=='b')
          {
            pos = Serial.parseInt();
            servo2.write(pos); 
            Serial.print("Servo 2 pos => ");
            Serial.println(pos);
            delay(500);
          }
          else if(x=='c')
          {
            pos = Serial.parseInt();
            servo3.write(pos); 
            Serial.print("Servo 3 pos => ");
            Serial.println(pos);
            delay(500);
          }
          else if(x=='d')
          {
            pos = Serial.parseInt();
            servo4.write(pos); 
            Serial.print("Servo 4 pos => ");
            Serial.println(pos);
            delay(500);
          }
          else if(x=='e')
          {
            pos = Serial.parseInt();
            servo5.write(pos); 
            Serial.print("Servo 5 pos => ");
            Serial.println(pos);
            delay(500);
          }
          else if(x=='m')
          {
            Serial.println("Mode-1");
            mode=Serial.parseInt();
            if(mode>=1)
            {
              servo5.write(30);
              Serial.print("Mode-");
              Serial.println(mode);
            }
            else if(mode==0)
            {
              servo5.write(120);
            }
          }
          
        }
    }
/*************************************************************/
/*************************************************************/
/*************************************************************/
