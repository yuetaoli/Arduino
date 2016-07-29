int my_LED = 3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(my_LED, OUTPUT);
  
}
void loop() {
  // put your main code here, to run repeatedly:
    for(int i = 0; i < 255; i ++){
      analogWrite(my_LED, i);
      Serial.println( i );
      delay(3.9);
    }
    for(int i = 255; i > 0; i --){
      analogWrite(my_LED, i);
      Serial.println( i );
      delay(3.9);
    }
}
  
