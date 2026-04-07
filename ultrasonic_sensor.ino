int sensor = 12;
int led = 8;

long duration;
int distance;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  pinMode(sensor, OUTPUT);

  digitalWrite(sensor, LOW);
  delayMicroseconds(2);
  digitalWrite(sensor, HIGH);
  delayMicroseconds(10);

  digitalWrite(sensor, LOW);
  pinMode(sensor, INPUT);

  duration = pulseIn(sensor, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance < 100) digitalWrite(led, HIGH);
  else digitalWrite(led, LOW);

  delay(200);
}