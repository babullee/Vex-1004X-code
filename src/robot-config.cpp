#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:

motor Leftfrontmotor = motor(PORT11, ratio6_1, true);
motor Leftmiddlemotor = motor(PORT2, ratio6_1, true);
motor Leftbackmotor = motor(PORT12, ratio6_1, true);
motor Rightfrontmotor = motor(PORT19, ratio6_1, false); //bad connection
motor Rightmiddlemotor = motor(PORT9, ratio6_1, false);
motor Rightbackmotor = motor(PORT18, ratio6_1, false);

motor intake1 = motor(PORT13,ratio6_1,false);
motor intake2 = motor(PORT20,ratio6_1,false); //big motor
motor intake3 = motor(PORT17,ratio6_1,true);
pneumatics head_piston = pneumatics(Brain.ThreeWirePort.G);
pneumatics intake_piston = pneumatics(Brain.ThreeWirePort.H);

void vexcodeInit( void ) {
  // nothing to initialize
}