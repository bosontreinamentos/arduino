// Usando funções de manipulação de bits
int x = 0;
int y = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Valor inicial de x: ");
  Serial.println(x);
  y = bitSet(x, 2);
  Serial.print("Valor de x apos configurar bit na pos. 2: ");
  Serial.println(y);
  Serial.print("Valor em binario: ");
  Serial.println(x, BIN);
  Serial.print("Verificando o bit na pos. 6: ");
  Serial.println(bitRead(x, 6));
  Serial.print("Valor em binario: ");
  Serial.println(x, BIN);
  Serial.print("Alterando o bit na pos. 6 e verificando novamente: ");
  bitWrite(x, 6, 1);
  Serial.println(bitRead(x, 6));
  Serial.print("Valor em binario: ");
  Serial.println(x, BIN);

  Serial.print("Valor atual do numero: ");
  Serial.println(x);
  Serial.print("Valor em binario: ");
  Serial.println(x, BIN);

  Serial.print("Limpando todos os bits do numero: ");
  for (int i = 0; i < 8; i++) {
    bitClear(x, i);
  }
  Serial.println(x);
  Serial.println();
  delay(200000);
}
