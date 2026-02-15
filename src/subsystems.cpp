#include "globals.h"
#include "pros/rtos.hpp"
#include "subsystems.h"


// ====== DEFINE STATES (ONLY HERE) ======
bool descoreState = false;
bool matchLoadState = false;



// ====== TOGGLES ======

void toggleMatchloader() {
    matchLoadState = !matchLoadState;
    matchLoader.set_value(matchLoadState);
}

void toggleDescore() {
    descoreState = !descoreState;
    descore.set_value(descoreState);
}



//--- Scoring ---//

void scoreBottom()
{
    intakeBottom.move(-127);
    intakeTop.move(-127);
}

void scoreLong()
{

    outake.set_value(true);
    pros::delay(50);
    intakeBottom.move(127);
    intakeTop.move(127);

}


void scoreMiddle()
{
    outake.set_value(false);
    pros::delay(50);
    intakeBottom.move(127);
    intakeTop.move(127);

}

void matchload()
{
     intakeBottom.move(127);   
}




