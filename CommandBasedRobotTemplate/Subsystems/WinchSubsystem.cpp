#include "WinchSubsystem.h"
#include "../Robotmap.h"
#include "DoubleSolenoid.h"

WinchSubsystem::WinchSubsystem() : Subsystem("WinchSubsystem") {
	//this is the constructor
	sol1 = new DoubleSolenoid(ENGAGE_WINCH,DISENGAGE_WINCH);//channels (the buttons used to retract and release winch)
	winchMotor = new Jaguar(WINCHMOTOR);
//	feederMotor = new Jaguar(FEEDERMOTOR);
	retractLimitSwitch = new DigitalInput(WINCH_RETRACT_LIMIT_SWITCH_I);
	extendLimitSwitch = new DigitalInput(WINCH_EXTEND_LIMIT_SWITCH_I);
	
}
    
void WinchSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void WinchSubsystem::Retract() {
	sol1->Set(sol1->kReverse);//puts solenoid into reverse to pull back the winch
//	oi->getDriverStation()->testUpdate("Winch::Retract");
	winchMotor->SetSpeed(1);
}

void WinchSubsystem::RetractHold() {
	//holds the launcher in retract state but turns the winch motor off
	sol1->Set(sol1->kReverse);
	
	
	winchMotor->SetSpeed(0);
}


void WinchSubsystem::Release() {
	sol1->Set(sol1->kForward); // lets the winch release forward to let hopper go
 
	winchMotor->SetSpeed(0);
}

void WinchSubsystem::StopEverything(){
	sol1->Set(sol1->kOff); //stops the pulling back of and the releasing of the winch
	
	winchMotor->SetSpeed(0);//winch motor stops running
}

bool WinchSubsystem::ReadWinchRetractLimitSwitch(){
	return retractLimitSwitch->Get();
}

bool WinchSubsystem::ReadWinchExtendLimitSwitch(){
	return extendLimitSwitch->Get();
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

