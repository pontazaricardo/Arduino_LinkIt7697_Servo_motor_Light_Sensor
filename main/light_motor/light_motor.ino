#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(8);  // attaches the servo on pin 8 to the servo object
  Serial.begin(9600);
}

void loop(){
  
}

