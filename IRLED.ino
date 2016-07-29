int my_LED = 2;
void setup() {
  pinMode(my_LED, OUTPUT);
}

void loop() {
  digitalWrite(my_LED, HIGH);
  delay(5);
  digitalWrite(my_LED, LOW);
  delay(195);
}
