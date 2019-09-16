int sens=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(sens,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val=analogRead(sens);

  float m_value=((float)val/1024)*5000;
  float temp=m_value/10;
  Serial.print("temprature in C: ");
  Serial.println(temp);
  delay(1000);
}
