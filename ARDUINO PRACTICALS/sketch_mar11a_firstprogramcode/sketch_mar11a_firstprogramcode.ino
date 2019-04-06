
int LEDRED=11;
int LEDGREEN=9;
int BlinkRed;
int BlinkGreen;
int LEDREDon;
int LEDREDoff;
int LEDGREENon;
int LEDGREENoff;
String message1="This is the LEDRED Blink # ";
String message2="This is the LEDGREEN Blink # ";



void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println("this is my First program");
  Serial.println(" ");
  
  Serial.print("How much Delay for LEDREDon?");
  while(Serial.available()==0){ };
  LEDREDon=Serial.parseInt();
  Serial.println(" ");

  Serial.print("How much Delay LEDREDoff?");
  while(Serial.available()==0){ };
  LEDREDoff=Serial.parseInt();
  Serial.println(" ");

   Serial.print("How long LEDGREENon?");
  while(Serial.available()==0){ };
  LEDGREENon=Serial.parseInt();
  Serial.println(" ");

   Serial.print("How long LEDGREENoff?");
  while(Serial.available()==0){ };
  LEDGREENoff=Serial.parseInt();
  Serial.println(" ");

  Serial.print("How many Blinks for LEDGREEN?");
  while(Serial.available()==0){ };
  BlinkGreen=Serial.parseInt();
  Serial.println(" ");
  

}

void loop(){
  Serial.print("How many Blinks for LEDRED?");
  while(Serial.available()==0){ };
  BlinkRed=Serial.parseInt();
  Serial.println(" ");
   
  for (int j=1;j<=BlinkRed;j=j+1){
    Serial.print(message1);
    Serial.println( j ); 
  digitalWrite(LEDRED,HIGH);
  delay(LEDREDon);
  digitalWrite(LEDRED,LOW);
  delay(LEDREDoff);
  }
  
Serial.println(" ");
for (int j=1;j<=BlinkGreen;j=j+1){
Serial.print(message2);
Serial.println( j );

  digitalWrite(LEDGREEN,HIGH);
  delay(LEDGREENon);
  digitalWrite(LEDGREEN,LOW);
  delay(LEDGREENoff);
}
  
  Serial.println(" ");
}
  
