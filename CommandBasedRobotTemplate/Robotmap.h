#ifndef ROBOTMAP_H
#define ROBOTMAP_H


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// #define LEFTMOTOR 1
// #define RIGHTMOTOR 2

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:



//#########  User Input Devices #########
#define JOYSTICKRIGHT 	(1)
#define JOYSTICKLEFT  	(2)


//######### Joystick Buttons  #########
//#define TRIGGER (1)

typedef enum{
	TRIGGER = 1,
	NUM_OF_JOYSTICK_BUTTONS
} JOYSTICE_BUTTONS_T;

//######### Motors #########
#define DRIVEMOTORRIGHT (1)
#define DRIVEMOTORLEFT  (2)


#endif
