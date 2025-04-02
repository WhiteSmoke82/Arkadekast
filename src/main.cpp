#include <Arduino.h>

const int dirPin = 19;
const int stepPin = 18;
const int stepsPerRevolution = 200;
const int ms1Pin = 27;
const int ms2Pin = 26;
const int ms3Pin = 25;

int speedDelay = 200;

void setup(){
	pinMode(stepPin, OUTPUT);
	pinMode(dirPin, OUTPUT);
  pinMode(ms1Pin, OUTPUT);
  pinMode(ms2Pin, OUTPUT);
  pinMode(ms3Pin, OUTPUT);

  digitalWrite(ms1Pin, HIGH);
  digitalWrite(ms1Pin, HIGH);
  digitalWrite(ms1Pin, HIGH);
  
  digitalWrite(dirPin, HIGH);
}

void loop(){
		digitalWrite(stepPin, HIGH);
		delayMicroseconds(speedDelay);
		digitalWrite(stepPin, LOW);
		delayMicroseconds(speedDelay);
}