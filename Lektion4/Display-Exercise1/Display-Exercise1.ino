#include "TFT_eSPI.h"
TFT_eSPI tft;
 
void setup() {
    tft.begin();
    tft.fillScreen(TFT_WHITE);
    
    //Pfeil y- Richtung: 
    tft.drawLine(10,10,10,319,TFT_BLACK);
    tft.fillTriangle(0,300,20,300,10,319,TFT_BLACK);
    tft.drawChar(25, 300,  'Y',  TFT_BLACK,  TFT_WHITE, 3);
    
    //Pfeil x- Richtung:
    tft.drawLine(10,10,239,10,TFT_BLACK);
    tft.fillTriangle(220,0,220,20,239,10,TFT_BLACK);
    tft.drawChar(220, 25,  'X',  TFT_BLACK,  TFT_WHITE, 3);
}
 
void loop() {}
