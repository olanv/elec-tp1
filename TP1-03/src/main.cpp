#include <Arduino.h>

#define A_in A1
#define LED 2

int sensorValue = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(A_in, INPUT);
}

void loop() {
  sensorValue = analogRead(A_in);

  if (sensorValue > 500) {
      digitalWrite(LED, HIGH);
      delay(3000);
      digitalWrite(LED, LOW);
  }
}