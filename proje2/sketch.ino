#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int button1 = 9;
const int button2 = 10;

const int yellowLed = 5;
const int redLed = 4;
const int maviLed = 3;

const int buzzer = 13;

void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(redLed, OUTPUT);
  pinMode(maviLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Fabrika sistemi");
  delay(200);
}

void loop(){
  int yeniDurum = digitalRead(button1);
  int yeniDurum2 =  digitalRead(button2);

  if (yeniDurum == LOW && yeniDurum2 == LOW){
        digitalWrite(maviLed, HIGH);
        tone(buzzer, 1000);
        digitalWrite(redLed, LOW);
        digitalWrite(yellowLed, LOW);

        lcd.setCursor(0, 0);
        lcd.print("Sistem Guvenli");
  }

  else if (yeniDurum == LOW || yeniDurum2 == LOW){
    digitalWrite(maviLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, HIGH);
    delay(100);
    digitalWrite(redLed, LOW);
    delay(100);
    noTone(buzzer);

    lcd.setCursor(0,0);
    lcd.print("Tehlike");
  }

  else{
    digitalWrite(redLed, LOW);
    digitalWrite(maviLed, LOW);
    digitalWrite(yellowLed, HIGH);
    noTone(buzzer);

    lcd.setCursor(0,0);
    lcd.print("Sistem Hazir");

  }
}
