void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  blinkFunction(13, 10);/*the first number should be the pin number, the second should be the frequency it blinks. 
  the function name is blinkFunction*/
}
void blinkFunction(int pinNumber, double frequency){
  double delayTime = 500/frequency;
  digitalWrite(pinNumber, HIGH);
  delay(delayTime);
  digitalWrite(pinNumber, LOW);
  delay(delayTime);
}

