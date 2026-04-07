int led = 13;
int dotdlay = 250;
int dashdlay = 1000;
int gap = 500;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);

  Serial.println("Enter text:");
}

void dot()
{
  digitalWrite(led, HIGH);
  delay(dotdlay);
  digitalWrite(led, LOW);
  delay(gap);
}

void dash()
{
  digitalWrite(led, HIGH);
  delay(dashdlay);
  digitalWrite(led, LOW);
  delay(gap);
}

void morse(char c)
{
  switch(toupper(c))
  {
    case 'A': dot(); dash(); break;
    case 'B': dash(); dot(); dot(); dot(); break;
    case 'C': dash(); dot(); dash(); dot(); break;
    case 'D': dash(); dot(); dot(); break;
    case 'E': dot(); break;
    case 'F': dot(); dot(); dash(); dot(); break;
    case 'G': dash(); dash(); dot(); break;
    case 'H': dot(); dot(); dot(); dot(); break;
    case 'I': dot(); dot(); break;
    case 'J': dot(); dash(); dash(); dash(); break;
    case 'K': dash(); dot(); dash(); break;
    case 'L': dot(); dash(); dot(); dot(); break;
    case 'M': dash(); dash(); break;
    case 'N': dash(); dot(); break;
    case 'O': dash(); dash(); dash(); break;
    case 'P': dot(); dash(); dash(); dot(); break;
    case 'Q': dash(); dash(); dot(); dash(); break;
    case 'R': dot(); dash(); dot(); break;
    case 'S': dot(); dot(); dot(); break;
    case 'T': dash(); break;
    case 'U': dot(); dot(); dash(); break;
    case 'V': dot(); dot(); dot(); dash(); break;
    case 'W': dot(); dash(); dash(); break;
    case 'X': dash(); dot(); dot(); dash(); break;
    case 'Y': dash(); dot(); dash(); dash(); break;
    case 'Z': dash(); dash(); dot(); dot(); break;
  }

  delay(600);
}

void loop()
{
  if(Serial.available())
  {
    String text = Serial.readString();
    for(int i = 0; i < text.length(); i++) morse(text[i]);
    Serial.println("Done");
  }
}