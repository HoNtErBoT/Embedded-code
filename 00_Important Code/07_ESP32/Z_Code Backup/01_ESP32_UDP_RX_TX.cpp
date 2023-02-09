// Plat form IO Code


# include <WiFi.h>
# include <WiFiUdp.h>
# include <WebServer.h>

# define SSID "Embedded"
# define PSWD "Embedded54321"

WiFiUDP udp;
/**********************************************************/
    unsigned int localUdpPort = 4210;   //  port to listen on
    char incomingPacket[255];           // buffer for incoming packets   

    const char * udpAddress = "192.168.2.174";
    const int udpPort = 2020;  
/**********************************************************/
    void Connect_WiFi();
    void UDP_Transmit(char *s);
    void UDP_RCV();
/**********************************************************/
void setup()
{
  Connect_WiFi();

}
/**********************************************************/
void loop()
{
  if(Serial.available())
  {
    char x = Serial.read();
    if(x=='a')
    {
        String x="hai class";
        UDP_Transmit(&x[0]);
          digitalWrite(2,LOW);
          delay(250);
          digitalWrite(2,HIGH);
          delay(250);
    }
  }
  UDP_RCV();  
  delay(50);
}
/**********************************************************/
    void Connect_WiFi()
    {
        Serial.begin(9600);
        WiFi.disconnect();
        delay(1000);
        pinMode(2,OUTPUT);
        Serial.println("Connecting to WiFi");
        WiFi.begin(SSID, PSWD);
        delay(100);
        Serial.println("");
        while ((!(WiFi.status() == WL_CONNECTED)))
        {
          digitalWrite(2,LOW);
          delay(250);
          digitalWrite(2,HIGH);
          delay(250);
          Serial.print("*");

        }
        Serial.println("Connected to Wi-Fi");
        udp.begin(localUdpPort);
        Serial.print("IP Adress : ");
        Serial.println((WiFi.localIP()));
        Serial.print("PORT      : ");
        Serial.println(localUdpPort);
        delay(1000);
    }
/**********************************************************/
   void UDP_Transmit(char *s)
   {
    int i;
      uint8_t buffer[50] = "";
      for(i=0;*s!='\0';i++,s++)
      {
        buffer[i]=*s;
      }
      buffer[i]='\0';
      udp.beginPacket(udpAddress, udpPort);
      udp.write(buffer, 11);
      udp.endPacket();
   }
/**********************************************************/
    void UDP_RCV()
    {
      uint8_t buffer[50] = "";
      char n[10];
      String m;
      memset(buffer, 0, 50);
      udp.parsePacket();
      if(udp.read(buffer, 50) > 0)
      {
        int i;
          Serial.print("Server to client: ");
          Serial.println((char *)buffer);
          for(i=0;buffer[i]!='\0';i++)
          {
            n[i]=buffer[i];
          }
          n[i]='\0';
          m=n;
          Serial.println(m);
          Serial.printf("Buffer length =%d",i);
      }
    }
/**********************************************************/
