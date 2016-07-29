#include <Servo.h>
int potentiometer = 3; 
Servo myservo; 
void setup(){
	myservo.attach(9);
	pinMode(potentiometer, INPUT);
	Serial.begin( 9600 );
}
void loop(){
	float sensorValue = analogRead(potentiometer);
  	sensorValue = sensorValue/5.7; // convert from 0-1024 to 0-180
  	Serial.println( (int)sensorValue );
  	myservo.write( sensorValue );  	
  	delay(50);
}