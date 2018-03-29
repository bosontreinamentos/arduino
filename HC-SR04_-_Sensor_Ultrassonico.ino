/*
Sensor Ultrassônico HC-SR04
Fábio dos Reis
www.bosontreinamentos.com.br
*/
// definindo os números dos pinos
const int trigger = 8;
const int echo = 7;
// defines variables
long duracao;
int dist;

void setup() {
  pinMode(trigger, OUTPUT); // Configura o pino trigger como saída
  pinMode(echo, INPUT); // Configura o pino Echo como entrada.
  Serial.begin(9600); // Inicia a comunicação serial
}
void loop() {
  // Limpa o trigger
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  
  // Configurar o trigger para nível alto por 10 microssegundos
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  
  // Lê o pino de eco
  duracao = pulseIn(echo, HIGH);
  
  // Calcular a distância
  dist= duracao*0.034/2;
  
  // Mostrar a distância no monitor serial
  Serial.print("Distancia em cm: ");
  Serial.println(dist);
  
  // Aguardar 100ms antes da próxima leitura
  delay(100);
}
