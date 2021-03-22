void setup() {
    pinMode(WIO_LIGHT, INPUT);
    Serial.begin(115200);
}
 
void loop() {
    unsigned int lightIntensity;
    lightIntensity = analogRead(WIO_LIGHT);
    Serial.print("Lichtstärke: ");
    Serial.println(lightIntensity);
    delay(200);
}
