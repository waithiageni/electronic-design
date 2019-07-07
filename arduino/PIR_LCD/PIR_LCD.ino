#include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
int PIR= 6;
int ReadValue;
void setup(){
  // put your setup code here, to run once:
  pinMode(PIR,INPUT);
  lcd.begin(16,2);
  lcd.clear();

}

void loop() {
  lcd.setCursor(0,0);
  ReadValue=digitalRead(PIR);
  if (ReadValue==HIGH){
    lcd.print("ALERT");
    
    
    }
   else {
    
      lcd.print("NO");
    
    }
   
  // put your main code here, to run repeatedly:

}
