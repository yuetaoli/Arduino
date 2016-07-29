int phototransistor = 7;
int time1 = 0;
int time2;
void setup() {
  Serial.begin(9600);
}

void loop() {
  /*int bright1 = analogRead(phototransistor);
  int bright2 = analogRead(phototransistor);
  int gap;
  bright1 = analogRead(phototransistor);
  bright2 = analogRead(phototransistor);
  while(bright2 <= (bright1 + 50)){
    bright2 = analogRead(phototransistor); Serial.print(bright1); delay(500);Serial.print(bright2);
  }
  if(bright2 > (bright1 + 100)){
    time2 = millis(); 
    gap = time2 - time1;
    int frequency = 1000/gap;
    Serial.print("Frequency"); Serial.println(gap);
    time1 = time2;
    delay(10);
  }*/
  
  int bright = analogRead(phototransistor);
  while(bright < 400){
    bright = analogRead(phototransistor); 
  }
  if(bright >= 400){
  	time2 = millis();
  	int gap = time2 - time1;
  	int frequency = (1000/gap);
  	Serial.print("Frequency"); Serial.println(frequency);
  	delay(15);
  }
  time1 = time2;
  /*int bright2 = analogRead(phototransistor);
  Serial.println( bright2 );
  delay(500);*/
}
