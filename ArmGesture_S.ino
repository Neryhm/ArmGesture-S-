#include <Servo.h>
#include "I2Cdev.h"
#include "MPU6050_6Axis_MotionApps20.h"
//SERVO
Servo servo1;  // 360-degree servo
Servo servo2;  // 360-degree servo
Servo servo3;  // 180-degree servo

//Potentiometers
int pot1 = A0;
int pot2 = A1;
int pot3 = A2;

void setup() {
  Serial.begin(9600);
  // attach the servos to their respective pins
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
}

void loop() {
  int pot1_value = analogRead(pot1);
  int pot2_value = analogRead(pot2);
  int pot3_value = analogRead(pot3);
  servo1.write(pot1_value);
  servo2.write(pot2_value);
  servo3.write(pot3_value);
}