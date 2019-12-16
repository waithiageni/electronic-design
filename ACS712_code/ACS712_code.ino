
const int sensorIn = A0;
int mVperAmp = 66; //use 100 for 20A Module and 66 for 30A Module and 185 for 5A Module

double Voltage = 0;
double VRMS = 0;
double AmpsRMS = 0;



void setup(){ 
 Serial.begin(9600);
}

void loop(){
 
 
 Voltage = getVPP();
 VRMS = (Voltage/2.0) *0.707;
 AmpsRMS = (VRMS * 1000)/mVperAmp;
 Serial.print(AmpsRMS);
 Serial.println(" Amps ");

}

float getVPP()
{
  float result;
  
  int readValue;                 
  int maxValue = 0;         
  int minValue = 1024;         
  
   uint32_t start_time = millis();
   while((millis()-start_time) < 1000) //sample for 1 Sec
   {
       readValue = analogRead(sensorIn);
       // see if you have a new maxValue
       if (readValue > maxValue) 
       {
          
           maxValue = readValue;
       }
       if (readValue < minValue) 
       {
          
           minValue = readValue;
       }
   }
   
   result = ((maxValue - minValue) * 5.0)/1024.0;
      
   return result;
 }
