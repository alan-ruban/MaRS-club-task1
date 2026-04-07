#include <LiquidCrystal.h>

int led = 9; 
int pot = A1;
int prev = -1;
int buzz=8;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(led, OUTPUT);
  lcd.begin(16,2);
  lcd.print("Smart Lamp");
  lcd.clear();
}

void loop()
{
  int potval = analogRead(pot);
  int brightness = map(potval,0,1023,0,255);
  int brightper = map(brightness,0,255,0,100);
  analogWrite(led, brightness);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Brightness:");

  lcd.setCursor(0,1);
  lcd.print(brightper);
  lcd.print("%");
  
  int step = brightper / 10;

    if(step != prev)
    {
        tone(buzz, 1500);
        delay(150);
        noTone(buzz);
        prev = step;
    }
  delay(1000);
}
