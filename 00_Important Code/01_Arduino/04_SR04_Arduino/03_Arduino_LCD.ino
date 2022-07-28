//                                       http://electronicshobbycorner.blogspot.in
//                                       Rajeev
//                                       

//  INTERFACING 16*2 lcd WITH ARDUINO 
//  LCD         ARDUINO
//   RS         2
//   EN         3
//   D4         4
//   D5         5
//   D6         6
//   D7         7                             



#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
void setup() 
{
     lcd.begin(16, 2);
     lcd.print("hello, world!");
     delay(1000);
     lcd.clear();
}

void loop()
{
 int a=20;
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(5, 0);
  lcd.print(millis()/1000);
  lcd.setCursor(5, 1);
  lcd.print(a);
 
}
