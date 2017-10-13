#include <Servo.h>

Servo myservo;        // create servo object to control a servo

int potpin = A0;      // analog pin used to connect the potentiometer
int val;              // variable to read the value from the analog pin

void setup() {
  myservo.attach(8);  // attaches the servo on pin 8 to the servo object
  Serial.begin(9600);
}

void loop(){
  
}

