static long int startTime[] = { 0, 300, 600, 1200, 1800, 2400, 3599, 3899, 4199, 4799, 5399, 5999, 7199, 7499, 7800, 8400, 9000, 9600, 10200, 11100, 11400, 11700, 12300, 12900, 13500};
static int duration[]  = { 300, 300, 599, 600, 600, 1199, 299, 299, 599, 599, 599, 1200, 300, 300, 600, 599, 599, 599, 900, 300, 300, 599, 599, 599, 1800};
int p = 0;
int rev = 0;
void setup() {
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), position, RISING);  
}
void loop() {
  for(int i = 0; i < sizeof(duration); i ++){
    revolution(6);
    delay(duration[i]);
  }
}
void position() {
  p++; 
  if( p > 95 ){
    p = 0; rev ++;
  }
}
void revolution(int pin) {
  analogWrite(pin, 200);
  int r = rev;
  while( r == rev){
    Serial.println(p);
  }
  analogWrite(pin, 0);
}

