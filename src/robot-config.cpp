#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:

motor Leftfrontmotor = motor(PORT18, ratio6_1, false);
motor Leftmiddlemotor = motor(PORT19, ratio6_1, false);
motor Leftbackmotor = motor(PORT20, ratio6_1, true);
motor Rightfrontmotor = motor(PORT13, ratio6_1, true);
motor Rightmiddlemotor = motor(PORT12, ratio6_1, true);
motor Rightbackmotor = motor(PORT11, ratio6_1, false);

motor intake1 = motor(PORT17,ratio6_1,false);
motor intake2 = motor(PORT14,ratio6_1,false); 
pneumatics head_piston = pneumatics(Brain.ThreeWirePort.G);
pneumatics intake_piston = pneumatics(Brain.ThreeWirePort.H);

void vexcodeInit( void ) {
  // nothing to initialize
}