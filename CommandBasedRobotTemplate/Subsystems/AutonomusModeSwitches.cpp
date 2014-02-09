#include "AutonomusModeSwitches.h"
#include "../Robotmap.h"


AutonomusModeSwitches::AutonomusModeSwitches() : Subsystem("AutonomusModeSwitches") {
	switch1 = new DigitalInput(DIO11);
	switch2 = new DigitalInput(DIO12);
	switch3 = new DigitalInput(DIO13);
	switch4 = new DigitalInput(DIO14);
}
    
void AutonomusModeSwitches::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
int AutonomusModeSwitches::GetMode() {
	return (((bool)switch4)<<3)+(((bool)switch3)<<2)+(((bool)switch2)<<1)+(bool)switch1;
}
