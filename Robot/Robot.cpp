// source file

// include errors are fake don't listen to them
// there's something funny about vscode specifically
#include "Arduino.h"
#include "Servo.h"
#include "Robot.h"

Robot::Robot(){}

// individual leg functions
void Robot::LeftLegFoward(){
    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
        // in steps of 1 degree
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15 ms for the servo to reach the position
      }
      for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15 ms for the servo to reach the position
      }
      // above stolen from Sweep example for reference
}

void Robot::LeftLegBackward(){}

void Robot::RightLegForward(){}

void Robot::RightLegBackward(){}

// combined walking functions
void Robot::WalkForward() {
    LeftLegFoward();
    RightLegForward();
}

void Robot::WalkBackward() {
    LeftLegBackward();
    RightLegBackward();
}

void Robot::TurnLeft() {
    LeftLegBackward();
    RightLegBackward();
}

void Robot::TurnRight() {
    LeftLegFoward();
    RightLegBackward();
}

void Robot::FoldLegsIn() {
    myservo.write(position);
    myservo.write(position);
    myservo.write(position);
    myservo.write(position);
}

void Robot::InvertFoldLegsIn() {
    myservo.write(position);
    myservo.write(position);
    myservo.write(position);
    myservo.write(position);
}
