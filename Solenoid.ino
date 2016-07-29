int Button=3; 
int Solenoid=7; 
boolean onoff=LOW; //this variable record the status of the button
void setup()
{
  pinMode(Button,INPUT_PULLUP); 
  pinMode(Solenoid,OUTPUT); 
}
void loop(){
  if(digitalRead(Button)==LOW)  
  {
    if(digitalRead(Button)==HIGH) 
    {
      digitalWrite(Solenoid,HIGH);  
      delay(50); 
      digitalWrite(Solenoid,LOW);  
      while(digitalRead(Button)==HIGH) //wait for releasing button
      {
        delay(1);
      }

    }
  }
  /*if(digitalRead(Button == LOW)){
    digitalWrite(Solenoid, HIGH);
    delay(500);
    digitalWrite(Solenoid, LOW);
    delay(500);
  }*/
  
}
