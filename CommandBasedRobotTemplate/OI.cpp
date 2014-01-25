#include "OI.h"
#include "Robotmap.h"
#include "Commands/ExampleCommand.h"
#include "Commands/PrecisionDrive.h"
#include "Commands/ExtendLoaderCommand.h"
#include "Commands/RetractLoaderCommand.h"
#include "Commands/PullBackWinch.h"

OI::OI() {
	// Process operator interface input here.

	// Create the two Joystick objects
	//Right Joystick
	driveStickR = new Joystick(JOYSTICKRIGHT);
	button1 = new JoystickButton(driveStickR, TRIGGER);
	
	//Winch Motor
	retractWinch = new JoystickButton(driveStickR, THUMB_BUTTON_DOWN);
	retractWinch->WhenPressed(new PullBackWinch());
	releaseWinch = new JoystickButton(driveStickR, THUMB_BUTTON_UP);
	releaseWinch->WhenPressed(new RetractLoaderCommand());
	//Timer babyPuncher = new Timer();

	//Left Joystick
	driveStickL = new Joystick(JOYSTICKLEFT);
	
	//Precision Drive
	precisionDriveButton = new JoystickButton(driveStickL, THUMB_BUTTON_DOWN);
	precisionDriveButton->ToggleWhenPressed(new PrecisionDrive());
	
	//Loader Solenoid
	loaderSolenoidUp = new JoystickButton(driveStickL, LEFT_SIDE_UP);
	loaderSolenoidUp->WhenPressed(new ExtendLoaderCommand());
	loaderSolenoidDown = new JoystickButton(driveStickL, LEFT_SIDE_DOWN);
	loaderSolenoidDown->WhenPressed(new RetractLoaderCommand());
	
	// Create the Precision Drive System controls


}

Joystick* OI::getDriveStickL() {
	return driveStickL;
}

Joystick* OI::getDriveStickR() {
	return driveStickR;
}

//Joystick* OI::getManipulatorStick() {
//	return manipulatorStick;
//}
