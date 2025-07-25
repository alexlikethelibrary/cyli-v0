// source file

// include errors are fake don't listen to them
// there's something funny about vscode specifically
#include "Arduino.h"
#include "Servo.h"
#include "Robot.h"

Robot::Robot(){}
/**
 * L1 is first link, moving this moves whole leg
 * L2 is second link, moving this only moves the end of the leg
 * J1 is first joint, moving this rotates the whole leg
 * J2 is second joint, moving this rotates the end of the leg
**/

//store angles in local variables this is annoying
const int J1front = 1;
const int J1back = 1;
const int J2stand = 1;
const int J2in = 1;
const int J2inInverted = 1;


// combined walking functions
// walk forward, assumes standard (non inverted positioning)
void Robot::WalkForward() {
// moves L2 in
    LeftJ2.write(45+30);
    RightJ2.write(45-30);
    delay(50); 
    //.05 seconds, based on distance travelled above, make math function separate
//moves legs to forward position
    LeftJ1.write(45+30);
    RightJ1.write(45-30);
    delay(50);
//moves L2 to down position
    LeftJ2.write(45);
    RightJ2.write(45);
    delay(50);
//moves legs to back position 
    LeftJ1.write(45-30);
    RightJ1.write(45+30);
    delay(50);
}

void Robot::WalkBackward() {
// moves L2 in
    LeftJ2.write(45+30);
    RightJ2.write(45-30);
    delay(50); 
//moves legs to back position 
    LeftJ1.write(45-30);
    RightJ1.write(45+30);
    delay(50);
//moves L2 to down position
    LeftJ2.write(45);
    RightJ2.write(45);
    delay(50);
//moves legs to forward position
    LeftJ1.write(45+30);
    RightJ1.write(45-30);
    delay(50);
}

void Robot::TurnLeft() {
// moves L2 in
    LeftJ2.write(45+30);
    RightJ2.write(45-30);
    delay(50); 
//left leg back, right leg forward
    LeftJ1.write(45-30);
    RightJ1.write(45-30);
    delay(50); 
//moves L2 to down position
    LeftJ2.write(45);
    RightJ2.write(45);
    delay(50);
//left leg forward, right leg back
    LeftJ2.write(45+30);
    RightJ2.write(45+30);
    delay(50);
}

void Robot::TurnRight() {
// moves L2 in
    LeftJ2.write(45+30);
    RightJ2.write(45-30);
    delay(50); 
//left leg back, right leg forward
    LeftJ1.write(45+30);
    RightJ1.write(45+30);
    delay(50); 
//moves L2 to down position
    LeftJ2.write(45);
    RightJ2.write(45);
    delay(50);
//left leg forward, right leg back
    LeftJ2.write(45-30);
    RightJ2.write(45-30);
    delay(50);
}

void Robot::FoldLegsIn() {
    LeftJ2.write(45+30);
    RightJ2.write(45-30);
}

void Robot::InvertFoldLegsIn() {
    LeftJ2.write(45-30);
    RightJ2.write(45+30);
}

// individual leg functions
// split based off of above, assumes standard (non inverted positioning)
void Robot::LeftLegFoward(){}
void Robot::LeftLegBackward(){}
void Robot::RightLegForward(){}
void Robot::RightLegBackward(){}
