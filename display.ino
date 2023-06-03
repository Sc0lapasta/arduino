#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,1,2,3,4); //l'ho messo al contrario per comodità
//nota: mai toccare i cavi di alimentazione, sennò si bugga il display
void setup()
{
  lcd.begin(16,2);
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("02.06.2023");
  lcd.setCursor(0, 1);
  lcd.print("asdasd");
}
