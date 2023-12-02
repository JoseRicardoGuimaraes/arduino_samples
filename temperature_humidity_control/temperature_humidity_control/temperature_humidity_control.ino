#include <dht11.h>
#include <LiquidCrystal.h>

#define DHT11_PIN 2

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
dht11 DHT11;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  int chk = DHT11.read(DHT11_PIN);
  lcd.setCursor(0, 0);

  lcd.print("Temp: ");
  lcd.print(DHT11.temperature);
  lcd.print((char)223);
  lcd.print("C");

  lcd.setCursor(0, 1);

  lcd.print("Humidade: ");
  lcd.print(DHT11.humidity);
  lcd.print("%");

  delay(1000);
}
