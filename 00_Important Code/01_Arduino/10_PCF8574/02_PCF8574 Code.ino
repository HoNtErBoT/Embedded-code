#include <Wire.h>

void setup()
{
Wire.begin();
}

void loop()
{

Wire.beginTransmission(0x20);
Wire.write(0xFF);
Wire.endTransmission();
delay(1000);
Wire.beginTransmission(0x20);
Wire.write(0x00);
Wire.endTransmission();
delay(1000);
}
