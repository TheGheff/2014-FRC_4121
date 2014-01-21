#include "RelaySubsystem.h"
#include "../Robotmap.h"

RelaySubsystem::RelaySubsystem(char relay_channel) : Subsystem("RelaySubsystem") {
	relay = new Relay(relay_channel);
}
    
void RelaySubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void RelaySubsystem::On() {
	relay->Set(Relay::kOn); // Turns on some lights in the relay section
}

void RelaySubsystem::Off() {
	relay->Set(Relay::kOff); // Turns off some lights in the relay section
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

