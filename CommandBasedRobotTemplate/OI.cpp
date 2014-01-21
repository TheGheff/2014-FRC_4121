#include "OI.h"
#include "Robotmap.h"
#include "Commands/ExampleCommand.h"
#include "Commands/PrecisionDrive.h"
#include "Commands/ExtendLoaderCommand.h"
#include "Commands/RetractLoaderCommand.h"

OI::OI() {
	// Process operator interface input here.
	//joystick1 = new Joystick(1);
	// Create the two Joystick objects
//Right Joystick
	driveStickR = new Joystick(JOYSTICKRIGHT);
	button1 = new JoystickButton(driveStickR, TRIGGER);
	
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
