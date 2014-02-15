#include "HoldWinch.h"

cmdHoldWinch::cmdHoldWinch() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void cmdHoldWinch::Initialize() {
	printf("Initialize\n");
}

// Called repeatedly when this Command is scheduled to run
void cmdHoldWinch::Execute() {
	winchSubsystem->RetractHold();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdHoldWinch::IsFinished() {
	printf("IsFinished\n");
	return TRUE;
}

// Called once after isFinished returns true
void cmdHoldWinch::End() {
	printf("End\n");
//	winchSubsystem->Release();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdHoldWinch::Interrupted() {
	printf("Interrupted\n");
//	winchSubsystem->Release();
}
