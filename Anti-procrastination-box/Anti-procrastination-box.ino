//Prototipe of an anti-procrastination box - v0.1

//Servomotor utilized - SG90

#include <Servo.h>
#include <LiquidCrystal.h>

//Variables of interest
//Servomotor
Servo myServo; //Creating the object myServo
int angle = 0; //Adjust the initial angle of the servomotor

//LCD display
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //Pin numbers
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //Inputing the pin numbers into the lcd variable of type LiquidCrystal

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
