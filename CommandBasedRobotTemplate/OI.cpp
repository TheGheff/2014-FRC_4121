#include "OI.h"
#include "Robotmap.h"
#include <DigitalInput.h>
#include "Commands/ExampleCommand.h"
#include "Commands/PrecisionDrive.h"
#include "Commands/ExtendLoaderCommand.h"
#include "Commands/RetractLoaderCommand.h"
#include "Commands/PullBackWinch.h"
#include "Commands/ReleaseWinch.h"
#include "Commands/HoldWinch.h"
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
	driveStickL = new Joystick(JOYSTICKLEFT);
	button1 = new JoystickButton(driveStickL, TRIGGER);
	
	//Winch Setup
	retractWinch = new JoystickButton(driveStickL, THUMB_BUTTON_DOWN);
	retractWinch->WhenPressed(new cmdPullBackWinch());
	retractWinch->WhenReleased (new cmdHoldWinch());
	
	releaseWinch = new JoystickButton(driveStickL, THUMB_BUTTON_UP);
	releaseWinch->WhenPressed(new cmdReleaseWinch());

	//Left Joystick
	driveStickR = new Joystick(JOYSTICKRIGHT);
	
	
	//Precision Drive
	precisionDriveButton = new JoystickButton(driveStickR, THUMB_BUTTON_DOWN);
	precisionDriveButton->ToggleWhenPressed(new cmdToggleDrive());
	
	//Loader Solenoid
	loaderSolenoidUp = new JoystickButton(driveStickL, THUMB_BUTTON_LEFT);
	loaderSolenoidUp->WhenPressed(new cmdExtendLoaderCommand());
	loaderSolenoidDown = new JoystickButton(driveStickL, THUMB_BUTTON_RIGHT);
	loaderSolenoidDown->WhenPressed(new cmdRetractLoaderCommand());
	
	//runs the loader motor to bring ball in
	loaderIngestButton = new JoystickButton(driveStickR,THUMB_BUTTON_LEFT);
	loaderIngestButton->WhenPressed(new cmdActivateLoader());
	//runs the loader motor to spit ball out
	loaderEjectButton = new JoystickButton(driveStickR,THUMB_BUTTON_RIGHT);
	loaderEjectButton->WhenPressed(new cmdEjectLoader());
	//stops the loader motor
	loaderStopButton = new JoystickButton(driveStickR,THUMB_BUTTON_UP);
	loaderStopButton->WhenPressed(new cmdDeactivateLoader());
	//loaderButton->WhenReleas ed(new DeactivateLoader());
	
	//stop everything on robot
	stopAll = new JoystickButton(driveStickL,LEFT_SIDE_UP);
	stopAll->WhenPressed(new cmdEmergencyStop());

}

DriverStationLCD* OI::getDriverStation() {
	return dsLCD;
}

Joystick* OI::getcameraControlStick() {
	return cameraControlStick;
}

Joystick* OI::getDriveStickL() {
	return driveStickR;
}

Joystick* OI::getDriveStickR() {
	return driveStickL;
}
