#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);  // Kalau gagal ganti 0x3F ke 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();//  Kalau Gagal Ganti  "lcd.begin();"
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Ini Baris lcd");
  
  lcd.setCursor(0,1);
  lcd.print("Aku Sayang Ibu");
}


void loop()
{
}
