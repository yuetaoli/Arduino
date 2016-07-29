int Button=3; 
int LED=12; 
boolean onoff=LOW; //this variable record the status of the button
void setup()
{
  pinMode(Button,INPUT); 
  pinMode(LED,OUTPUT); 
}
void loop(){
  if(digitalRead(Button)==LOW)  
  {
    Serial.println('a');//
    if(digitalRead(Button)==HIGH) 
    {
      digitalWrite(LED,onoff);  
      onoff=(!onoff);
      //delay(10); 
      while(digitalRead(Button)==HIGH) //wait for releasing button
      {
        delay(1);
      }
    }
  }
}
