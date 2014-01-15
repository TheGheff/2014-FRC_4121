#include "ExampleSubsystem.h"
#include "../Robotmap.h"

ExampleSubsystem::ExampleSubsystem() : Subsystem("ExampleSubsystem") {
	relay1 = new Relay(1);
}
    
void ExampleSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void ExampleSubsystem::On() {
	relay1->Set(Relay::kOn); // Turns on some lights in the relay section
}

void ExampleSubsystem::Off() {
	relay1->Set(Relay::kOff); // Turns off some lights in the relay section
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

