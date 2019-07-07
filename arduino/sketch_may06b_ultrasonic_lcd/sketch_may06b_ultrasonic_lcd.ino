# include<LiquidCrystal.h>
  LiquidCrystal lcd(7,8,9,10,11,12);
  int TRIG = 3;
  int ECHO = 5;
  float Time;
  float Distance;
void setup() {
  lcd.begin(16,2);
  lcd.clear();
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Distance= ");
  
  
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  
  Time = pulseIn(ECHO,HIGH);
  Distance = (Time*0.0343)/2;
  
  lcd.print(Distance);
  delay(500);
  
 
  // put your main code here, to run repeatedly:

}
