#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{

  lcd.begin(16, 2);
  lcd.print("First line");
  lcd.setCursor(0, 1);
  lcd.print("Second line");
  ;
}
void loop()
{
  // Do nothing here...
}