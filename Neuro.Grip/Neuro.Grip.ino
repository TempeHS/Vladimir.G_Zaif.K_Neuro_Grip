/*
Vladimir:
https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Sensor_Kit/Servo_Motor
Servo 1 pin 3
Servo 2 pin 4
Servo 3 pin 5

Zaif:
https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Sensor_Kit/Ultrasonic_Ranger
US sensor pin 7
*/

#include <Servo.h>
#include "Ultrasonic.h"

Ultrasonic distanceSensor(7);

  myservo1.attach(3);
  myservo2.attach(4);
  myservo3.attach(5);

int pos = 0;

void setup()
{
  int Range;
  Range = distanceSensor.distanceRead();
  Serial.print(Range);
  Serial.print("cm");
}

void loop()
{

}



