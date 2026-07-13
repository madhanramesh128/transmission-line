#include <LiquidCrystal.h>

// LCD Pins
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

// Sensor Pins
const int flameSensor = 7;
const int gasSensor = A0;

// Output Pin
const int ledPin = 6;

// Sensor Values
int flameValue = 0;
int gasValue = 0;

// Gas Threshold
const int gasThreshold = 300;

void setup()
{
  pinMode(flameSensor, INPUT);
  pinMode(ledPin, OUTPUT);

  lcd.begin(16, 2);

  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("FIRE & GAS");
  lcd.setCursor(0, 1);
  lcd.print("DETECTION SYS");

  delay(3000);
  lcd.clear();
}

void loop()
{
  flameValue = digitalRead(flameSensor);
  gasValue = analogRead(gasSensor);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  // Safe Condition
  if (flameValue == HIGH && gasValue < gasThreshold)
  {
    digitalWrite(ledPin, LOW);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("SAFE CONDITION");
    lcd.setCursor(0, 1);
    lcd.print("SYSTEM NORMAL");
  }

  // Fire Detected
  else if (flameValue == LOW)
  {
    digitalWrite(ledPin, HIGH);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("FIRE ALERT!");
    lcd.setCursor(0, 1);
    lcd.print("FLAME DETECTED");
  }

  // Gas Leakage
  else if (gasValue >= gasThreshold)
  {
    digitalWrite(ledPin, HIGH);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("GAS DETECTED");
    lcd.setCursor(0, 1);
    lcd.print("ALERT WARNING");
  }

  delay(1000);
}
