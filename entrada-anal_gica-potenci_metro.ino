const int potenciometro = 0;
int valor = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
valor = analogRead(potenciometro);
Serial.println(valor);
delay(1000);
}
