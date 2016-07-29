int potentiometer = 3; 
int led = 9; 
 
void setup() {
  pinMode(potentiometer, INPUT);
  pinMode(led, OUTPUT);
}
 
void loop() {
  int sensorValue = analogRead(potentiometer);
  sensorValue = sensorValue/4; // convert from 0-1024 to 0-255
  analogWrite(led, sensorValue);
  delay(150);
}

