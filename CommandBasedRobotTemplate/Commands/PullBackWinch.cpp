#include "PullBackWinch.h"

cmdPullBackWinch::cmdPullBackWinch() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void cmdPullBackWinch::Initialize() {
	printf("Initialize\n");
	
}

// Called repeatedly when this Command is scheduled to run
void cmdPullBackWinch::Execute() {
	printf("Execute\n");
	//dsLCD->testUpdate("PullBackWinch::exe");
	winchSubsystem->Retract();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdPullBackWinch::IsFinished() {
	//printf("IsFinished\n");
	//return (winchSubsystem->ReadWinchRetractLimitSwitch());//false;
	return true;
}

// Called once after isFinished returns true
void cmdPullBackWinch::End() {
	printf("End\n");
	//winchSubsystem->RetractHold();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdPullBackWinch::Interrupted() {
	printf("Interrupted\n");
}



