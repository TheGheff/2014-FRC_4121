#include "StopEverything.h"

StopEverything::StopEverything() {
	// Use requires() here to declare subsystem dependencies
	Requires(loaderSubsystem);
}

// Called just before this Command runs the first time
void StopEverything::Initialize() {
	
	
}

// Called repeatedly when this Command is scheduled to run
void StopEverything::Execute() {
	loaderSubsystem->StopEverything();
}

// Make this return true when this Command no longer needs to run execute()
bool StopEverything::IsFinished() {
	//printf("IsFinished\n");
	return TRUE;
}

// Called once after isFinished returns true
void StopEverything::End() {
	printf("End\n");
	//winchSubsystem->Release();
	//loaderSubsystem->StopEverything();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopEverything::Interrupted() {
	printf("Interrupted\n");
	//loaderSubsystem->StopEverything();
}



