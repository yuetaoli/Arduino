int my_LED = 13;
int count = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(my_LED, OUTPUT);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  if(count < 20){
    digitalWrite(my_LED, HIGH);
    delay(1000);
    digitalWrite(my_LED, LOW);
    delay(1000);
    count ++;
  }
  
}
  
