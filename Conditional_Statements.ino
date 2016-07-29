//char x = 65;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  for(char i = 0; i < 300; i ++){
    Serial.println( i );
    //x ++;
    //delay(500);
  }
  for(char i = 300; i > 0; i --){
    Serial.println( i );
    //x ++;
    //delay(500);
  }
  
}
  
