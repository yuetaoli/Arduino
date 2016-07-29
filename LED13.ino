int my_LED = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(my_LED, OUTPUT);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(my_LED, HIGH);
  delay(1000);
  digitalWrite(my_LED, LOW);
  delay(1000);
}
  
