const int LED1 = 3;
const int LED2 = 5;
const int LED3 = 9;
const int LED4 = 10;

int brilho = 0;
int i = 1;

void setup() {
  

}

void loop() {
  if (brilho > 255)
  {
    i = -1;
  }
  else if (brilho < 1)
  {
    i = 1;
  }
brilho = brilho + i;
analogWrite(LED1, brilho);
analogWrite(LED2, brilho);
analogWrite(LED3, brilho);
analogWrite(LED4, brilho);
delay(10);
}
