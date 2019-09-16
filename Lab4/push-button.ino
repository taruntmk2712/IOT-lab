int led=13;
int push=12;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(push,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int val=digitalRead(push);
if(val==0)

  digitalWrite(led,LOW);
else
  digitalWrite(led,HIGH);

}
