# Firebase String Data Storage and Retrieval using PlatformIO with the Mobizt Firebase Library
This project demonstrates how to store and read string data from Firebase using PlatformIO and the Mobizt Firebase library. The code is designed to extract integer values from the stored string data, making it useful for applications where you need to process numeric information embedded within text. This example is ideal for IoT or embedded systems projects that require efficient data management and retrieval from a cloud database.

## Key Features:
- **Wi-Fi Connection** : The project connects to a Wi-Fi network, with the credentials defined in the code. The Wi-Fi connection setup is essential for communicating with the Firebase database.

- **Firebase Integration** : The code uses Firebase Authentication to sign in with an email and password, and it is configured to interact with the Firebase Realtime Database using the API key and database URL.

- **Data Storage and Retrieval** : The project includes functions to store string data to a specific path in the Firebase Realtime Database and retrieve the string data from a given path.

- **Integer Extraction from Strings** : One of the unique features of this project is its ability to extract integer values embedded within the string data stored in Firebase. This can be particularly useful in scenarios where sensor data or command values are stored as part of a string.

- **Serial Interaction** : The code allows for interaction through the Serial monitor, where specific characters trigger data storage or retrieval. For example, sending 'a' stores a string in Firebase, while sending 'b' retrieves a string, processes it, and extracts integer values associated with specific characters ('r' for red, 'g' for green, and 'b' for blue).

![image](https://github.com/user-attachments/assets/853882df-32e7-4aa1-a1ef-63da3b190c70)

## Code ro read data from firebase
the below coad can be used to read and store a data to a firebase 
the above code can be able to extract intiger values from string
```
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

```
# database

![image](https://github.com/user-attachments/assets/9e725357-6df8-402f-be54-9cfd70c6ea39)

# pio file

```
[env:esp32doit-devkit-v1]
platform = espressif32
board = esp32doit-devkit-v1
framework = arduino
lib_deps =  mobizt/Firebase Arduino Client Library for ESP8266 and ESP32@^4.4.14
monitor_speed = 9600

```
