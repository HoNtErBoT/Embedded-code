#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>   
#include <ArduinoJson.h>


# define SSID "Embedded"
# define PSWD "Embedded54321"
# define BOTtoken "1013648952:AAHYXoqx5xDgWYvNC3_a7vfg1957ON0JGQ8"
# define CHAT_ID "669018860"

WiFiClientSecure client;
UniversalTelegramBot bot(BOTtoken, client);

void handleNewMessages(int numNewMessages);
void Connect_WiFi();
/**********************************************************/
        int bot_delay = 1000;
        unsigned long lastTimeBotRan;
        const int ledPin = 2;
        bool ledState = LOW;
/**********************************************************/
void setup()
{
  client.setCACert(TELEGRAM_CERTIFICATE_ROOT);   // Add root certificate for api.telegram.org
  Connect_WiFi();
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);

}
/**********************************************************/
void loop()
{
 if (millis() > lastTimeBotRan + bot_delay)  
 {
    int numNewMessages = bot.getUpdates(bot.last_message_received + 1);

    while(numNewMessages) 
    {
      Serial.println("Got Response!");
      handleNewMessages(numNewMessages);
      numNewMessages = bot.getUpdates(bot.last_message_received + 1);
    }
    lastTimeBotRan = millis();
  }
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
        String msg = "IP ADDR =>> ";
        msg += String(WiFi.localIP().toString());


        Serial.println("Connected to Wi-Fi");
        Serial.print("IP Adress : ");
        Serial.println((msg));
        delay(1000);



        bot.sendMessage(CHAT_ID, msg , "");
    }
/**********************************************************/
void handleNewMessages(int numNewMessages) 
{
  Serial.println("Handling New Message");
  Serial.println(String(numNewMessages));

  for (int i=0; i<numNewMessages; i++) {
    // Chat id of the requester
    String chat_id = String(bot.messages[i].chat_id);
    if (chat_id != CHAT_ID){
      bot.sendMessage(chat_id, "Unauthorized user", "");
      continue;
    }
    
    // Print the received message
    String user_text = bot.messages[i].text;
    Serial.println(user_text);

    String your_name = bot.messages[i].from_name;

    if (user_text == "/start") {
      String welcome = "Welcome, " + your_name + ".\n";
      welcome += "Use the following commands to control your outputs.\n\n";
      welcome += "Send /led2_on to turn GPIO2 ON \n";
      welcome += "Send /led2_off to turn GPIO2 OFF \n";
      welcome += "Send /get_state to request current GPIO state \n";
      bot.sendMessage(chat_id, welcome, "");
    }

    if (user_text == "/led2_on") {
      bot.sendMessage(chat_id, "LED state set to ON", "");
      ledState = HIGH;
      digitalWrite(ledPin, ledState);
    }
    
    if (user_text == "/led2_off") {
      bot.sendMessage(chat_id, "LED state is set to OFF", "");
      ledState = LOW;
      digitalWrite(ledPin, ledState);
    }
    
    if (user_text == "/get_state") {
      if (digitalRead(ledPin)){
        bot.sendMessage(chat_id, "LED is ON", "");
      }
      else{
        bot.sendMessage(chat_id, "LED is OFF", "");
      }
    }
  }
}
/**********************************************************/
