#include <Arduino.h>
/***********************************************************************/
    #if defined(ESP32)
    #include <WiFi.h>
    #elif defined(ESP8266)
    #include <ESP8266WiFi.h>
    #endif
    #include <Firebase_ESP_Client.h>
    #include <addons/TokenHelper.h>
    #include <addons/RTDBHelper.h>
    //#define WIFI_SSID "GNXS-3D42F0"
    //#define WIFI_PASSWORD "BC62D23D42F0"
    #define WIFI_SSID "Embedded123"
    #define WIFI_PASSWORD "Embedded54321"
    #define API_KEY "AIzaSyC5HS3_VbGK9JkTgFh2pMS3CEddQoxiQDY"
    #define DATABASE_URL "fir-demo-c93bc-default-rtdb.firebaseio.com"
    #define USER_EMAIL "accidentdetection2024@gmail.com"
    #define USER_PASSWORD "Embedded54321"
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
         Connect_WiFi(); 
    }
/***********************************************************************/
    void loop()
    {
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
              z=ExtractIntFromString(msg,'r');
              Serial.print("RED => ");
              Serial.println(z);

              z=ExtractIntFromString(msg,'g');
              Serial.print("Green => ");
              Serial.println(z);

              z=ExtractIntFromString(msg,'b');
              Serial.print("Blue => ");
              Serial.println(z);
            }
        }                    
    }
/***********************************************************************/
    void Connect_WiFi()
    {
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
            Serial.print(".");
            delay(300);
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