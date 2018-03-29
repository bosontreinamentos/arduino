int valor;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valor = 30;
  if (valor == 30){
    Serial.println("Boson Treinamentos");
    delay(500);
  }
}
