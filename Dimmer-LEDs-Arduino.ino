int brilho = 0;
const int LED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  analogWrite(LED, 0);
}

void loop(){
  if (Serial.available()) { 
    brilho = Serial.parseInt();
    Serial.read();
  }
  if (brilho >= 0) {
    analogWrite(LED, brilho);
  }
}
