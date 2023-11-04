#include <Arduino.h>

int myFunction(int, int);

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("Hello world!");
}

int myFunction(int x, int y) {
  return x + y;
}