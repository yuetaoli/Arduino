#include <Servo.h>
Servo myservo; 
int pos[6] = {10, 20, 30, 50, 60, 100};
void setup(){
	myservo.attach(9);
}
void loop(){
	for( int i = 0; i < 6; i ++){
		myservo.write( pos[i] );
		delay(500);
	}
	delay(500);
}