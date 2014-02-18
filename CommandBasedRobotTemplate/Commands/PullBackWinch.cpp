#include "PullBackWinch.h"

cmdPullBackWinch::cmdPullBackWinch() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void cmdPullBackWinch::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void cmdPullBackWinch::Execute() {
	//winchSubsystem->Retract();
	switch(	CommandBase::loaderSubsystem->GetLoaderPosition())
	{//is the loader clear
		case DoubleSolenoid::kForward:
			//WE Hope.  It will be clear unless something got jammed
			winchSubsystem->Retract();

			should_exit = false;
			break;
		case DoubleSolenoid::kOff:
			//We have no idea, do nothing to be safe
			should_exit = TRUE;
			break;
		case DoubleSolenoid::kReverse:
			//Probably not, so do nothing cause something coule be bad.  Like really bad.
			should_exit = TRUE;
			break;
		default:
			break;
	}
}

// Make this return true when this Command no longer needs to run execute()
bool cmdPullBackWinch::IsFinished() {
	//Keep it going until the loader is in position
	
	return winchSubsystem->ReadWinchRetractLimitSwitch() || should_exit;
}

// Called once after isFinished returns true
void cmdPullBackWinch::End() {
	winchSubsystem->RetractHold();
	should_exit = FALSE;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdPullBackWinch::Interrupted() {
	//if another command interupts this one, go to safe state
	//winchSubsystem->RetractHold();
}



