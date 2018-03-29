const int potenciometro = 0;
int valor = 0.0;
int valor_mapeado;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
valor = analogRead(potenciometro);
valor_mapeado = map(valor,0,1023,0,255);
Serial.println(valor_mapeado);
delay(500);
}
