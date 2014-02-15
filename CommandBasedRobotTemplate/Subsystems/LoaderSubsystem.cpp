#include "LoaderSubsystem.h"
#include "../Robotmap.h"
#include "DoubleSolenoid.h"
LoaderSubsystem::LoaderSubsystem() : Subsystem("LoaderSubsystem") {
	//this is the constructor

	feederMotor = new Jaguar(FEEDERMOTOR);
	loaderSol = new DoubleSolenoid(4, 5);
	counter=0;
}
    
void LoaderSubsystem::InitDefaultCommand() {
}

void LoaderSubsystem::RunLoader() {
		feederMotor->Set(-.9, 0);
}

void LoaderSubsystem::Eject(){
		feederMotor->Set(.9, 0);
}

void LoaderSubsystem::StopEverything(){
	feederMotor->Set(-0, 0);
	loaderSol->Set(loaderSol->kOff);
}

void  LoaderSubsystem::RaiseLoader(){
	loaderSol->Set(loaderSol->kReverse);
}

void  LoaderSubsystem::LowerLoader(){
	loaderSol->Set(loaderSol->kForward);
}

void  LoaderSubsystem::StopLoader(){
	loaderSol->Set(loaderSol->kOff);
}

DoubleSolenoid::Value LoaderSubsystem::GetLoaderPosition(){
	return loaderSol->Get();
}
