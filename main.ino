#include <Servo.h>

// left leg
Servo LeftJ1;
Servo LeftJ2;
//right leg
Servo RightJ1;
Servo RightJ2;
  // create Servo object to control a servo
// twelve Servo objects can be created on most boards

void setup() {
  LeftJ1.attach(X);  
  LeftJ2.attach(X);
  RightJ1.attach(X);
  RightJ2.attach(X);

// leg motions
void LeftLegForward() {
    
}

void LeftLegBackward() {}

void RightLegForward() {}

void RightLegBackward() {}

// combined walking functions
void WalkForward() {
    LeftLegForward()
    RightLegForward()
}

void WalkBackward() {
    LeftLegBackward()
    RightLegBackward()
}

void TurnLeft() {
    LeftLegBackward()
    RightLegForward()
}

void TurnRight() {
    LeftLegForward()
    RightLegBackward()
}

void FoldLegsIn() {}

void 
  //Serial.begin(9600); 
}

void loop() {

}
