#include <Servo.h>

Servo myservo;
int ReadValue;
int pinpot = A0;
void setup() {
  myservo.attach(8);
  pinMode(pinpot,INPUT);

}

void loop() {

  ReadValue = analogRead(pinpot);
  ReadValue = map(ReadValue,0,1023,0,180);
  myservo.write(ReadValue);
  delay(45);
  
  // put your main code here, to run repeatedly:

}
