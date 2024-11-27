//Author: Vladimir-G 20/11/24 - ../12/24

#include <Servo.h> // library

Servo myservo1; // asign name
Servo myservo2;
Servo myservo3;

int pos = 0; // starting position

void setup() 
{
  servosetup();
}

//change void loop to be measured when to move servo motors by read measurement of ultrasonic sensor

void loop()
{
  servorun();
}


