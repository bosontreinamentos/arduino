int pinoLED = 5; 

void setup()
{
  // Não é necessário setup neste projeto
}

void loop()
{
   for (int i=0; i <= 255; i++)
   {
      analogWrite(pinoLED, i);
      delay(45);
   }
}
