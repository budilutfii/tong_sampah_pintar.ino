#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

int sensorPin = A0;  // pin sensor
int powerPin = 6;    // untuk pengganti VCC
 
void setup() { 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight(); 
  // jadikan pin power sebagai output
  pinMode(powerPin, OUTPUT);
  // default bernilai LOW
  digitalWrite(powerPin, LOW);
  // mulai komunikasi serial
  Serial.begin(9600);
}
 
void loop() {
  lcd.clear();
  Serial.print("Nilai kelembaban: ");
  Serial.println(bacaSensor());
  lcd.setCursor(0,0);
  lcd.print("Nilai kelembaban: ");
  lcd.setCursor(0,1);
  lcd.print(bacaSensor());
  // baca setiap 2 detik
  delay(2000);
}
 
int bacaSensor() {
  // hidupkan power
  digitalWrite(powerPin, HIGH);
  delay(500);
  // baca nilai analog dari sensor
  int nilaiSensor = analogRead(sensorPin);
  digitalWrite(powerPin, LOW);
  // makin lembab maka makin tinggi nilai outputnya
 return 1023 - nilaiSensor;
}
