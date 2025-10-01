#include <WiFi.h>        // Librería para manejar la conexión WiFi
#include <WebServer.h>   // Librería para el servidor web

const char* ssid = "Nayco";      // Nombre de la red WiFi
const char* pass = "nayco028";   // Contraseña de la red WiFi

WebServer server(80);            // Servidor web en el puerto 80

// Función que devuelve una página HTML con formato
void handleRoot() {
  String html = R"rawliteral(
  <!DOCTYPE html>
  <html>
  <head>
    <meta charset="UTF-8">
    <title>Ficha de Presentación</title>
    <style>
      body { font-family: Arial, sans-serif; background-color: #f0f4f8; text-align: center; }
      .card {
        margin: 50px auto;
        padding: 20px;
        max-width: 400px;
        background: white;
        border-radius: 15px;
        box-shadow: 0px 4px 10px rgba(0,0,0,0.2);
      }
      h1 { color: #0077cc; }
      p { font-size: 16px; }
    </style>
  </head>
  <body>
    <div class="card">
      <h1>Mi Ficha de Presentación</h1>
      <p><b>Nombre:</b> Nayeli Constantina Labra Huaita</p>
      <p><b>Carrera:</b> Ingeniería Informática</p>
      <p><b>Intereses:</b> Desarrollo de software, bases de datos y aplicaciones embebidas</p>
    </div>
  </body>
  </html>
  )rawliteral";    // HTML embebido dentro del código (entre comillas raw literal)

  server.send(200, "text/html", html);  // Envía el HTML al cliente que lo solicite
}

void setup() {
  Serial.begin(115200);          // Inicializa la comunicación serie
  WiFi.begin(ssid, pass);        // Conexión a la red WiFi
  while (WiFi.status() != WL_CONNECTED) { // Espera conexión
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nIP: " + WiFi.localIP().toString()); // Muestra IP del ESP32

  server.on("/", handleRoot);    // Configura la ruta "/" para devolver la página HTML
  server.begin();                // Inicia el servidor
}

void loop() {
  server.handleClient();         // Atiende las peticiones de clientes
}
