#include "WinchSubsystem.h"
#include "../Robotmap.h"

WinchSubsystem::WinchSubsystem() : Subsystem("WinchSubsystem") {
	//this is the constructor
	relay1 = new Relay(ENGAGE_WINCH);
	relay2 = new Relay(DISENGAGE_WINCH);
	winchMotor = new Jaguar(WINCHMOTOR);
	feederMotor = new Jaguar(FEEDERMOTOR);
	retractLimitSwitch = new DigitalInput(WINCH_RETRACT_LIMIT_SWITCH_I);
	
}
    
void WinchSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void WinchSubsystem::Retract() {
	relay1->Set(Relay::kOn);//turns on relay1 which initiates pulling back of the launcher
	relay2->Set(Relay::kOff);
	winchMotor->SetSpeed(.7);
}

void WinchSubsystem::RetractHold() {
	//holds the launcher in retract state but turns the winch motor off
	relay1->Set(Relay::kOn);
	relay2->Set(Relay::kOff);
	winchMotor->SetSpeed(0);
}


void WinchSubsystem::Release() {
	relay1->Set(Relay::kOff); // Turns off some lights in the relay section
	relay2->Set(Relay::kOn); //turns on relay2 which releases the launcher
	winchMotor->SetSpeed(0);
}

void WinchSubsystem::StopEverything(){
	relay1->Set(Relay::kOff); //stops the pulling back of and the releasing of the winch
	relay2->Set(Relay::kOff);
	winchMotor->SetSpeed(0);//winch motor stops running
}

bool WinchSubsystem::ReadLimitSwitch(){
	return retractLimitSwitch->Get();
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

