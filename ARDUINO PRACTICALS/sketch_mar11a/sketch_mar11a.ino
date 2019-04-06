 
int LEDRED=11;
int LEDGREEN=9;
int BlinkRed;
int BlinkGreen;
int REDLEDon;
int REDLEDoff;
int GREENLEDon;
int GREENLEDoff;



void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println("this is my Blink program");
  Serial.println(" ");
  // put your setup code here, to run once:

}

void loop(){ 
 Serial.print("Blink #1 is RED");
 Serial.println(" ");
  
  digitalWrite(LEDRED,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
  delay(1000);
Serial.print("Blink #2 is GREEN");
Serial.println(" ");

  digitalWrite(LEDGREEN,HIGH);
  delay(1000);
  digitalWrite(LEDGREEN,LOW);
  delay(1000);
  digitalWrite(LEDGREEN,HIGH);
  delay(1000);
  digitalWrite(LEDGREEN,LOW);
  delay(1000);
  Serial.print("Blink #3 is RED");
  Serial.println(" ");

  digitalWrite(LEDRED,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
 delay(1000);
  digitalWrite(LEDRED,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
 delay(1000);
  digitalWrite(LEDRED,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
 delay(1000);
Serial.println(" ");
} 
  
  
 
 
