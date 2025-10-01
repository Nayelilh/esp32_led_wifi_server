#include <WiFi.h>        // Librería para manejar la conexión WiFi en ESP32
#include <WebServer.h>   // Librería para crear un servidor web sencillo

const char* ssid="Nayco";        // Nombre de la red WiFi a la que se conectará
const char* pass="nayco028";     // Contraseña de la red WiFi

WebServer server(80);            // Se crea un servidor web en el puerto 80 (HTTP por defecto)

// Función que responde cuando alguien accede a la raíz ("/") del servidor
void handleRoot(){ 
  server.send(200, "text/plain", "Hola desde ESP32");  // Envía texto plano al navegador
}

void setup(){
  Serial.begin(115200);          // Inicializa la comunicación serie para depuración
  WiFi.begin(ssid, pass);        // Inicia la conexión WiFi con los datos proporcionados
  while (WiFi.status()!=WL_CONNECTED){ // Espera hasta que se conecte al WiFi
    delay(500); 
    Serial.print(".");           // Imprime puntos mientras intenta conectarse
  }
  Serial.println("\nIP: " + WiFi.localIP().toString()); // Muestra la IP asignada al ESP32
  server.on("/", handleRoot);    // Define que al acceder a "/" se ejecute la función handleRoot
  server.begin();                // Inicia el servidor web
}

void loop(){ 
  server.handleClient();         // Atiende las peticiones de los clientes web
}
