void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int x;
  int y;
  y = 3/5;
  Serial.print( y );
  delay(1000);
}
  
