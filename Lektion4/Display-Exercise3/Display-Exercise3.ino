#include "TFT_eSPI.h"
TFT_eSPI tft;

bool goodMood = true; //Verhindert mehrfachen Bildaufbau

void setup() {
    tft.begin();
    pinMode(WIO_KEY_A, INPUT_PULLUP);
    pinMode(WIO_KEY_B, INPUT_PULLUP);
    pinMode(WIO_KEY_C, INPUT_PULLUP);
    
    tft.fillScreen(TFT_WHITE);
    
    //Pfeil y- Richtung: 
    tft.drawLine(10,10,10,319,TFT_BLACK);
    tft.fillTriangle(0,300,20,300,10,319,TFT_BLACK);
    tft.drawChar(25, 300,  'Y',  TFT_BLACK,  TFT_WHITE, 3);
    
    //Pfeil x- Richtung:
    tft.drawLine(10,10,239,10,TFT_BLACK);
    tft.fillTriangle(220,0,220,20,239,10,TFT_BLACK);
    tft.drawChar(220, 25,  'X',  TFT_BLACK,  TFT_WHITE, 3);

    //Smiley 
    tft.fillCircle(120, 160, 80, TFT_YELLOW);   //Kopf
    tft.fillEllipse(100, 140, 5,10, TFT_BLACK); //linkes Auge
    tft.fillEllipse(140, 140, 5,10, TFT_BLACK); //rechtes Auge
    
    tft.fillEllipse(120,190,50,20,TFT_RED);    //Lippen neu zeichnen (gute Laune)
    tft.fillEllipse(120,170,50,20,TFT_YELLOW); //Lippen neu zeichnen (gute Laune)
}
 
void loop() {
   if (digitalRead(WIO_KEY_A) == LOW) {
      if(!goodMood){ //Verhindert mehrfachen Bildaufbau
          tft.fillEllipse(120,190,50,20,TFT_YELLOW); //Lippen aus Tasterstellung B löschen
          tft.fillEllipse(120,190,50,20,TFT_RED);    //Lippen neu zeichnen (gute Laune)
          tft.fillEllipse(120,170,50,20,TFT_YELLOW); //Lippen neu zeichnen (gute Laune)
          goodMood = true; //Verhindert mehrfachen Bildaufbau
      }
   }
   
   if (digitalRead(WIO_KEY_B) == LOW) {
      if(goodMood){ //Verhindert mehrfachen Bildaufbau
          tft.fillEllipse(120,190,50,20,TFT_YELLOW); //Lippen aus Tasterstellung A löschen
          tft.fillEllipse(120,190,50,20,TFT_RED);    //Lippen neu zeichnen (schlechte Laune)
          tft.fillEllipse(120,210,50,20,TFT_YELLOW); //Lippen neu zeichnen (schlechte Laune)
          goodMood = false; //Verhindert mehrfachen Bildaufbau
      }
   }
}
