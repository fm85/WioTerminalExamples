int counter = 0;

void setup() {
  Serial.begin(115200);
  pinMode(WIO_KEY_A, INPUT_PULLUP);
  pinMode(WIO_KEY_B, INPUT_PULLUP);
  pinMode(WIO_KEY_C, INPUT_PULLUP);
}
 
void loop() {
  if (digitalRead(WIO_KEY_A) == LOW) {
    counter = counter + 1;
    Serial.println(counter);
  }
  if (digitalRead(WIO_KEY_B) == LOW) {
    counter = counter - 1;
    Serial.println(counter);
  }
  if (digitalRead(WIO_KEY_C) == LOW) {
    counter = 0;
    Serial.println(counter);
  }
  delay(200);
}
