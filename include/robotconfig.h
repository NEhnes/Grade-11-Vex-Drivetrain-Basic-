#include "vex.h" 
using namespace vex; 
using signature = vision::signature; 
using code = vision::code; 

// A global instance of brain used for printing to the V5 brain screen 
brain Brain; 

// VEXcode device constructors 
controller Controller1 = controller(primary); 

// VEXcode device constructors 
motor leftMotorA = motor(PORT1, ratio18_1, false); 
motor leftMotorB = motor(PORT10, ratio18_1, false); 
motor_group LeftDriveSmart = motor_group(leftMotorA, leftMotorB); 
motor rightMotorA = motor(PORT11, ratio18_1, true);  
motor rightMotorB = motor(PORT20, ratio18_1, true);  
motor_group RightDriveSmart = motor_group(rightMotorA, rightMotorB); 
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 295, 165, mm, 1); 

// VEXcode generated functions 
//motor ClawMotor = motor(PORT3, ratio18_1, false); 
//motor ArmMotor = motor(PORT8, ratio18_1, false); 
// VEXcode generated functions 
/** 
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro. 
 * 
 * This should be called at the start of your int main function. 
 */ 

void vexcodeInit(void) { 

} 