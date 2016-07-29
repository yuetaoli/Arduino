int Button=3; 
int LED=12; 
long Time;
long Delay = 500;
boolean onoff=LOW; //this variable record the status of the button
void setup()
{
  pinMode(Button,INPUT); 
  pinMode(LED,OUTPUT); 
}
void loop(){
  if(digitalRead(Button)==LOW)  
  {
    delay(10); 
      if(digitalRead(Button)==HIGH && ((millis() - Time) > Delay)  ) 
        {
          Time = millis();
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
