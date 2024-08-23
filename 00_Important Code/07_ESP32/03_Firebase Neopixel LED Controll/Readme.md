# NeoPixel LED Controll using Firebase

This project involves controlling a NeoPixel LED strip connected to an ESP32 using an Android app built with MIT App Inventor. The app allows users to generate and select different color codes, which are then sent to Firebase. The ESP32 retrieves the color codes from Firebase and changes the LED colors accordingly. This setup enables real-time control of the LED strip through the Android app, showcasing the integration of IoT, mobile development, and cloud-based data management.


![image](https://github.com/user-attachments/assets/0a6b8c9e-5e1b-47b5-92cb-622be5b8f7aa)

# Code

```
    #include <Arduino.h>
    #include <Adafruit_NeoPixel.h>
/***********************************************************************/
    #if defined(ESP32)
    #include <WiFi.h>
    #elif defined(ESP8266)
    #include <ESP8266WiFi.h>
    #endif
    #include <Firebase_ESP_Client.h>
    #include <addons/TokenHelper.h>
    #include <addons/RTDBHelper.h>
    #define WIFI_SSID "Embedded123"
    #define WIFI_PASSWORD "Embedded54321"
    #define API_KEY "AIzaSyC5HS3_VbGK9JkTgFh2pMS3CEddQoxiQDY"
    #define DATABASE_URL "fir-demo-c93bc-default-rtdb.firebaseio.com"
    #define USER_EMAIL "accidentdetection2024@gmail.com"
    #define USER_PASSWORD "Embedded54321"

    #define PIN       32    // Data pin of NeoPixels GPIO 32
    #define NUMPIXELS 10    // total number of NeoPixels attached
    #define DELAYVAL 100    // Delay time

    Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
    FirebaseData fbdo;
    FirebaseAuth auth;
    FirebaseConfig config;
/***********************************************************************/
    int count = 0 ;
    String msg;
/***********************************************************************/
    void Connect_WiFi();
    void Firebase_Store(String PATH,String MSG);
    String Firebase_getString(String PATH);
    int ExtractIntFromString(String,char);
/***********************************************************************/
    void setup()
    {
         pixels.begin();
         pixels.clear();
         Connect_WiFi(); 
    }
/***********************************************************************/
    void loop()
    {
      int r,g,b,i;
      if(WiFi.status() != WL_CONNECTED)
      {
         pixels.clear();
         Connect_WiFi();
      }
        if(Serial.available())
        {
            char x;
            x=Serial.read();
            if(x=='a')
            {
              Firebase_Store("/test/hai","hai");
            }
            else if(x=='b')
            {
              int z;
              msg = Firebase_getString("/RGB/DATA");
              Serial.println(msg);
              r=ExtractIntFromString(msg,'r');
              Serial.print("RED => ");
              Serial.println(r);

              g=ExtractIntFromString(msg,'g');
              Serial.print("Green => ");
              Serial.println(g);

              b=ExtractIntFromString(msg,'b');
              Serial.print("Blue => ");
              Serial.println(b);
            }
        } 


              msg = Firebase_getString("/RGB/DATA");
              Serial.println(msg);
              r=ExtractIntFromString(msg,'r');
              Serial.print("RED => ");
              Serial.println(r);

              g=ExtractIntFromString(msg,'g');
              Serial.print("Green => ");
              Serial.println(g);

              b=ExtractIntFromString(msg,'b');
              Serial.print("Blue => ");
              Serial.println(b);
              for(i=0;i<=NUMPIXELS;i++)
                pixels.setPixelColor(i, pixels.Color(r, g, b));
              pixels.show();
        delay(500);                   
    }
/***********************************************************************/
    void Connect_WiFi()
    {
      int i=0;
          Serial.begin(9600);
          delay(100); 
          WiFi.disconnect();
          delay(800); 
          Serial.println("Connecting to Wi-Fi"); 
          WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
          Serial.print("Connecting to Wi-Fi");
          delay(100);
          while (WiFi.status() != WL_CONNECTED)
          {
            pixels.setPixelColor(i, pixels.Color(255, 0, 0));
            pixels.show();
            Serial.print(".");
            delay(300);
            i++;
            if(i>NUMPIXELS)
            {
              i=0;
              pixels.clear();
            }
          }
          Serial.println();
          Serial.print("Connected with IP: ");
          Serial.println(WiFi.localIP());
          Serial.println();
          Serial.printf("Firebase Client v%s\n\n", FIREBASE_CLIENT_VERSION);
          config.api_key = API_KEY;
          auth.user.email = USER_EMAIL;
          auth.user.password = USER_PASSWORD;
          config.database_url = DATABASE_URL;
          config.token_status_callback = tokenStatusCallback;
          #if defined(ESP8266)
            fbdo.setBSSLBufferSize(2048 /* Rx buffer size in bytes from 512 - 16384 */, 2048 /* Tx buffer size in bytes from 512 - 16384 */);
          #endif
          Firebase.begin(&config, &auth);
          Firebase.reconnectWiFi(true);
          Firebase.setDoubleDigits(5);
          config.timeout.serverResponse = 10 * 1000;
          pixels.clear();
          for(i=0;i<=NUMPIXELS;i++)
            pixels.setPixelColor(i, pixels.Color(0, 255, 0));
          pixels.show();
    }
/***********************************************************************/
    void Firebase_Store(String PATH,String MSG)
    {
          Serial.print("Uploading data \" ");
          Serial.print(MSG);
          Serial.print(" \"  to the location \" ");
          Serial.print(PATH);
          Serial.println(" \"");
          Firebase.RTDB.setString(&fbdo, PATH, MSG);
          delay(50);
    }
/***********************************************************************/
    String Firebase_getString(String PATH)
    {
      String msg = (Firebase.RTDB.getString(&fbdo, PATH) ? fbdo.to<const char *>() : fbdo.errorReason().c_str());
      delay(50);
      return msg;
    }
/***********************************************************************/
    int ExtractIntFromString(String n,char x)
    {
      int num=0,i=0,j,r;
      for(i=0;n[i]!='\0';i++)
      {
        if(n[i]==x)
        {
          Serial.println("char found");
          for(j=i+1;n[j]>='0' && n[j]<='9';j++)
          {
            Serial.print(n[j]);
            r=n[j];
            num = num*10+(r-48);
          }
        }
      }
      Serial.println();
      return num;
    }
/***********************************************************************/


```
## Platformio configurations


```
; PlatformIO Project Configuration File
;
;   Build options: build flags, source filter
;   Upload options: custom upload port, speed and extra flags
;   Library options: dependencies, extra library storages
;   Advanced options: extra scripting
;
; Please visit documentation for the other options and examples
; https://docs.platformio.org/page/projectconf.html
; Library Links 
; Firebase => mobizt/Firebase Arduino Client Library for ESP8266 and ESP32@^4.4.14
            

[env:esp32doit-devkit-v1]
platform = espressif32
board = esp32doit-devkit-v1
framework = arduino
lib_deps =  mobizt/Firebase Arduino Client Library for ESP8266 and ESP32@^4.4.14
            adafruit/Adafruit NeoPixel@^1.12.3
monitor_speed = 9600
```


