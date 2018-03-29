// Incluir a biblioteca LCD:
#include <LiquidCrystal.h>

// Inicializar a biblioteca com os numeros dos pinos digitais
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
   // Configurar o número de colunas e linhas do LCD:
  lcd.begin(16, 2);
}

void loop() {
  //lcd.clear(); // Limpando a tela do LCD
  // Posicionar o cursor na coluna 16 e linha 0 (última coluna):
  lcd.setCursor(16, 0);
  // Texto a ser mostrado no LCD:
  lcd.print("Fabio dos Reis");
  // Posicionar cursor na segunda linha e última coluna:
  lcd.setCursor(16, 1);
  // Imprimir segunda mensagem:
  lcd.print("Boson Treinamentos");

  for (int coluna = 1; coluna <= 18; coluna++) {
    lcd.scrollDisplayLeft();
    delay(300); // Pausa entre os deslocamentos de letras
  }
  delay(1000); // Pausa antes de limpar a tela e reiniciar
  /* Fazendo rolagem do texto para a esquerda:
   for (int posicao = 0; posicao < 18; posicao++)
  {
    lcd.scrollDisplayLeft();
    delay(500);
  }*/
}
