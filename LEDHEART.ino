int led = 3;
int a = 0;
int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(a >= 0 && a < 2){
    a++;
      while(i< 255){
        analogWrite(led, i);
        delay(3);
        i += 5;
      }
      while(i>0 && i <= 255)
      analogWrite(led, i);
      delay(3);
      i -= 5;
  }
  delay(750);
  
}
