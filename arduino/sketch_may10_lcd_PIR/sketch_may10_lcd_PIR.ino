#include<LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
int LEDRED = 5;
int PIR = 6;
float motion;
float ReadValue;

void setup() {
  lcd.begin(16,2);
  lcd.clear();
  pinMode(LEDRED,OUTPUT);
  pinMode (PIR,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("ReadValue= ");
  
  //if (ReadValue==HIGH)//{
    digitalWrite(LEDRED,HIGH);
   // print(start);
    delayMicroseconds(3);
  //}
//  else{
    digitalWrite(LEDRED,LOW);
    //print(ended);
    delayMicroseconds(3);
 // } 
  motion = pulseIn(PIR,HIGH);
  ReadValue=digitalRead(PIR);
  
  lcd.print(ReadValue);
  delay(500);
  
 }





    
