# include "LiquidCrystal.h"  //lcd libary                                       
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);   //LCD object Parameters: (rs, enable, d4, d5, d6, d7)
const int trigPin = 12; //trig pin connection 
const int echoPin = 11;//echopin connection
const int buzzPin=9; 
long duration;
int distanceCm;
float liquid;
                                                                                                            
void setup() {      // setup perameter
lcd.begin(16,2);                                                   
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buzzPin, OUTPUT);
lcd.setCursor(0,0);
lcd.print("  Distance    ");
lcd.setCursor(0,1);
lcd.print("  Measurement  ");
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("    Made By    ");
lcd.setCursor(0,1);
lcd.print("    Sayed MD");
delay(2000);
lcd.clear();
}

void loop() {   // loop of flow program
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= 0.034*(duration/2);                                                                                 
lcd.setCursor(0,0);                                                 
lcd.print("Distance Measure.");
delay(10);
lcd.setCursor(0,1);
lcd.print("Distance:");
lcd.print(distanceCm);
lcd.print(" Cm ");
delay(10);
if(distanceCm > 100)
{
  digitalWrite(buzzPin,HIGH);

}
else
{
  digitalWrite(buzzPin,LOW);
}
delay(10);
}
