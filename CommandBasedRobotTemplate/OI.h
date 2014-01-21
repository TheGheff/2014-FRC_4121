#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick *driveStickL, *driveStickR;
public:
	OI();
	//Right JoyStick
	Joystick* getDriveStickR();
	JoystickButton *button1; // Button 1 is the trigger
	
	//Left Joystick
	Joystick* getDriveStickL();

	JoystickButton *precisionDriveButton; // Button 2 is the down thumb button
	JoystickButton *loaderSolenoidUp, *loaderSolenoidDown;  
	
	
};

#endif

