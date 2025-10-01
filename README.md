# Informe: Verificación de funcionalidad ESP32
**Fecha:** 24 / 09 / 2025
**Autor:** Nayeli Constantina

## Objetivos
Verificar y documentar las siguientes funciones del ESP32:
1. Prender y apagar un LED conectado al ESP32.  
2. Conexión a una red Wi‑Fi.  
3. Funcionamiento de un servidor web simple que permita controlar el LED desde un navegador.

## Materiales
- Placa ESP32 (ej. ESP32 DevKit v1)  
- Cable USB  
- LED (opcional, ya que muchas placas tienen uno integrado en GPIO 2)  
- Resistencia 220 Ω (si usas LED externo)  
- Protoboard y cables  
- PC con Arduino IDE (o PlatformIO)

## Conexión / Diagrama
- Si usas LED externo: conectar ánodo a GPIO 2 a través de una resistencia de 220 Ω y cátodo a GND.  
- Si usas LED integrado, no necesitas cablear nada.

## Código fuente
El código fue organizado en **tres archivos** para mayor claridad:  

- `main.ino`: contiene `setup()` y `loop()`.  
- `wifi_setup.h`: maneja la conexión WiFi.  
- `webserver_setup.h`: maneja el servidor web y las rutas.  

Los archivos se encuentran en la carpeta `code/`.

## Procedimiento de prueba
1. Abrir `main.ino` en Arduino IDE.  
2. Completar `SSID` y `PASSWORD` en `wifi_setup.h`.  
3. Seleccionar placa ESP32 adecuada y puerto COM.  
4. Subir el programa.  
5. Abrir el Monitor Serie (115200 bps) y verificar la IP asignada.  
6. En un navegador, escribir `http://<IP>` y probar los botones Encender, Apagar y Alternar.  

## Resultados esperados
- El monitor serie muestra la conexión WiFi y la IP asignada.  
- La página web carga y permite encender/apagar el LED.  
- Las rutas `/on`, `/off`, `/toggle` funcionan correctamente.  

## Evidencias
Adjuntar las siguientes imágenes (carpeta `placeholders/`):  
- `img_01_serie_ip.jpg` — captura de la IP en Monitor Serie.  
- `img_02_navegador_root.jpg` — captura de la página web.  
- `img_03_led_on.jpg` — foto del LED encendido.  
- `img_04_led_off.jpg` — foto del LED apagado.  

## Conclusiones
La implementación realizada en el ESP32 permitió comprobar de manera satisfactoria el encendido y apagado de un LED, la conexión estable a una red WiFi y la creación de un servidor web básico para el control del dispositivo. Estos resultados demuestran la versatilidad del ESP32 como plataforma de desarrollo en aplicaciones de IoT, ya que integra tanto capacidades de procesamiento como de comunicación inalámbrica en un mismo módulo. Además, se comprobó que con un código sencillo y bien estructurado es posible desarrollar sistemas interactivos y escalables que pueden servir como base para proyectos más complejos, como el control de múltiples dispositivos o la integración con servicios en la nube.
