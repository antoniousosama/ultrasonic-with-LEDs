  int red=2;
  int green=3;
  int yellow=4;
  int blue=5;
  int trig=6;
  int echo=7; 
  long d=0;
  long t=0;
void setup()
{
  pinMode(2,1);
  pinMode(3,1);
  pinMode(4,1);
  pinMode(5,1);
  pinMode(6,1);
  pinMode(7,0);
  Serial.begin(9600);
}

void loop()
{
   digitalWrite(trig,0);
   delayMicroseconds(2);
   digitalWrite(trig,1);
   delayMicroseconds(10);
   digitalWrite(trig,0);
   t=pulseIn(echo,1);
   d=(0.0343/2)*t;
   Serial.println(d);
  if (d<=100)
  {
    digitalWrite(red,1);
    digitalWrite(green,0);
    digitalWrite(yellow,0);
    digitalWrite(blue,0);
  }
  else if(d<=200)
  {
    digitalWrite(red,1);
    digitalWrite(green,1);
    digitalWrite(yellow,0);
    digitalWrite(blue,0);
  }
  else if(d<=300)
  {
    digitalWrite(red,1);
    digitalWrite(green,1);
    digitalWrite(yellow,1);
    digitalWrite(blue,0);
  }
  else if(d>300)
  {
for (int i=2 ;i<=5 ;i++)
  digitalWrite(i,1);
  }
  }