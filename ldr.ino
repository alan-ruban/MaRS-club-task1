int ldr = A0;
int led = 9;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  int ldrval = analogRead(ldr);

  if(ldrval < 930) digitalWrite(led, HIGH);
  else digitalWrite(led, LOW);

  delay(200);
}