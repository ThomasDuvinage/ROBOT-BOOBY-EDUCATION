#include <Arduino.h>
#include <Boby.h>

Boby robot;

void setup() {
  robot.init();
}

void loop() {
  // Serial.println(robot.distance());

  if(robot.distance() >= 160){
    robot.avancer(10);
  }
  else
  {
    robot.avoid_obstacles(130);
  }
}