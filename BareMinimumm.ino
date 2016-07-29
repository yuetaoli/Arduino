long i;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(true){
    i += 100000;
    Serial.println( i );
  }
}
