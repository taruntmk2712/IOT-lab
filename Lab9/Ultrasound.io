#include<LiquidCrystal.h>
LiquidCrystal lcd (8,9,4,5,6,7);
int trigPin=3,echoPin=2;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration , inches, cm;
  lcd.setCursor(0,1);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  duration = pulseIn(echoPin,HIGH);
  inches = microsecondsToInches(duration);
  cm=microsecondsToCentimeter(duration);
  lcd.print(inches);
  lcd.print("in,");
  Serial.print(inches);
  lcd.print(cm);
  lcd.print("cm");
  delay(1000);
}

long microsecondsToInches(long microseconds)
{
  return microseconds/74/2;
  }
  long microsecondsToCentimeter(long microseconds)
  {
    return microseconds/29/2;}
