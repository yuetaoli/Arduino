int cdsPin = 7;
int time1 = 0;
int time2;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int bright1 = analogRead(cdsPin);
  int bright2 = analogRead(cdsPin);
  int gap;
  bright1 = analogRead(cdsPin);
  bright2 = analogRead(cdsPin);
  while(bright2 >= (bright1 - 50)){
    bright2 = analogRead(cdsPin); 
  }
  if(bright2 < (bright1 - 50)){
    time2 = millis(); 
    gap = time2 - time1;
    Serial.print("gap"); Serial.println(gap);
    time1 = time2;
    delay(350);
  }
}
