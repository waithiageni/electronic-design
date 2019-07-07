#include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
#include <Servo.h>


Servo myservo;
int ReadValue;
int pirPin = 6;           
void setup(){    
 pinMode(pirPin,INPUT); 
  myservo.attach(4);    
  lcd.begin(16,2);
  lcd.clear();
}

void loop(){
  lcd.setCursor(0,0);
  ReadValue = digitalRead(pirPin);
  if (ReadValue==HIGH){
    
    myservo.write(90);
    lcd.print("servo turned 90");
 
    }
    
  else{
    myservo.write(0);
    lcd.print("No");
    }
}
