int pinpot = A0;
int LEDRED = 10;
int Brightness;
int Readvalue;

void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(LEDRED,OUTPUT);

}

void loop() {
  Serial.print("pinpot value =  ");
  Serial.print(Readvalue);
  Serial.print("Brightness = ");
  Serial.println(Brightness);
  
  Serial.print(" ");
  Readvalue = analogRead(pinpot);
  Brightness = (255./1023.)*Readvalue;
  analogWrite(LEDRED,Brightness);
  delay(1000);
  analogWrite(LEDRED,0);
  delay(1000);
  

}
