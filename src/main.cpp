#include <Arduino.h>
#include <Boby.h>

Boby robot;

void setup() {
  Serial.begin(9600);
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