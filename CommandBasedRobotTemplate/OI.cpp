#include "OI.h"
#include "Robotmap.h"
#include "Commands/ExampleCommand.h"

OI::OI() {
	// Process operator interface input here.
	joystick1 = new Joystick(JOYSTICKRIGHT);
	
	button1 = new JoystickButton(joystick1, TRIGGER);
	button1->WhenPressed(new ExampleCommand());
	
	button2 = new JoystickButton(joystick1, 2);
	button2->WhileHeld(new ExampleCommand());
	
	button3 = new JoystickButton(joystick1, 3);
	button3->WhenReleased(new ExampleCommand());
	
}
