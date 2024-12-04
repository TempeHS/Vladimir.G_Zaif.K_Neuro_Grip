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

/*#include <Servo.h>
#include "Ultrasonic.h"

Servo myservo1;
Servo myservo2;
Servo myservo3;

Ultrasonic distanceSensor(7);

myservo1.attach(3);
myservo2.attach(4);
myservo3.attach(5);
>>>>>>> Stashed changes

int pos = 0;

void setup()
{
  myservo1.attach(3);
  myservo2.attach(4);
  myservo3.attach(5);
  Serial.begin(9600);
}

void loop()
<<<<<<< HEAD

=======
>>>>>>> 9fb15f293fedc44de32a4f7e3d97a9fee7e50315
{
  long RangeInCentimeters;
  RangeInCentimeters = distanceSensor.MeasureInCentimeters();
  Serial.print(RangeInCentimeters);
  Serial.print("cm");

  if (distanceSensor(>=5))
  handclose();

    if (distanceSensor(<=5))
  handopen();
}
*/
#include <Servo.h>
#include "Ultrasonic.h"

// constants won't change
// const int TRIG_PIN  = 6;  // Arduino pin connected to Ultrasonic Sensor's TRIG pin
// const int ECHO_PIN  = 7;  // Arduino pin connected to Ultrasonic Sensor's ECHO pin
const int SERVO_PIN = 8; // Arduino pin connected to Servo Motor's pin
const int DISTANCE_THRESHOLD = 5; // centimeters

Ultrasonic distanceSensor(7);

Servo servo; // create servo object to control a servo

// variables will change:
float duration_us, distance_cm;

void setup() {
  Serial.begin (9600);       // initialize serial port
  servo.attach(SERVO_PIN);   // attaches the servo on pin 9 to the servo object
  servo.write(0);
}

void loop() {
  // generate 10-microsecond pulse to TRIG pin
  /*
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  */

  long distance_cm;
  distance_cm = distanceSensor.MeasureInCentimeters();
  if(distance_cm < DISTANCE_THRESHOLD)
  {
    servo.write(90); // rotate servo motor to 90 degree
  }
  else{
    servo.write(0);  // rotate servo motor to 0 degree
  }
  // print the value to Serial Monitor
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(50);
}

//adding commands

if ()
  OpenArm;

if ()
  CloseArm;

if ()
  HalfOpenArm;

if ()
  HalfCloseArm;