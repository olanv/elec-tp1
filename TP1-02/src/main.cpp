#include <Arduino.h>

#define OUT_PU_LED 2
#define OUT_PD_LED 3
#define IN_PD_LED 6
#define IN_PU_LED 5

int val_pu = 0;
int val_pd = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(OUT_PU_LED, OUTPUT);
  pinMode(OUT_PD_LED, OUTPUT);
  pinMode(IN_PU_LED, INPUT);
  pinMode(IN_PD_LED, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val_pu = digitalRead(IN_PU_LED);  
  val_pd = digitalRead(IN_PD_LED);
  digitalWrite(OUT_PU_LED, val_pu);
  digitalWrite(OUT_PD_LED, val_pd);
}