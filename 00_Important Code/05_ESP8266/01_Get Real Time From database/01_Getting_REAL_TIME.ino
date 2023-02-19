#include <ESP8266WiFi.h>
#include <time.h>

void Time();
int h,m,s,d,mo,y;
int timezone = 5.5 * 3600;//india GMT +5.30
int dst = 0;
void setup()
{
    Serial.begin(9600);
    delay(1000);
    Serial.println("");
    WiFi.disconnect();
    WiFi.begin("FTTH-1800","UnniPrasad402");
    while ((!(WiFi.status() == WL_CONNECTED)))
    {
      delay(300);
      Serial.print("*");
    }
    Serial.println("\n\nConnected..");

    Serial.println("Getting Time zone info please wait.. \n");
    configTime(timezone, dst, "pool.ntp.org","time.nist.gov");
    delay(100);
          while(!time(nullptr))
          {
             Serial.print("*");
             delay(100);
          }
   Serial.println("\nTime response....OK\n");
}
char buffer[30];
void loop() 
{
  Time();
  sprintf(buffer,"%d:%d:%d   %d/%d/%d ",h,m,s,d,mo,y);
  Serial.println(buffer);
  delay(500);
}
/*--------------------------------------------------------*/
void Time()
{
  time_t now = time(nullptr);
  struct tm* p_tm = localtime(&now);
 
                h=  p_tm->tm_hour;
                m=  p_tm->tm_min;  
                s=  p_tm->tm_sec;

                d  = p_tm->tm_mday;
                mo = p_tm->tm_mon + 1;
                y  = p_tm->tm_year + 1900;
}
               
/*--------------------------------------------------------*/
