int ReadValue;
  int TRIG = 5;
  int ECHO = 3;
  int pirPin = 6;
  float Time;
  float Distance;
void setup() {
Serial.begin(9600);
  pinMode(TRIG,OUTPUT);

  pinMode(pirPin,INPUT);
  pinMode(ECHO,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  ReadValue = digitalRead(pirPin);
  if (ReadValue==HIGH){
  Serial.print("Motion= ");
  
  
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  
  Time = pulseIn(ECHO,HIGH);
  Distance = (Time*0.0343)/2;
  
  Serial.print(Distance);
  Serial.println(" ");
   delay(500);
  }
else{
  Serial.print("Negative");
  Serial.println(" ");
  delay(500);
}
 
  // put your main code here, to run repeatedly:

}
