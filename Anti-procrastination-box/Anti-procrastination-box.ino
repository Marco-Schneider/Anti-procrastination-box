//Prototipe of an anti-procrastination box - v0.1

//Servomotor utilized - SG90

#include <Servo.h>
#include <LiquidCrystal.h>
#include <time.h>

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

//Entered time
//Hours : Minutes : Seconds
//HH : MM : SS
int enteredTime[6];

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

  //Setting up the LCD for display
  lcd.setCursor(0, 0);
  lcd.print("Timer: ");
  lcd.setCursor(4, 1);
  lcd.print("00");
  lcd.setCursor(6,1);
  lcd.print(":");
  lcd.setCursor(7, 1);
  lcd.print("00");
  lcd.setCursor(9,1);
  lcd.print(":");
  lcd.setCursor(10, 1);
  lcd.print("00");

}

void loop() {
  //The cursor can occupy the following positions: 4,1; 5,1; 7,1; 8,1; 10.1; 11,1
  //The ideia is to let the user move the cursor along and input the numbers corresponding to hours, minutes and seconds using the minusButton and the plusButton
  //In possession of these information, the program will procede to count the time down;


}

void display(){



}
