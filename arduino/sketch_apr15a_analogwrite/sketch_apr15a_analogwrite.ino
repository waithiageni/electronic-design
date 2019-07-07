int pinpot = A0;
int LEDRED = 10;
int Brightness;
int delayRED;
int Readvalue;


String message = "pinpot value=";
String message1 ="Brightness="; 
void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(LEDRED,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  Readvalue = analogRead(pinpot);
  delayRED=(900./1023.)*Readvalue;
  analogWrite(LEDRED,255);
  delay(delayRED);
  analogWrite(LEDRED,0);
  delay(delayRED);
  // put your main code here, to run repeatedly:

}
