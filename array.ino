int r = 3;
int g = 12;
int y = 7;
int q = 250;
int e = 125;
int w = 1000;
int color[26] = {g,y,r,r,y,g,g,g,g,g,y,y,y,y,r,r,r,y,y,g,r,y,y,r,g,r};
int rate[26] = {q,q,q,q,q,q,e,e,e,e,e,e,e,e,e,e,w,w,w,w,q,q,w,w,q,q};
void setup() {
  Serial.begin(9600);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(y, OUTPUT);
  //pinMode(button, INPUT);
}

void loop() {
  for(int i = 0; i < 26; i++){
    //int voltage = analogRead(5);
    digitalWrite( color[i], HIGH );
    delay( rate[i] );
    digitalWrite( color[i], LOW );
    /*if(voltage > 1000){
      delay(500); voltage = analogRead(5);Serial.println("a");
      if(voltage < 1000){
        
        while(voltage < 1000){
          delay(1);
          voltage = analogRead(5);
          Serial.println("b");
        }
        delay(500);
      }
    }*/
  }
}
