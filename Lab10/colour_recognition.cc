const int s0 = 8;
const int s1 = 6;
const int s2 = 12;
const int s3 = 11;
const int out = 10;
int R = 2;
int G =3;
int B = 4;
int red = 0;
int green = 0;
int blue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(out,INPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  digitalWrite(s1, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  color();
  Serial.print("R Intensity: ");
  Serial.print(red, DEC);
  Serial.print(" G Intensity: ");
  Serial.print(green, DEC);
  Serial.print(" B Intensity: ");
  Serial.print(blue, DEC);
  if (red < blue && red < green)
    {
        Serial.println("Red Color");
        digitalWrite(R, HIGH);
        digitalWrite(G, LOW);
        digitalWrite(B, LOW);
    }
  else if (red > blue && blue < green)
    {
        Serial.println("Blue Color");
        digitalWrite(R, LOW);
        digitalWrite(G, LOW);
        digitalWrite(B, HIGH);
    }
    else if (green < blue && red > green)
    {
        Serial.println("Green Color");
        digitalWrite(R, LOW);
        digitalWrite(G, HIGH);
        digitalWrite(B, LOW);
    }
    else
    {
        delay(1000);
        digitalWrite(R, LOW);
        digitalWrite(G, LOW);
        digitalWrite(B, LOW);
      }
      //delay(1000);
}
void color()
{
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    red = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
    digitalWrite(s3, HIGH);
    blue = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
    digitalWrite(s2, HIGH);
    green = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  }
