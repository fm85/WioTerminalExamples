/*
  BlinkBlueLED-Exercise2.ino

  Copyright (C) 2020 by GBS St. Gallen, Inc. All rights reserved.
  Released under the therms of the GNU General Public License version 3
  or later.
*/
byte delayTime = 50;
const unsigned int LED_BLUE = 13;

void setup() {
  pinMode(LED_BLUE, OUTPUT);
}

void loop() {
  digitalWrite(LED_BLUE, HIGH);   
  delay(delayTime);
  digitalWrite(LED_BLUE, LOW);    
  delay(delayTime);
}
