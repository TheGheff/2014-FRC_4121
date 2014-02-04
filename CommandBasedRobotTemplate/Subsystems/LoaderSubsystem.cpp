#include "LoaderSubsystem.h"
#include "../Robotmap.h"

LoaderSubsystem::LoaderSubsystem() : Subsystem("LoaderSubsystem") {
	//this is the constructor

	feederMotor = new Jaguar(FEEDERMOTOR);

}
    
void LoaderSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void LoaderSubsystem::RunLoader() {
	feederMotor->SetSpeed(-.5);
}

void LoaderSubsystem::Eject(){

	feederMotor->SetSpeed(.5);
	
}

void LoaderSubsystem::StopEverything(){
	feederMotor->SetSpeed(0);//winch motor stops running
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

