//header file
#ifndef Robot_h
#define Robot_h
// include errors are fake don't listen to them
// there's something funny about vscode specifically
#include <Arduino.h>
#include <Servo.h>

class Robot {
  private:
  public:
    Robot();
    // individual leg walking functions
    void LeftLegFoward();
    void LeftLegBackward();
    void RightLegForward();
    void RightLegBackward();

    // combined walking functions
    void WalkForward();
    void WalkBackward();
    void TurnLeft();
    void TurnRight();
    void FoldLegsIn();
    void InvertFoldLegsIn();
};
#endif