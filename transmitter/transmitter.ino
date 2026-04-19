#include "DHT.h"
#define DHTPIN 9     
#define DHTTYPE DHT11  // DHT 11
DHT dht(DHTPIN, DHTTYPE);
#include <Ultrasonic.h>
Ultrasonic ultrasonic(12, 13);
int distance;
#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() 
{
 Serial.begin(9600);
 dht.begin(); 
 lcd.begin(16, 2);
 lcd.setCursor(0,0);
 lcd.print("VANET BASED");
 lcd.setCursor(0, 1);
 lcd.print("COMMUNICATION");
 delay(5000);
 lcd.clear();
 pinMode(10,INPUT);
 pinMode(8,OUTPUT);
 pinMode(11,OUTPUT);

}

void loop() 
{
  lcd.setCursor(0,0);
  int V=analogRead(A0);lcd.print("V:");lcd.print(V);delay(1000);
  Serial.print("V:");Serial.println(V);delay(1000);

  lcd.setCursor(6,0);
  int S=analogRead(A1);lcd.print("S:");lcd.print(S);delay(1000);
  Serial.print("S:");Serial.println(S);delay(1000);
  if(S>400)
  {
    digitalWrite(11,1);delay(3000);digitalWrite(11,0);
  }
  else
  {
   digitalWrite(11,0); 
  }

  lcd.setCursor(12,0);
  int I=digitalRead(10);lcd.print("I:");lcd.print(I);delay(1000);
  Serial.print("I:");Serial.println(I);delay(1000);
  if(I==0)
  {
    digitalWrite(8,1);digitalWrite(11,1);delay(3000);digitalWrite(11,0);
  }
  else
  {
  digitalWrite(8,0); digitalWrite(11,0); 
  }

  lcd.setCursor(0,1);
  distance = ultrasonic.read();lcd.print("D:");lcd.print(distance);delay(1000);
  Serial.print("Distance in CM: ");Serial.println(distance);delay(1000);
  if(distance<100)
  {
    digitalWrite(8,1);digitalWrite(11,1);delay(3000);digitalWrite(11,0);
  }
  else
  {
  digitalWrite(8,0); digitalWrite(11,0); 
  }

  
  lcd.setCursor(6,1);
  int h = dht.readHumidity();lcd.print("H:");lcd.print(h);delay(1000);
  Serial.print(F("Humidity: "));  Serial.print(h);delay(1000);
  
  lcd.setCursor(11,1);
  int t = dht.readTemperature();lcd.print("T:");lcd.print(t);delay(1000);
  Serial.print(F("%  Temperature: "));  Serial.print(t);  Serial.print(F("°C "));Serial.println("");
  if(t>29)
  {
    digitalWrite(11,1);delay(3000);digitalWrite(11,0);
  }
  else
  {
   digitalWrite(11,0); 
  }


  lcd.clear();
  
}
