# Verificación de Funcionalidad ESP32

**Fecha:** 24 / 09 / 2025
**Autor:** Nayeli Constantina

---

## 📌 Objetivos

Verificar y documentar las siguientes funciones del ESP32:

1. Encendido y apagado de un LED.
2. Conexión a una red Wi-Fi.
3. Funcionamiento de un servidor web simple que permita controlar el LED desde un navegador.

---

## 🔧 Materiales

* ESP32 DevKit v1 (u otra variante)
* Cable USB
* Protoboard
* PC con **Arduino IDE**

---

## ⚡ Conexión / Diagrama

* **LED integrado**: no requiere conexión adicional.

---

## 💻 Código fuente

El código se encuentra dividido en **tres archivos principales**:

* `/wifi` -> `wifi.ino` → manejo de la conexión Wi-Fi.
* `/server` -> `server.ino` → configuración del servidor web y las rutas.
* `/led` -> `led.ino` → control de encendido y apagado del LED.

---

## ▶️ Procedimiento de prueba

1. Abrir los archivos `.ino` en Arduino IDE.
2. Completar las credenciales (`SSID` y `PASSWORD`) en `wifi.ino`.
3. Seleccionar la placa **ESP32** y el puerto COM correspondiente.
4. Subir el programa al ESP32.
5. Abrir el **Monitor Serie** (115200 bps) para verificar la conexión Wi-Fi y la IP asignada.
6. En un navegador, ingresar `http://<IP>` y probar el control del LED desde la interfaz web.

---

## ✅ Resultados esperados

* El Monitor Serie muestra la conexión a Wi-Fi y la IP obtenida.
* La página web carga correctamente y permite **encender/apagar** el LED.
* Las rutas `/on`, `/off`, `/toggle` responden de forma adecuada.

---

## 📷 Evidencias

En la carpeta `capturas/` se incluyen las siguientes imágenes:

* `imagen_ficha_presentacion.png` → página web cargada en el navegador.
* `img_coneccion_wifi.jpeg` → captura de la IP en Monitor Serie.
* `imagen_led_encendido.jpeg` → LED encendido.
* `imagen_led_apagado.jpeg` → LED apagado.

---

## 📌 Conclusiones

La implementación realizada en el ESP32 permitió verificar de manera satisfactoria:

* El **encendido y apagado de un LED**.
* La **conexión estable a una red Wi-Fi**.
* El **funcionamiento de un servidor web básico**.

Estos resultados demuestran la versatilidad del **ESP32** como plataforma IoT, ya que combina procesamiento y conectividad inalámbrica en un solo módulo. Además, se comprobó que con código sencillo y modular es posible desarrollar sistemas interactivos y escalables, que pueden servir como base para proyectos más complejos.
