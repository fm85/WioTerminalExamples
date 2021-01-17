void setup() {
  Serial.begin(115200);
  pinMode(WIO_KEY_A, INPUT_PULLUP);
}
 
void loop() {
  if (digitalRead(WIO_KEY_A) == LOW) {
    Serial.println("A Taste wurde gedrückt");
  }
  delay(200);
}
