/***********************************************************************************************
 *              MFRC522 RFID INTERFACE
***********************************************************************************************/
#include<Arduino.h>
#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN); 
/**********************************************************************************************/
void setup() 
{
  Serial.begin(9600);                     
  SPI.begin();                             
  mfrc522.PCD_Init();                    
  Serial.println("Punch ypur card...");
  Serial.println();
}
/**********************************************************************************************/
void loop() 
{
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }                                      
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  Serial.print("UID tag :");
  String content= "";
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "C9 78 79 5A") 
  {
    Serial.println("Authorized access welcome Rahul");
    Serial.println();
    
  }
  else if (content.substring(1) == "71 19 53 A3")
  {
    Serial.println("Authorized access welcome  deepu");
    Serial.println();
    
  } 
 else  
 {
    Serial.println(" sorry Access denied");
    Serial.println();
    delay(300);    
  }  
} 
/**********************************************************************************************/
