#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:

public:
	OI();
	Joystick *joystick1;
	JoystickButton *button1; // Button 1 is the trigger
	JoystickButton *button2;
	JoystickButton *button3;
	JoystickButton *button4;
};

#endif

