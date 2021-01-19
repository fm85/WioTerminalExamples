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
  if (digitalRead(WIO_KEY_B) == LOW) {
    Serial.println("B Taste wurde gedrückt");
  }
  if (digitalRead(WIO_KEY_C) == LOW) {
    Serial.println("C Taste wurde gedrückt");
  }
  delay(200);
}
