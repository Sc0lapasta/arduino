#include <Servo.h>

Servo servoMotor;

void setup() {
  servoMotor.attach(9);  // Collega il pin del servomotore al pin 9 di Arduino
}

void loop() {
  for (int angle = 0; angle <= 180; angle++) {  // Ruota il servomotore da 0 a 180 gradi
    servoMotor.write(angle);
    delay(0);  // Puoi regolare la velocità di rotazione aumentando o diminuendo il valore di delay
  }

  for (int angle = 180; angle >= 0; angle--) {  // Ruota il servomotore da 180 a 0 gradi
    servoMotor.write(angle);
    delay(0);
  }
}