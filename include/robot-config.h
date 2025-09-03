using namespace vex;

extern brain Brain;
extern controller controller1;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;
extern motor Leftfrontmotor;
extern motor Leftmiddlemotor;
extern motor Leftbackmotor;
extern motor Rightfrontmotor;
extern motor Rightmiddlemotor;
extern motor Rightbackmotor;
extern motor intake1;
extern motor intake2;
extern motor intake3;

extern pneumatics head_piston;
extern pneumatics intake_piston;

extern inertial Inertial;

//Add your devices below, and don't forget to do the same in robot-config.cpp:



void  vexcodeInit( void );