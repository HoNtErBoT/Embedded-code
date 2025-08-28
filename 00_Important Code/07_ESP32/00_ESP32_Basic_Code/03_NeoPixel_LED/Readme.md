# ESP32 NeoPixel LED Interface

NeoPixel is a type of smart LED light created by a company called Adafruit. Each tiny light can produce millions of colors and can be controlled individually using a single wire connected to a small computer like an Arduino. This makes it easy to create colorful and dynamic lighting effects for projects like decorative displays, costumes, or interactive artworks. NeoPixels are popular among hobbyists and makers because they are simple to use and can add impressive visual effects to many different creations.

![image](https://github.com/user-attachments/assets/9475701d-955a-425e-b8a8-dae0d9578f42)


```

#include <Adafruit_NeoPixel.h>

#define PIN       32    // Data pin of NeoPixels GPIO 32
#define NUMPIXELS 16    // total number of NeoPixels attached
#define DELAYVAL 500    // Delay time
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
 

void setup() 
{
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop() 
{
    pixels.clear();
    for(int i=0; i<NUMPIXELS; i++)
    { 
        pixels.setPixelColor(i, pixels.Color(0, 150, 0));
        pixels.show();
        delay(DELAYVAL);
    }
}

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
            

[env:esp32doit-devkit-v1]
platform = espressif32
board = esp32doit-devkit-v1
framework = arduino
lib_deps =  adafruit/Adafruit NeoPixel@^1.12.3
monitor_speed = 9600
```

# Working

![gif 5](https://github.com/user-attachments/assets/18864ca0-4f65-4e0e-86ce-9698b944566f)

