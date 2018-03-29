const int qtdeLEDs = 10;
const int pinosLEDs[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
const int pinoPotenc = 0;

int potenciometro = 0;
int bargraph = 0;

void setup() {
  for (int i = 0; i <= qtdeLEDs; i++) {
    pinMode(pinosLEDs[i], OUTPUT);
  }
}

void loop() {
  potenciometro = analogRead(pinoPotenc);
  bargraph = map(potenciometro, 0, 1023, 0, 10);
  for (int i = 0; i <= qtdeLEDs; i++) {
    if (i < bargraph) {
      digitalWrite(pinosLEDs[i], HIGH);
    }
    else {
      digitalWrite(pinosLEDs[i], LOW);
    }
  }
}
