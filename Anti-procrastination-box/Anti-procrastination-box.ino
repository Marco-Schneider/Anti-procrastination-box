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

//Buttons
const int startButton = 6;
const int positionButton = 7;
const int minusButton = 8;
const int plusButton = 9;

void setup() {
  //Initializing the LCD display
  lcd.begin(16, 2);
  
  //Setting up the buttons as input
  pinMode(startButton, INPUT);
  pinMode(positionButton, INPUT);
  pinMode(minusButton, INPUT);
  pinMode(plusButton, INPUT);

  //Attaching the servo to a pin
  myServo.attach(10);

}

void loop() {
  // put your main code here, to run repeatedly:

}
