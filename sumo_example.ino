#include <Wire.h>
#include <Zumo32U4.h>

// Uncomment the display you are using:

// For the OLED version:
//#include <Zumo32U4OLED.h>
//Zumo32U4OLED display;

// For the LCD version:
//#include <Zumo32U4LCD.h>
//Zumo32U4LCD display;

void setup() 
{
  //clear display and print test output
  display.clear();
  display.print(F("Hello Zumo!"));
}

void loop() 
{
  
}
