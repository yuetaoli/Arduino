int my_LED = 3;
int boundary = 255;
int b = 0;
void setup() {
  pinMode(my_LED, OUTPUT);
  
}
void loop() {
  while(b < 20){
    for(int a = 0; a < 2; a ++){
      for(int i = 0; i < boundary; i +=5){
        analogWrite(my_LED, i);
        Serial.println( i );
        delay(3);
      }
      for(int i = boundary; i > 0; i -=5){
        analogWrite(my_LED, i);
        Serial.println( i );
        delay(3);
      }
    }
    delay(750);
    boundary -= 12;
    b++;
  }
}
  
