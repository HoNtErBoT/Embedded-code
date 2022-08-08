//TX 
#include <VirtualWire.h>
char *controller;

void setup() 
{
      pinMode(13,OUTPUT);
      vw_set_ptt_inverted(true); 
      vw_set_tx_pin(2);
      vw_setup(4000);// speed of data transfer Kbps
}

void loop()
{
      controller="A1"  ;
      vw_send((uint8_t *)controller, strlen(controller));
      vw_wait_tx(); // Wait until the whole message is gone
      
      digitalWrite(13,1);
      delay(1000);
      digitalWrite(13,0);
      delay(1000);
      
      controller="B1"  ;
      vw_send((uint8_t *)controller, strlen(controller));
      vw_wait_tx(); // Wait until the whole message is gone
      
      digitalWrite(13,1);
      delay(1000);
      digitalWrite(13,0);
      delay(1000);

}
