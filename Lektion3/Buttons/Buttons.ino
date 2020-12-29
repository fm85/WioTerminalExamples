  
/*
  Buttons.ino
  Copyright (C) 2020 by GBS St. Gallen, Inc. All rights reserved.
  Released under the therms of the GNU General Public License version 3
  or later.
*/

void setup() {
  Serial.begin(115200);
  pinMode(WIO_KEY_A, INPUT_PULLUP);
  pinMode(WIO_KEY_B, INPUT_PULLUP);
  pinMode(WIO_KEY_C, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(WIO_KEY_A) == LOW) {
    Serial.println("A Taste wurde gedrückt");
  }
  else if (digitalRead(WIO_KEY_B) == LOW) {
    Serial.println("B Taste wurde gedrückt");
  }
  else if (digitalRead(WIO_KEY_C) == LOW) {
    Serial.println("C Taste wurde gedrückt");
  }
  delay(200);
}
