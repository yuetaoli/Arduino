int motor = 4;
void setup()
{
  pinMode(motor,OUTPUT); 
  Serial.begin(9600);
}
void loop(){
	analogWrite(motor, 200);
	Serial.println("a");
	delay(3000);
	analogWrite(motor, 50);
	delay(3000);
	analogWrite(motor, 0);
	delay(3000);
}