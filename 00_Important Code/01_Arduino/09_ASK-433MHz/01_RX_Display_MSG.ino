//RX CODE

#include <VirtualWire.h>
void setup()
{
    vw_set_ptt_inverted(true);          // Required for DR3100
    vw_set_rx_pin(2);
    vw_setup(4000);                     // Bits per sec
    pinMode(13, OUTPUT);
    vw_rx_start();                       // Start the receiver PLL running
    Serial.begin(9600); 
}
void loop()
{
    char buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;
    if (vw_get_message(buf, &buflen))           // Non-blocking
    {
      Serial.println(buf);
      if((buf[0]=='A')&&(buf[1]=='1'))
      {   
          digitalWrite(13,1);
          delay(1000);
      }  
    }
    else
    {
        digitalWrite(13,0);
    }

}
