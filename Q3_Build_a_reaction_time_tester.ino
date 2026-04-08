int led = 8;
int button = 2;

unsigned long st;
unsigned long rt;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  int dlay = random(2000, 3000);
  delay(dlay);
  digitalWrite(led, HIGH);
  st = millis();

  while(digitalRead(button) == HIGH){ }
  rt = millis() - st;

  Serial.print("Reaction Time: ");
  Serial.print(rt);
  Serial.println(" ms");

  digitalWrite(led, LOW);
  delay(1000);
}