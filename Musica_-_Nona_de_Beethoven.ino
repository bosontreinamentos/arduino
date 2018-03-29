#include "pitches.h"

int falante = 8;
float bpm = 90;
int T;
int minima, seminima, seminimaAumentada, colcheia;

int nota[] = {
 _B4, _B4, _C5, _D5, _D5, _C5, _B4, _A4, _G4, _G4, _A4, _B4, _B4, _A4, _A4,
 _B4, _B4, _C5, _D5, _D5, _C5, _B4, _A4, _G4, _G4, _A4, _B4, _A4, _G4, _G4,
 _A4, _A4, _B4, _G4, _A4, _B4, _C5, _B4, _G4, _A4, _B4, _C5, _B4, _A4, _G4, _A4, _D4,
 _B4, _B4, _C5, _D5, _D5, _C5, _B4, _A4, _G4, _G4, _A4, _B4, _A4, _G4, _G4
};

int tempo[] ={
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 1, 4,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 1, 4,
 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2,
 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 1, 4
};

void setup() {
 minima = round((1 / (bpm / 60)) * 1000 * 2);
 seminima = round((1 / (bpm / 60)) * 1000);
 seminimaAumentada = round((1 / (bpm / 60)) * 1500);
 colcheia = round((1 / (bpm / 60)) * 500);
 // Serial.begin(9600);
}
void loop() {
 // Tocar cada nota durante o tempo especificado:
 for (int i = 0; i < 62; i++) {
   switch (tempo[i]) {
    case 1:
      T = colcheia;
      break;
    case 2:
      T = seminima;
      break;
    case 3:
      T = seminimaAumentada;
      break;
     case 4:
      T = minima;  
  }
  /* Visualizando os tempos:
  Serial.println(minima);
  Serial.println(seminima);
  Serial.println(seminimaAumentada);
  Serial.println(colcheia);
  */
   tone(falante, nota[i], T);
   delay(T);
 }
}
