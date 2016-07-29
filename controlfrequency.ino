int potentiometer = 3; 
int led = 9; 
 
void setup() {
  pinMode(potentiometer, INPUT);
  pinMode(led, OUTPUT);
}
 
void loop() {
  int sensorValue = analogRead(potentiometer);
  //sensorValue = sensorValue; // convert from 0-1024 to 0-255
  digitalWrite(led, HIGH);
  delay(sensorValue);
  digitalWrite(led, LOW);
  delay(sensorValue);
  //delay(150);
}

