#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() 
{
 Serial.begin(9600);
 lcd.begin(16, 2);
 lcd.setCursor(0,0);
 lcd.print("VANET BASED");
 lcd.setCursor(0, 1);
 lcd.print("COMMUNICATION");
 delay(5000);
 lcd.clear();
 pinMode(8,INPUT);
 pinMode(9,OUTPUT);

}

void loop() 
{
  lcd.setCursor(0,0);
  int RF=digitalRead(8);lcd.print("RF:");lcd.print(RF);delay(1000);
  Serial.print("RF:");Serial.println(RF);delay(1000);
  if(RF==1)
  {
  digitalWrite(9,1);delay(3000);  digitalWrite(9,0);
  lcd.setCursor(0,0);
  lcd.print("ALERT:OBJECT OR");
  lcd.setCursor(0,1);
  lcd.print("PATHOLE DETECTED");
  delay(5000);
  }
 else
 {
  digitalWrite(9,0);
 }
  lcd.clear();
  
}
