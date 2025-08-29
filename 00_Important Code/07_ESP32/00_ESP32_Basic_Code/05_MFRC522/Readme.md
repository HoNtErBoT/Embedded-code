# MFRC522 RFID 

The MFRC522 is a highly integrated, low-cost integrated circuit (IC) used for contactless communication at 13.56 MHz, specifically for reading from and writing to RFID tags.
At its heart, the MFRC522 acts as a bridge between a microcontroller (like an Arduino or Raspberry Pi) and a passive RFID tag or card. It generates a 13.56 MHz electromagnetic field that powers up the passive tag and enables two-way communication.
## Core Functionality

- **Reader/Writer:** It can both detect (read) the unique identifier (UID) of a nearby tag and also write data to or read data from the tag's memory blocks
- **Communication Protocol:** It typically communicates with a host microcontroller using the **SPI** (Serial Peripheral Interface) protocol, though it also supports I2C and UART interfaces.
- **Compatibility:** It is designed to work with ISO/IEC 14443 Type A standards, making it compatible with the widely used MIFARE series of cards (e.g., MIFARE Classic 1K, MIFARE Ultralight).

## How It Works

In simple terms, think of the MFRC522 module as a radio that's both shouting and listening. It sends out a constant, short-range energy field. When you bring an RFID card or tag near it, the tag's internal antenna catches this energy, which instantly powers it on (like magic, no battery needed!). Once powered, the tag uses that same energy to broadcast its unique ID number back. The MFRC522 "hears" this ID and sends it to the main controller (like an Arduino) to be identified 





# Code

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
