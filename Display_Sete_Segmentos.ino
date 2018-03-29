// Matriz de bits para representar os números de 0 a 9:
int numero[11][8] = { // 11 linhas, 8 colunas
  { 1,1,1,1,1,1,0,0 }, //0
  { 0,1,1,0,0,0,0,0 }, //1
  { 1,1,0,1,1,0,1,0 }, //2
  { 1,1,1,1,0,0,1,0 }, //3
  { 0,1,1,0,0,1,1,0 }, //4
  { 1,0,1,1,0,1,1,0 }, //5
  { 0,0,1,1,1,1,1,0 }, //6
  { 1,1,1,0,0,0,0,0 }, //7
  { 1,1,1,1,1,1,1,0 }, //8
  { 1,1,1,0,0,1,1,0 }, //9
  { 0,0,0,0,0,0,0,1 }  //ponto decimal
};

// Configurar os pinos digitais associados a cada segmento:
const int segmentos[8] = { 2,3,4,5,6,7,8,9 };
// 2 = segmento a
// 3 = segmento b
// 4 = segmento c
// 5 = segmento d
// 6 = segmento e
// 7 = segmento f
// 8 = segmento g
// 9 = ponto decimal

void setup() {
  // Configurando os pinos de cada segmento para saída:
  for (int i = 0; i <= 7; i++) {
    pinMode(segmentos[i], OUTPUT);
  }
}

void loop() {
  // Displays de catodo comum: acendem com valor 1 nos
  // pinos digitais
  // chamar função mostraNumero, que exibe os numeros
  // em sequência a cada 1 segundo:
  for (int i = 0; i <=10; i++) {
    mostraNumero(i);
    delay(500);
  }
}

// Implementando a função mostraNumero, que exibe os
// numeros em sequência a cada 1 segundo:
void mostraNumero(int valor) {
  int pino = 2; // começar contagem no pino 2
  for (int i = 0; i < 8; i++) {
    digitalWrite(pino, numero[valor][i]);
    pino++;
  }
}

