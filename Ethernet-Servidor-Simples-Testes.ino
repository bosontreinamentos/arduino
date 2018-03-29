#include <SPI.h>
#include <Ethernet.h>

//int pino = 0;

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };

//IPAddress ip(192, 168, 1, 51);
//byte gateway[] = { 192, 168, 1, 1 };
//byte subnet[] = { 255, 255, 255, 0 };

//EthernetServer servidor(80);
EthernetServer servidor(80);

void setup() {
  Serial.begin(9600);

  //Desativando SD Card:
  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);
  
  Ethernet.begin(mac);
  servidor.begin();
  
  Serial.print("O endereco IP do servidor e ");
  Serial.println(Ethernet.localIP());
  Serial.println(Ethernet.gatewayIP());
}

void loop() {
  EthernetClient cliente = servidor.available();
  if (cliente) {
    boolean linha_atual_branca = true;
    while (cliente.connected()) {
      if (cliente.available()) {
        char c = cliente.read();
        Serial.write(c);
        
        if (c == '\n' && linha_atual_branca) {
          cliente.println("HTTP/1.1 200 OK");
          cliente.println("Content-Type: text/html");
          cliente.println("Connection: close");
          cliente.println("Refresh: 5");
          cliente.println();
          cliente.println("<!DOCTYPE html>");
          cliente.println("<html lang='pt-br'>");
          cliente.println("<head>");
          cliente.println("<meta charset='UTF-8'>");
          cliente.println("<title>Servidor Web com Arduino</title>");
          cliente.println("</head>");
          cliente.println("<body>");
          cliente.println("<script>");
          cliente.println("alert('Bem-vindo à Bóson Treinamentos');");
          cliente.println("</script>");
          cliente.println("</body>");
          cliente.println("</html>");
          break;

          /* valor de saída do pino
          cliente.print(analogRead(pino));
          cliente.println("<br>");
          Serial.println(analogRead(pino));
          Serial.println(linha_atual_branca);*/
        }
      if (c == '\n') {
          // Iniciando uma nova linha
          linha_atual_branca = true;
      }
      else if (c != '\r') {
          // Há um caractere na linha atual
          linha_atual_branca = false;
      }
    }
  }
    // Tempo para o navegador receber os dados
    delay(1);
    // Fechar a conexão:
    cliente.stop();
 }
}
