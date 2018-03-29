void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int inicio = 1; inicio <= 200; inicio++) {
    Serial.println(inicio);
    delay(50);
  }
}
