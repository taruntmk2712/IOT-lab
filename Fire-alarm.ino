int  led=12;
int sensor=0;
int buzzer=13;

void setup() {
pinMode(led,OUTPUT);
pinMode(sensor,INPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);   
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(sensor);
  Serial.println(value);
  delay(1000);
 if(value<100)
  {
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
  }
  else 
  {
   digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
  
  }
 }
