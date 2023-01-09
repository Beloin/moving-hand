#include <Arduino.h>

void setup() {
    // Setup SERVO PWM : https://portal.vidadesilicio.com.br/controle-de-potencia-via-pwm-esp32/
    Serial.begin(115200);
    Serial.println("Hello, ESP32!");
    pinMode(15, OUTPUT);
    ledcSetup(0, 50, 16);
    ledcAttachPin(15, 0);
}

void loop() {
// write your code here
}