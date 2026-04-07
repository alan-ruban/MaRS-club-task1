int pot = A0;   

int red = 9;    
int blue = 10;    
int green = 11;    

int led = 6;     

int potval = 0;    
int dlay = 0;   

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  potval = analogRead(pot);

  int redval   = map(potval, 0, 1023, 0, 255);
  int blueval  = map(potval, 0, 1023, 255, 0);
  int greenval = map(potval, 0, 1023, 0, 127);

  analogWrite(red, redval);
  analogWrite(blue, blueval);
  analogWrite(green, greenval);

  dlay = map(potval, 0, 1023, 500, 1000);

  digitalWrite(led, HIGH);
  delay(dlay);
  digitalWrite(led, LOW);
  delay(dlay);
}
