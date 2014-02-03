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

OI::OI() {
	// Process operator interface input here.

	// Create the two Joystick objects
	//Right Joystick
	driveStickR = new Joystick(JOYSTICKRIGHT);
	button1 = new JoystickButton(driveStickR, TRIGGER);
	
	//Winch Setup
	retractWinch = new JoystickButton(driveStickR, LEFT_SIDE_UP);
	retractWinch->WhenPressed(new PullBackWinch());
	releaseWinch = new JoystickButton(driveStickR, LEFT_SIDE_DOWN);
	releaseWinch->WhenPressed(new ReleaseWinch());
	
	
	//Timer babyPuncher = new Timer();

	//Left Joystick
	driveStickL = new Joystick(JOYSTICKLEFT);
	
	//Precision Drive
	precisionDriveButton = new JoystickButton(driveStickL, THUMB_BUTTON_DOWN);
	precisionDriveButton->ToggleWhenPressed(new cmdToggleDrive());
	
	//Loader Solenoid
	loaderSolenoidUp = new JoystickButton(driveStickL, LEFT_SIDE_UP);
	loaderSolenoidUp->WhenPressed(new ExtendLoaderCommand());
	loaderSolenoidDown = new JoystickButton(driveStickL, LEFT_SIDE_DOWN);
	loaderSolenoidDown->WhenPressed(new RetractLoaderCommand());
	
	//runs the loader motor
	loaderButton = new JoystickButton(driveStickL,FRONT_SIDE_LEFT);
	loaderButton->WhenPressed(new ActivateLoader());
	//loaderButton->WhenReleased(new DeactivateLoader());

}

Joystick* OI::getDriveStickL() {
	return driveStickL;
}

Joystick* OI::getDriveStickR() {
	return driveStickR;
}
