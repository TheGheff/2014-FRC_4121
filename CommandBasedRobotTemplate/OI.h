#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick *driveStickR, *driveStickL, *cameraControlStick;
	
public:
	OI();
	Joystick *getcameraControlStick();
	DriverStationLCD* getDriverStation();
	
	DriverStationLCD *dsLCD;

	//Right JoyStick
	Joystick* getDriveStickR();
	JoystickButton *button1; // Button 1 is the trigger
	
	//Left Joystick
	Joystick* getDriveStickL();
	
	JoystickButton 	*loaderIngestButton, *loaderEjectButton, *loaderStopButton;
	JoystickButton 	*precisionDriveButton; // Button 2 is the down thumb button
	JoystickButton 	*loaderSolenoidUp, *loaderSolenoidDown;  
	JoystickButton 	*retractWinch, *releaseWinch;
	JoystickButton  *stopAll;
	DigitalInput	*retractHoldWinch;
	
};

#endif

