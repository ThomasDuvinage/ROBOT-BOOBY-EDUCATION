#include <Arduino.h>
#include <Boby.h>

Boby robot;

void setup() {
  Serial.begin(9600);
  robot.init();
}

void loop() {
  robot.avancer(20);
  Serial.println(robot.distance());
}