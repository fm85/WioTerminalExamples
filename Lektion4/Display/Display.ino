#include "TFT_eSPI.h"
TFT_eSPI tft;
 
void setup() {
    unsigned int x, y;
    char c;
    byte sz;
    
    x = 0;
    y = 0;
    c = 'A';
    sz = 5;
    
    tft.begin();
    tft.fillScreen(TFT_WHITE);
    tft.drawChar(x,  y,  c,  TFT_RED,  TFT_GREEN, sz);
}
 
void loop() {}
