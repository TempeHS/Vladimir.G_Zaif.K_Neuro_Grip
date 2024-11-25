//Author: Zaif K
/*
  Purpose: Basic example of the Seead Ultrasonic Ranger module
  Notes: Connect to a digital PIN  7
  Source: https://wiki.seeedstudio.com/Grove-Ultrasonic_Ranger/
  Library Source: https://github.com/Seeed-Studio/Seeed_Arduino_UltrasonicRanger
*/

//Starts to initiate ultrasonic sensor
#include "Ultrasonic.h"

Ultrasonic distanceSensor(7);
void setup()
{
 Serial.begin(9600);
}
//Starts void-loop, which initiates the output as it follows
void loop()
{

 long RangeInCentimeters;
 long RangeInInches;

 Serial.println("The distance to obstacles in front is: ");

 RangeInCentimeters = distanceSensor.MeasureInCentimeters(); //two measurements should keep an interval
 Serial.print(RangeInCentimeters); //0~400cm
 Serial.println(" cm");
 delay(250); //wait 250 milliseconds
 

 RangeInInches = distanceSensor.MeasureInInches();
 Serial.print(RangeInInches);//0~157 inches
 Serial.println(" inch");
 delay(250);
}

/*
Procedure:
Step 2. Connect Ultrasonic Ranger to port D7 of Grove-Base Shield.

Step 3. Plug Grove - Base Shield into Seeeduino.

Step 4. Connect Seeeduino to PC via a USB cable.

*/

