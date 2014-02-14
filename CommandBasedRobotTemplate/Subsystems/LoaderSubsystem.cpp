#include "LoaderSubsystem.h"
#include "../Robotmap.h"
#include "DoubleSolenoid.h"
//#include "../CommandBase.h"
LoaderSubsystem::LoaderSubsystem() : Subsystem("LoaderSubsystem") {
	//this is the constructor

	feederMotor = new Jaguar(FEEDERMOTOR);
//	retractLimitSwitch = new DigitalInput(LOADER_RETRACT_LIMIT_SWITCH_I);
//	extendLimitSwitch = new DigitalInput(LOADER_EXTEND_LIMIT_SWITCH_I);
//	loaderSol = new DoubleSolenoid(EXTEND_LOADER_RELAY, RETRACT_LOADER_RELAY);//channels
	loaderSol = new DoubleSolenoid(4, 5);
	counter=0;
}
    
void LoaderSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void LoaderSubsystem::RunLoader() {
		feederMotor->Set(-1, 0);
		//driverStationLCDSystem->testUpdate("Over 200");
}

void LoaderSubsystem::Eject(){
		feederMotor->Set(1, 0);
		//driverStationLCDSystem->testUpdate("Count");
}

void LoaderSubsystem::StopEverything(){
	feederMotor->Set(-0, 0);//SetSpeed(0);//winch motor stops running
	loaderSol->Set(loaderSol->kOff);
	counter=0;
}

/*
bool LoaderSubsystem::ReadLoaderRetractLimitSwitch(){
	return retractLimitSwitch->Get();
}

bool LoaderSubsystem::ReadLoaderExtendLimitSwitch(){
	return extendLimitSwitch->Get();
}
*/
void  LoaderSubsystem::RaiseLoader(){
	loaderSol->Set(loaderSol->kReverse);
}

void  LoaderSubsystem::LowerLoader(){
	loaderSol->Set(loaderSol->kForward);
}

void  LoaderSubsystem::StopLoader(){
	loaderSol->Set(loaderSol->kOff);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

