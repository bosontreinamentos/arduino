const int LED1 = 3;
const int LED2 = 5;
const int LED3 = 9;
const int LED4 = 10;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

}

void loop() {
  piscar(LED1, 500);
  piscar(LED2, 500);
  piscar(LED3, 500);
  piscar(LED4, 500);
}

void piscar(int pino, int tempo)
{
  digitalWrite(pino, HIGH);
  delay(tempo);
  digitalWrite(pino, LOW);
  delay(tempo);
}

