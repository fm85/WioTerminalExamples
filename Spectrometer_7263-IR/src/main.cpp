#include <Arduino.h>
#include <TFT_eSPI.h>
#include <SPI.h>
#include"Histogram.h"
#include "AS726X.h"

AS726X sensor;

byte GAIN = 1;
byte MEASUREMENT_MODE = 2;

TFT_Histogram histogram=TFT_Histogram();
TFT_eSPI tft = TFT_eSPI(); 

void setup() {
  Wire.begin();
  Serial.begin(115200);
  sensor.begin(Wire, GAIN, MEASUREMENT_MODE);
  tft.init();
  histogram.initHistogram(&tft);                                             //Initialize histogram 
  histogram.notShowAxis();
  histogram.formHistogram("610nm",1,300,40,TFT_RED);                          //Input lable,NO,value(high),width,colour
  histogram.formHistogram("680nm",2,300,40,TFT_BLACK);
  histogram.formHistogram("730nm",3,300, 40,TFT_GREEN);
  histogram.formHistogram("760nm",4,300,40,TFT_BLUE);
  histogram.formHistogram("810nm",5,300,40,TFT_YELLOW);                        //Initialize histogram 
  histogram.formHistogram("860nm",6,300,40,TFT_ORANGE);
}

void loop() {
  //Near IR readings
  sensor.takeMeasurements();
  histogram.changeParam(1,"610nm",sensor.getCalibratedR(),TFT_RED);
  histogram.changeParam(2,"680nm",sensor.getCalibratedS(),TFT_BLACK);
  histogram.changeParam(3,"730nm",sensor.getCalibratedT(),TFT_GREEN);
  histogram.changeParam(4,"760nm",sensor.getCalibratedU(),TFT_BLUE);
  histogram.changeParam(5,"810nm",sensor.getCalibratedV(),TFT_YELLOW);
  histogram.changeParam(6,"860nm",sensor.getCalibratedW(),TFT_ORANGE);
  histogram.showHistogram();
  delay(3000);
}