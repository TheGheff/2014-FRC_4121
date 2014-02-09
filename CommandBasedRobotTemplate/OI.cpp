#include "OI.h"
#include "Robotmap.h"
#include <DigitalInput.h>
#include "Commands/ExampleCommand.h"
#include "Commands/PrecisionDrive.h"
#include "Commands/ExtendLoaderCommand.h"
#include "Commands/RetractLoaderCommand.h"
#include "Commands/PullBackWinch.h"
#include "Commands/ReleaseWinch.h"
#include "Commands/ToggleDrive.h"
#include "Commands/ActivateLoader.h"
#include "Commands/DeactivateLoader.h"
#include "Commands/EjectLoader.h"
#include "Commands/StopEverything.h"
#include "Commands/EmergencyStop.h"

OI::OI() {
	// Process operator interface input here.
	
	//setup driverstation ldc
	dsLCD = DriverStationLCD::GetInstance();

	//Setup the Camera Gimble
	cameraControlStick = new Joystick(JOYSTICKCAMERA); 

	//Right Joystick
	driveStickR = new Joystick(JOYSTICKRIGHT);
	button1 = new JoystickButton(driveStickR, TRIGGER);
	
	//Winch Setup
	retractWinch = new JoystickButton(driveStickR, THUMB_BUTTON_DOWN);
	retractWinch->WhenPressed(new cmdPullBackWinch());
	releaseWinch = new JoystickButton(driveStickR, THUMB_BUTTON_UP);
	releaseWinch->WhenPressed(new cmdReleaseWinch());

	//Left Joystick
	driveStickL = new Joystick(JOYSTICKLEFT);
	
	//Precision Drive
	precisionDriveButton = new JoystickButton(driveStickL, THUMB_BUTTON_DOWN);
	precisionDriveButton->ToggleWhenPressed(new cmdToggleDrive());
	
	//Loader Solenoid
	loaderSolenoidUp = new JoystickButton(driveStickR, LEFT_SIDE_UP);
	loaderSolenoidUp->WhenPressed(new cmdExtendLoaderCommand());
	loaderSolenoidDown = new JoystickButton(driveStickR, LEFT_SIDE_DOWN);
	loaderSolenoidDown->WhenPressed(new cmdRetractLoaderCommand());
	
	//runs the loader motor to bring ball in
	loaderIngestButton = new JoystickButton(driveStickL,THUMB_BUTTON_LEFT);
	loaderIngestButton->WhenPressed(new cmdActivateLoader());
	//runs the loader motor to spit ball out
	loaderEjectButton = new JoystickButton(driveStickL,THUMB_BUTTON_RIGHT);
	loaderEjectButton->WhenPressed(new cmdEjectLoader());
	//stops the loader motor
	loaderStopButton = new JoystickButton(driveStickL,THUMB_BUTTON_UP);
	loaderStopButton->WhenPressed(new cmdStopEverything());
	//loaderButton->WhenReleas ed(new DeactivateLoader());
	
	//stop everything on robot
	stopAll = new JoystickButton(driveStickR,RIGHT_SIDE_UP);
	stopAll->WhenPressed(new cmd());

}

DriverStationLCD* OI::getDriverStation() {
	return dsLCD;
}


Joystick* OI::getDriveStickL() {
	return driveStickL;
}

Joystick* OI::getDriveStickR() {
	return driveStickR;
}
