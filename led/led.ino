// Definimos el pin del LED azul en el ESP32.
const int ledPin = 2;  

void setup() {
  // Inicializa la comunicación serie para ver mensajes en el Monitor Serie
  Serial.begin(115200);  

  // Configura el pin del LED como salida (OUTPUT),
  // para poder encenderlo y apagarlo desde el código.
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  // Enciende el LED (HIGH = 3.3V en el pin)
  digitalWrite(ledPin, HIGH);  
  Serial.println("LED encendido");  // Mensaje al Monitor Serie
  delay(1000);                      // Espera 1 segundo

  // Apaga el LED (LOW = 0V en el pin)
  digitalWrite(ledPin, LOW);   
  Serial.println("LED apagado");    // Mensaje al Monitor Serie
  delay(1000);                      // Espera 1 segundo
}
