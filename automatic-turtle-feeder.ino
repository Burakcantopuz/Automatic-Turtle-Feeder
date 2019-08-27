#include <Servo.h>
Servo myservo; 
int pos = 120;
int vibrationPin = 0 ;
void setup() {
  myservo.attach(4); 
  pinMode(vibrationPin, OUTPUT);
 }
void loop() {
  Serial.println("Automatic");
  digitalWrite(vibrationPin, HIGH);
   Serial.println("Food is given ");
  for (pos = 100; pos <= 180; pos += 1){
    myservo.write(pos);             
    delay(10);                       
  }
  for (pos = 180; pos >= 100; pos -= 1){
    myservo.write(pos);             
    delay(0);  
     
  }
   digitalWrite(vibrationPin, HIGH);
  for (pos = 100; pos <= 180; pos += 1){
    myservo.write(pos);             
    delay(10);                       
  }
  for (pos = 180; pos >= 100; pos -= 1){
    myservo.write(pos);             
    delay(0);  
     Serial.println("Food was given");
     delay(10);
  }
  delay(2000);
  digitalWrite(vibrationPin, LOW);
   Serial.println("12 hours left..");
  delay (43200000);   
}
