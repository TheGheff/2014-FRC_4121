#include "EjectLoader.h"

cmdEjectLoader::cmdEjectLoader() {
	// Use requires() here to declare subsystem dependencies
	Requires(loaderSubsystem);
}

// Called just before this Command runs the first time
void cmdEjectLoader::Initialize() {
	
	
}

// Called repeatedly when this Command is scheduled to run
void cmdEjectLoader::Execute() {
	loaderSubsystem->Eject();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdEjectLoader::IsFinished() {
	//printf("IsFinished\n");
	return TRUE;
}

// Called once after isFinished returns true
void cmdEjectLoader::End() {
	printf("End\n");
	//winchSubsystem->Release();
	//loaderSubsystem->StopEverything();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdEjectLoader::Interrupted() {
	printf("Interrupted\n");
	//loaderSubsystem->StopEverything();
}



