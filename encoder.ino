int p = 0;
int rev = 0;
void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  //attachInterrupt(digitalPinToInterrupt(2), position, RISING);	
}
void loop() {
  	//revolution(10);
  	analogWrite(10, 255);
  	analogWrite(6, 255);
  	//Serial.println(p);

}
/*void position() {
	p++; 
	if( p > 95 ){
		p = 0; rev ++;
	}
}
void revolution(int pin) {
	analogWrite(pin, );
	int r = rev;
	while( r == rev){
		Serial.println(p);
	}
	analogWrite(pin, 0);
}*/