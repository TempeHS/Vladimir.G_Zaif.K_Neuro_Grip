void ultrasonicrun() {
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
