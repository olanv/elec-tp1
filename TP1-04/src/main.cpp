#include <Arduino.h>

#define A_in A1
#define LED_1 6
#define LED_2 5
#define LED_3 4

int sensorValue = 0;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(A_in, INPUT);

  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(A_in);
  if (sensorValue<256)
    digitalWrite(LED_3, HIGH);
  else 
    digitalWrite(LED_3, LOW);

  if (sensorValue<512)
    digitalWrite(LED_2, HIGH);
  else 
    digitalWrite(LED_2, LOW);

  if (sensorValue<768)
    digitalWrite(LED_1, HIGH);
  else
    digitalWrite(LED_1, LOW);

  Serial.println(sensorValue);

  delay(200);

}