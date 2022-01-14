#include <Arduino.h>

// test with 2 UART ports
void setup() {
  Serial.begin(9600); //USART0
  Serial1.begin(9600); //USART1
}

void loop() {
  Serial.println("Hello from USART0!");
  Serial1.println("Hello from USART1!");
  delay(1000);
}
