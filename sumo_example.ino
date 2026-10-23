#include <Wire.h>
#include <Zumo32U4.h>

// Uncomment both lines for the display you are using:

// For the OLED version:
//#include <Zumo32U4OLED.h>
//Zumo32U4OLED display;

// For the LCD version:
//#include <Zumo32U4LCD.h>
//Zumo32U4LCD display;

//variables
Zumo32U4Buzzer buzzer;

void setup() 
{
  //clear display and print test output
  display.clear();
  display.print(F("Hello!"));

  //wait for 5 seconds
  startupDelay();
}

void loop() 
{
// setSpeeds(int16_t leftSpeed, int16_t rightSpeed) inputs from -400 to 400 for each number

  
}

void startupDelay()
{
  buzzer.playNote(NOTE_C(5), 200, 15); // short beep
  delay(5000);                          // wait 5 seconds
  buzzer.playNote(NOTE_G(5), 300, 15); // start beep
}
