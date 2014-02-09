#include "LoaderSubsystem.h"
#include "../Robotmap.h"

LoaderSubsystem::LoaderSubsystem() : Subsystem("LoaderSubsystem") {
	//this is the constructor

	feederMotor = new Victor(FEEDERMOTOR);
	retractLimitSwitch = new DigitalInput(LOADER_RETRACT_LIMIT_SWITCH_I);
	extendLimitSwitch = new DigitalInput(LOADER_EXTEND_LIMIT_SWITCH_I);
	loaderSol = new DoubleSolenoid(4,5);//channels

}
    
void LoaderSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void LoaderSubsystem::RunLoader() {
	feederMotor->Set(-.5, 0);//SetSpeed(-.5);
}

void LoaderSubsystem::Eject(){

	feederMotor->Set(.5, 0);//SetSpeed(.5);
	
}

void LoaderSubsystem::StopEverything(){
	feederMotor->Set(-0, 0);//SetSpeed(0);//winch motor stops running
	loaderSol->Set(DoubleSolenoid::kOff);
}


bool LoaderSubsystem::ReadLoaderRetractLimitSwitch(){
	return retractLimitSwitch->Get();
}

bool LoaderSubsystem::ReadLoaderExtendLimitSwitch(){
	return extendLimitSwitch->Get();
}

void  LoaderSubsystem::RaiseLoader(){
	loaderSol->Set(DoubleSolenoid::kReverse);
}

void  LoaderSubsystem::LowerLoader(){
	loaderSol->Set(DoubleSolenoid::kForward);
}

void  LoaderSubsystem::StopLoader(){
	loaderSol->Set(DoubleSolenoid::kOff);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

