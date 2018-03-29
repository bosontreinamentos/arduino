const int pino = 13;
int valor;

void setup() {
  pinMode(pino, OUTPUT);
}

void loop() {
  valor = 100;
  if (valor > 100){
    digitalWrite(pino, HIGH);
  }
  else {
    digitalWrite(pino, LOW);
  }
}
