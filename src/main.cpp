#include <Arduino.h>

#define LED_PIN 30

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // เปิดไฟ
  delay(500);                  // รอ 0.5 วินาที
  digitalWrite(LED_PIN, LOW);  // ปิดไฟ
  delay(500);
}
