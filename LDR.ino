int apin=0;
int led=13;



void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(apin,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int svalue=analogRead(apin);
Serial.println(svalue);
//delay(3000);
int th=250;
if(svalue<th)
digitalWrite(led,HIGH);
else digitalWrite(led,LOW);

}
