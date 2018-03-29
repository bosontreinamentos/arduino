int a = 20;
float b = 53.22;
unsigned int c = 50000;
boolean d = true;
String e = "Fabio";

void setup() {
  Serial.begin(9600);
}

void loop() {
      Serial.println(a);
      Serial.println(b);
      Serial.println(c);
      Serial.println(d);
      Serial.println(e);
    delay(1000);
} 
