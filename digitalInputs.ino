int my_LED = 7;
void setup() {
  pinMode( my_LED, OUTPUT);
  Serial.begin( 9600 );
}

void loop() {
  int voltage;
  voltage = analogRead( 5 );
  int c = 0;
  while( c < 2 ){
    if( voltage > 1000 && c == 0){
      digitalWrite( my_LED, HIGH);
      c++;
      Serial.println( voltage );
    }
    if( voltage > 1000 && c == 1){
      digitalWrite( my_LED, LOW);
      c++;
    }
  }
  
  

}
