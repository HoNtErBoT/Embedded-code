
#include <Adafruit_NeoPixel.h>

#define PIN       32    // Data pin of NeoPixels GPIO 32
#define NUMPIXELS 10    // total number of NeoPixels attached
#define DELAYVAL 100    // Delay time
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
