#include<LiquidCrystal.h>
#define trigPin1 3
#define echoPin1 2
#define trigPin2 11
#define echoPin2 10
#define RS 9
#define EN 8
#define D4 4
#define D5 5
#define D6 6
#define D7 7
LiquidCrystal lcd(RS,EN,D4,D5,D6,D7);
void setup()
  {
    lcd.begin(16,2); 
    pinMode(trigPin1,OUTPUT);
    pinMode(echoPin1,INPUT);
    pinMode(trigPin2,OUTPUT);
    pinMode(echoPin2,INPUT);
  }
long duration1,distance1,duration2,distance2;
void loop()
  {
    lcd.clear();
    lcd.setCursor(0,0);
    digitalWrite(trigPin1,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin1,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin1,LOW);
    duration1=pulseIn(echoPin1,HIGH);
    distance1=(duration1/2) / 29.1;
    digitalWrite(trigPin2,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin2,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin2,LOW);
    duration2=pulseIn(echoPin2,HIGH);
    distance2=(duration2/2) / 29.1;
    if (distance1 <= 200 && distance1 >=0 ) 
    {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Warning left:");
        lcd.print(distance1);
        lcd.println("cm");
        delay(1000);
    }
    else if (distance2 <= 200 && distance2 >=0 ) 
    {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Warning right:");
        lcd.print(distance2);
        lcd.println("cm");
        delay(1000);
    }
    else 
    {
      lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Safe");
        delay(1000);
    }  
}
