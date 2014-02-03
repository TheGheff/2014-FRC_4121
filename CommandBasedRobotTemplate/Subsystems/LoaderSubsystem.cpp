#include "LoaderSubsystem.h"
#include "../Robotmap.h"

LoaderSubsystem:: LoaderSubsystem () : Subsystem("LoaderSubsystem") 
{
	extendSolenoid = new Relay(ENGAGE_SOLENOIDS);
	retractSolenoid = new Relay(DISENGAGE_SOLENOIDS);
	feederMotor = new Jaguar(FEEDERMOTOR);
}
    
void LoaderSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
	
void LoaderSubsystem::LoaderOn() {
	feederMotor->SetSpeed(.7);//turns feeder motor on not sure of the speed yet
	
}
void LoaderSubsystem::LoaderOff(() {
	feederMotor->SetSpeed(0);//stops feeder motor
	
}
void LoaderSubsystem::RelayExtend(){
	retractSolenoid->Set(Relay::kOff);// make sure solenoids are retracted
	extendSolenoid->Set(Relay::kOn);//extend the solenoids of the feeder
	

	
	
}
void LoaderSubsystem::RelayRetract(){
	extendSolenoid->Set(Relay::kOff);//makes sure solenoids aren’t extended
	retractSolenoid->Set(Relay::kOn); //retract the solenoids of the feeder


	
}
void LoaderSubsystem::StopEverything(){
	extendSolenoid ->Set(Relay::kOff); //stops extending and retracting of feeder solenoids 
	retractSolenoid ->Set(Relay::kOff);
	feederMotor->SetSpeed(0);//feeder motor stops running
}
