#include<LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
int PinPot = A0;
void setup() {
  lcd.begin(16,2);
  lcd.clear();
  pinMode(PinPot,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("SensorValue= ");
  lcd.print(analogRead(PinPot));
  // put your main code here, to run repeatedly:

}
