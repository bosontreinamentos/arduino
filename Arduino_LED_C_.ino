char estado = '0';
const int LED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop(){
  if (Serial.available() > 0) { 
    estado = Serial.read();
  }

  if (estado == '1'){ 
    digitalWrite(LED, HIGH);
  }

  if (estado == '0'){ 
    digitalWrite(LED, LOW);
  }
}
