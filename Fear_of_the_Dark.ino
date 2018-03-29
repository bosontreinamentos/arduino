#include "pitches.h"
int falante = 8;
float bpm = 90;
int T;
int minima, seminima, seminimaAumentada, colcheia, semicolcheia;
int nota[] = {
 _D4, _A3, _A3, _D4, _D4, _E4, _E4, _F4, _F4, _E4, _E4, _D4, _D4, _E4, _E4,
 _C4, _G3, _G3, _C4, _C4, _D4, _D4, _E4, _E4, _D4, _D4, _C4, _C4, _E4, _C4,
 _D4, _A3, _A3, _D4, _D4, _E4, _E4, _F4, _F4, _E4, _E4, _D4, _D4, _E4, _E4,
 _C4, _G3, _G3, _C4, _C4, _D4, _D4, _E4, _E4, _D4, _D4, _C4, _C4, _E4, _C4,
 _A3, _A3, _E3, _E3, _A3, _A3, _B3, _B3, _C4, _C4, _B3, _B3, _A3, _A3, _B3, _B3,
 _G4, _G4, _D4, _D4, _G4, _G4, _A4, _A4, _B4, _B4, _A4, _A4, _G4, _G4, _B4, _G4,
 _A3, _A3, _E3, _E3, _A3, _A3, _B3, _B3, _C4, _C4, _B3, _B3, _A3, _A3, _B3, _B3,
 _F4, _F4, _C4, _C4, _F4, _F4, _G4, _G4, _A4, _A4, _G4, _G4, _F4, _F4, _A4,
 _F4
};

/* Tempos: 
1 = minima
2 = seminima
3 = seminima + colcheia
4 = colcheia
5 = semicolcheia
*/

int tempo[] ={
 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,    
 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 3, 2,
 1
};
void setup() {
 minima = round((1 / (bpm / 60)) * 1000 * 2);
 seminima = round((1 / (bpm / 60)) * 1000);
 seminimaAumentada = round((1 / (bpm / 60)) * 1500);
 colcheia = round((1 / (bpm / 60)) * 500);
 semicolcheia = round((1 / (bpm / 60)) * 250);
 // Serial.begin(9600); // para debug
}
void loop() {
 // Tocar cada nota durante o tempo especificado:
 for (int i = 0; i < 124; i++) {
   switch (tempo[i]) {
   case 1:
     T = minima;
     break;
   case 2:
     T = seminima;
     break;
   case 3:
     T = seminimaAumentada;
     break;
   case 4:
     T = colcheia; 
     break;
   case 5:
     T = semicolcheia;  
     break; 
 }
 /* Visualizando os tempos (para debug):
 Serial.println(minima);
 Serial.println(seminima);
 Serial.println(seminimaAumentada);
 Serial.println(colcheia);
 */
 tone(falante, nota[i], T);
 delay(T);
 }
}
