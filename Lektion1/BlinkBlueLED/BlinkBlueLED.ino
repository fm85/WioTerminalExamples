/*
  BlinkBlueLED.ino

  Copyright (C) 2020 by GBS St. Gallen, Inc. All rights reserved.
  Released under the therms of the GNU General Public License version 3
  or later.
*/

const unsigned int LED_BLUE = 13;

void setup() {
  pinMode(LED_BLUE, OUTPUT);
}

void loop() {
  digitalWrite(LED_BLUE, HIGH);   
  delay(500); //500 ms
  digitalWrite(LED_BLUE, LOW);    
  delay(500); //500 ms
}
