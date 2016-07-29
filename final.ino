/* Team name: Whiplash
 * Name: Yuetao(Larry) Li 
 * Partner name: Kangjia(Kenny) Cai
 * July 22, 2016
 */
//=========Define========== //
#define motor1 6
#define encoder1 2
#define margin 50
//============//Global Varibles//=============//
long startTimes[] = {6304,9783,13258,16686,20118,23596,27071,30500,33926,37306,40686,44066,47447,61007,64436,67864,71293,74721,78150,81578,85007};
bool time2play = false;
bool doneplaying = false;
bool waiting = false;
bool isplaying = true;
int p = 0;
int rev = 0;
int timedef = 0;
//================//Setup//=============//
void setup() {
	Serial.begin(9600);
	Serial.println("Begin");
	pinMode(motor1, OUTPUT);
	pinMode(encoder1, INPUT_PULLUP);
  	attachInterrupt(digitalPinToInterrupt(encoder1), position, RISING);
  	pinMode(3, INPUT_PULLUP);
}
//================//Void Loop//=============//
void loop() {
	while(digitalRead(3) == HIGH){
		Serial.println("Waiting");
	}
	timedef = millis() - 200;
	for(int i = 0; i < sizeof(startTimes); i++){
		int nextnoteTime = startTimes[i+1] + timedef;
		if(isplaying){
  			int time = millis();
  			while((abs(time - nextnoteTime)) > margin){
  				time = millis();
  			}
  			isplaying = false;
  			time2play = true;
  		}
		if(time2play){
		    revolution(motor1); Serial.print(startTimes[i]); Serial.println("+" + i);
		    isplaying = true;
  		}
	}
}
//================//Functions//=============//
void position() {
	p++; 
	if( p > 95 ){
		p = 0; rev ++;
	}
}
void revolution(int pin1) {
	analogWrite(pin1, 255); 
	int r = rev;
	while( r == rev){
		Serial.println(".");
	}
	analogWrite(pin1, 0);
}
