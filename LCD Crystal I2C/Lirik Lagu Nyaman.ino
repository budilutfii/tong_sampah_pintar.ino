#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);  // Kalau gagal ganti 0x3F ke 0x27 for a 16 chars and 2 line display

void setup()
{
      
}


void loop()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Cintamu");

  lcd.setCursor(0,1);
  lcd.print("Ig : budilutfii");
  lcd.backlight();
  delay(1500);
  lcd.setCursor(0,0);
  lcd.print("Senyaman ");

  lcd.setCursor(0,1);
  lcd.print("Ig : budilutfii");
  lcd.backlight();
  delay(1000);
  lcd.setCursor(0,0);
  lcd.print("Mentari Pagi");

  lcd.setCursor(0,1);
  lcd.print("Ig : budilutfii");
  lcd.backlight();
  delay(2000);
  lcd.setCursor(0,0);
  lcd.print("Seperti Pelangi");

  lcd.setCursor(0,1);
  lcd.print("Ig : budilutfii");
  delay(2500);
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("selalu kunantii");

  lcd.setCursor(0,1);
  lcd.print("Ig : budilutfii");
  delay(3000);
}
