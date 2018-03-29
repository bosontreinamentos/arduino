int LED1 = 2;
int LED2 = 4;
int LED3 = 7;
int LED4 = 9;
int vezes = 1;
void setup()
{
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
}
void loop()
{
   while (vezes <= 5)
   {
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(100);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(100);
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED3, LOW);
    delay(100);
    digitalWrite(LED4, HIGH);
    delay(100);
    digitalWrite(LED4, LOW);
    delay(100);
    vezes++;
    }
}
