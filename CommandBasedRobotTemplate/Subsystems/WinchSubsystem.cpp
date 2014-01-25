#include "WinchSubsystem.h"
#include "../Robotmap.h"

WinchSubsystem::WinchSubsystem() : Subsystem("WinchSubsystem") {
	relay1 = new Relay(ENGAGE_WINCH);
	relay2 = new Relay(DISENGAGE_WINCH);
	winchMotor = new Jaguar(WINCHMOTOR);
	feederMotor = new Jaguar(FEEDERMOTOR);
	
}
    
void WinchSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void WinchSubsystem::Retract() {
	relay1->Set(Relay::kOn);
	relay2->Set(Relay::kOff);
	winchMotor->SetSpeed(.7);
}

void WinchSubsystem::Release() {
	relay1->Set(Relay::kOff); // Turns off some lights in the relay section
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

