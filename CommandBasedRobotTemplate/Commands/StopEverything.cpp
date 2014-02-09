#include "StopEverything.h"

cmdStopEverything::cmdStopEverything() {
	// Use requires() here to declare subsystem dependencies
	Requires(loaderSubsystem);
}

// Called just before this Command runs the first time
void cmdStopEverything::Initialize() {
	
	
}

// Called repeatedly when this Command is scheduled to run
void cmdStopEverything::Execute() {
	loaderSubsystem->StopEverything();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdStopEverything::IsFinished() {
	//printf("IsFinished\n");
	return TRUE;
}

// Called once after isFinished returns true
void cmdStopEverything::End() {
	printf("End\n");
	//winchSubsystem->Release();
	//loaderSubsystem->StopEverything();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdStopEverything::Interrupted() {
	printf("Interrupted\n");
	//loaderSubsystem->StopEverything();
}



