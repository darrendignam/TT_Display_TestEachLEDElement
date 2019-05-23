/* ***************************************************************************************************** *\
**     TickerTape LED Testing Firmware                                                                   **
**     (c) 2019 Darren Dignam                                                                            **
**                                                                                                       **
**     Use this sketch to help identify problems with the board.                                         **
**                                                                                                       **
\* ***************************************************************************************************** */
#include "LED_Display_Wrapper.h"
LED_Display_Wrapper LEDdisplay = LED_Display_Wrapper();

void setup() {
  Serial.begin(115200);
  Serial.println("Tickertape Display Test routines. Version 0.1");
  Serial.println();  
}

void loop() {
  Serial.println("Blink All LEDs.");
  for(int x = 0; x<7; x++){
    LEDdisplay.BLINK(); delay(300);  
  }

  Serial.println("Blink Each LED in turn.");
  for(int x=0; x<=6; x++){
      LEDdisplay.writeDigitRaw(x, 0b0000000000000000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000000000000001);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000000000000010);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000000000000100);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000000000001000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000000000010000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000000000100000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000000001000000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000000010000000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000000100000000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000001000000000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000010000000000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0000100000000000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0001000000000000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0010000000000000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b0100000000000000);
      LEDdisplay.writeDisplay();delay(300);
      LEDdisplay.writeDigitRaw(x, 0b1000000000000000);     
  }
}
