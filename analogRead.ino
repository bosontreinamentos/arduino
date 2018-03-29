int entradaPotenciometro = A3
int LED = 10
int valor = 0
void setup() {
pinMode(LED, OUTPUT);
}
void loop() {
valor = analogRead(entradaPotenciometro);
analogWrite(LED, valor / 4)
}
