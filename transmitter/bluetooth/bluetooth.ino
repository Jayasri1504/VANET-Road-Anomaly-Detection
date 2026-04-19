char junk;
String inputString="";
void conditions();
#include <SoftwareSerial.h>
SoftwareSerial mySerial(0, 1); // RX, TX
void setup()                    
{
Serial.begin(9600);
mySerial.begin(9600);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);

}

void loop()
{

if(Serial.available()>0){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); 
      inputString += inChar;       
    }
    Serial.println(inputString);
    while (Serial.available() > 0)  
    {
 junk = Serial.read() ; 
}      
    if(inputString == "B")
{         
digitalWrite(4, HIGH);  
digitalWrite(5, LOW); 
digitalWrite(6, HIGH); 
digitalWrite(7, LOW); 

    }
else if(inputString == "F")
{  
digitalWrite(4, LOW);  
digitalWrite(5, HIGH); 
digitalWrite(6, LOW); 
digitalWrite(7, HIGH); 

    }
else if(inputString == "R")
{  
digitalWrite(4, HIGH);  
digitalWrite(5, LOW); 
digitalWrite(6, LOW); 
digitalWrite(7, HIGH); 

    }
else if(inputString == "L")
{  
digitalWrite(4, LOW);  
digitalWrite(5, HIGH); 
digitalWrite(6, HIGH); 
digitalWrite(7, LOW); 

    }

else  
{  
digitalWrite(4, LOW);  
digitalWrite(5, LOW); 
digitalWrite(6, LOW); 
digitalWrite(7, LOW); 



}

    
    inputString = "";
  }
  
}
