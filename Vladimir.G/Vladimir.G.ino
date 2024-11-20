//Author: Vladimir-G 20/11/24 - ../12/24



#include <Servo.h> // library

Servo myservo1; // asign name
Servo myservo2;
Servo myservo3;

int pos = 0; // starting position

void setup() 
{
  myservo1.attach(3);
  myservo2.attach(4);
  myservo3.attach(5); // asign pins
}

//change void loop to be measured when to move servo motors by read measurement of ultrasonic sensor
void loop() 
{
  for (pos = 0; pos <= 180; pos += 1) // change in position
  { 
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);

    delay(15); // wait 15 milliseconds            
  }
  for (pos = 180; pos >= 0; pos -= 1) // change in position with math
  {
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    delay(15); // wait 15 milliseconds       
  }
}


/*

*/
