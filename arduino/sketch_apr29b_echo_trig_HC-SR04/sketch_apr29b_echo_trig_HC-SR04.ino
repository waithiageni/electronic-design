int TRIG = 11;
int ECHO =6;
float Time;
float Distance;
void setup() {
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);

  Time = pulseIn(ECHO,HIGH);
  Distance = (Time*0.0343)/2;
  Serial.print(Distance);
  Serial.println("cm");
  delay(500); 
  // put your main code here, to run repeatedly:

}
