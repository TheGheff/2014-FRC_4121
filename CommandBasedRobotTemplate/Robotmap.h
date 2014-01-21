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
	TRIGGER = 1, // Button Number 1
	THUMB_BUTTON_DOWN, // Button Number 2
	THUMB_BUTTON_UP,
	THUMB_BUTTON_LEFT,
	THUMB_BUTTON_RIGHT, // Button Number 5	
	LEFT_SIDE_UP,
	LEFT_SIDE_DOWN,
	FRONT_SIDE_LEFT,
	FRONT_SIDE_RIGHT,
	RIGHT_SIDE_DOWN, // Button Number 10
	RIGHT_SIDE_UP,
	NUM_OF_JOYSTICK_BUTTONS
} JOYSTICE_BUTTONS_T;

//######### Motors #########
#define DRIVEMOTORRIGHT (2)
#define DRIVEMOTORLEFT  (1)


#endif
