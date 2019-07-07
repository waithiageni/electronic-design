# include<LiquidCrystal.h>
  LiquidCrystal lcd(7,8,9,10,11,12);
  int ReadValue;
  int TRIG = 5;
  int ECHO = 3;
  int pirPin = 6;
  float Time;
  float Distance;
void setup() {
  lcd.begin(16,2);
  lcd.clear();
  pinMode(TRIG,OUTPUT);

  pinMode(pirPin,INPUT);
  pinMode(ECHO,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  lcd.setCursor(0,0);
  ReadValue = digitalRead(pirPin);
  if (ReadValue==HIGH){
  lcd.print("Motion= ");
  
  
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  
  Time = pulseIn(ECHO,HIGH);
  Distance = (Time*0.0343)/2;
  
  lcd.print(Distance);
//  delay(500);
  }
else{
  lcd.print("Negative");
}
 
  // put your main code here, to run repeatedly:

}
