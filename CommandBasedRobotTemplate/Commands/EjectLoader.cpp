#include "EjectLoader.h"

EjectLoader::EjectLoader() {
	// Use requires() here to declare subsystem dependencies
	Requires(loaderSubsystem);
}

// Called just before this Command runs the first time
void EjectLoader::Initialize() {
	
	
}

// Called repeatedly when this Command is scheduled to run
void EjectLoader::Execute() {
	loaderSubsystem->Eject();
}

// Make this return true when this Command no longer needs to run execute()
bool EjectLoader::IsFinished() {
	//printf("IsFinished\n");
	return TRUE;
}

// Called once after isFinished returns true
void EjectLoader::End() {
	printf("End\n");
	//winchSubsystem->Release();
	//loaderSubsystem->StopEverything();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void EjectLoader::Interrupted() {
	printf("Interrupted\n");
	//loaderSubsystem->StopEverything();
}



