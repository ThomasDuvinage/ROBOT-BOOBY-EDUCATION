#include <Arduino.h>
#include <Boby.h>

Boby robot;

void setup() {
  robot.init();
}

void loop() {
  robot.avancer(100);
  robot.tournerDroite(90);
}