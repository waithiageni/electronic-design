#include <Servo.h>
int ledRed= 7;
int ledBlue= 6;
int myBlink;
Servo myServo;

void setup() {
Serial.begin(9600);
pinMode(ledRed, OUTPUT);
pinMode(ledBlue, OUTPUT);
myServo.attach(8);
 

}

void loop() {
   for(int j=1;j<=5;j=j+1){
    delay(500);
    digitalWrite(ledRed, HIGH);
    delay(500);
    digitalWrite(ledRed, LOW);
    delay(500);
    myServo.write(90);
    delay(1000);
    
    
    }
    for(int j=1;j<=10;j=j+1){
    delay(500);  
    digitalWrite(ledBlue, HIGH);
    delay(500);
    digitalWrite(ledBlue, LOW);
    delay(500);
    myServo.write(-90);
    delay(250);
    
    
    }
   

}
