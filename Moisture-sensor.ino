#include<Servo.h>

Servo mys;
int pos=0;
int senspin=0;

void setup() {
  // put your setup code here, to run once:
mys.attach(9);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int sensval=analogRead(senspin);
 Serial.println(sensval);
 if(sensval>250)
 {
    for(pos=0;pos<=180;pos+=1)
    {
        mys.write(pos);
        delay(10);
    }
    for(pos=180;pos>0;pos-=1)
    {
        mys.write(pos);
        delay(15);
    }
    
    
 }
 
}
