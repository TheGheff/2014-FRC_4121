#include "PullBackWinch.h"

PullBackWinch::PullBackWinch() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void PullBackWinch::Initialize() {
	printf("Initialize\n");
	
}

// Called repeatedly when this Command is scheduled to run
void PullBackWinch::Execute() {
	printf("Execute\n");
	//dsLCD->testUpdate("PullBackWinch::exe");
	winchSubsystem->Retract();
}

// Make this return true when this Command no longer needs to run execute()
bool PullBackWinch::IsFinished() {
	//printf("IsFinished\n");
	bool ret_val = false;
	if (winchSubsystem->ReadWinchRetractLimitSwitch())
	{
	//	winchSubsystem->RetractHold();
		ret_val = true;
	}
	else
	{
		ret_val = false;
	}
	return ret_val;//false;
}

// Called once after isFinished returns true
void PullBackWinch::End() {
	printf("End\n");
	//winchSubsystem->Release();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PullBackWinch::Interrupted() {
	printf("Interrupted\n");
	winchSubsystem->StopEverything();
}



