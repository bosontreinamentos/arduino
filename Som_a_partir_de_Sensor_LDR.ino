int leitura;
float tom;
int altoFalante = 8;
int tempo = 10;

void setup() {
    // nada
    // Serial.begin(9600);
}
 
void loop() {
   // efetuar uma leitura no sensor:
   leitura = analogRead(A0);
   /*Serial.println(leitura);
   delay(60);*/
   // mapear o resultado da leitura do sensor para uma faixa de tons desejada:
   tom = map(leitura, 70, 1000, 30, 2500);
   // alterar o tom, tocando por 10 ms:
   tone(altoFalante, tom, tempo);
 }
