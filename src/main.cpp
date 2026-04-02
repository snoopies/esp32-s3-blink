#include <Arduino.h>

// LED引脚定义
// ESP32-S3 DevKitC-1 通常使用 GPIO 2 或 GPIO 15 作为内置LED
#define LED_PIN 38

void setup() {
  // 初始化串口
  Serial.begin(115200);
  
  // 设置LED引脚为输出
  pinMode(LED_PIN, OUTPUT);
  
  Serial.println("ESP32-S3 LED Blink Started!");
  Serial.println("LED Pin: " + String(LED_PIN));
}

void loop() {
  // 点亮LED
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED ON");
  delay(1000);  // 等待1秒
  
  // 熄灭LED
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED OFF");
  delay(1000);  // 等待1秒
}
