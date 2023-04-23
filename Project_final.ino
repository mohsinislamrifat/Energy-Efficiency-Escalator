#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int pirPin = 9;
int motorPin = 10;
void setup ()
{

  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

  pinMode(pirPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  if (digitalRead(pirPin) == HIGH)
  {
    lcd.setCursor(2, 0);
    lcd.print("Escalator Starts.");
    delay(1000);

    digitalWrite(motorPin, HIGH);
    delay (5000);
  }

  else
  {
    lcd.setCursor(8, 0);
    lcd.print("STOP");
    delay(100);
    lcd.clear();
    digitalWrite(motorPin, LOW);
  }
  delay(200);
  lcd.clear();
}
