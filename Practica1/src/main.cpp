#include <Arduino.h>

int led = 1;

void setup() { 
  Serial.begin(115200);             
  pinMode(led, OUTPUT);     
}

void loop() {
  digitalWrite(led, HIGH);
  Serial.println("led on");   
  delay(1000);               
  digitalWrite(led, LOW);
  Serial.println("led off");     
  delay(1000);               
}