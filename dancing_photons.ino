int ss = A2; 
int led = 7;               

void setup()
{ 
  Serial.begin(9600);
  pinMode (ss, INPUT);
  pinMode (led, OUTPUT);
}

void loop()
{
  int sensorvalue = analogRead (ss);            //if the sound intensity is higher than threshold which is set by us, 
                                                          //then sensor would return the value as 1
  
  //Serial.println(sensorvalue);
  if (ss == 1023)                             //sensorvalue == 1       
  {
     digitalWrite(led, LOW);
  }
  
  else if(sensorvalue == 28)
  {
    analogWrite(led, 255);
   
 
  }
  else{
    
    analogWrite(led, 240);
    }
  
}
