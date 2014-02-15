#include "ReleaseWinch.h"
cmdReleaseWinch::cmdReleaseWinch() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void cmdReleaseWinch::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void cmdReleaseWinch::Execute() {
	//winchSubsystem->Release();
	switch(	CommandBase::loaderSubsystem->GetLoaderPosition())
	{
		case DoubleSolenoid::kForward:
			winchSubsystem->Release();
			break;
		case DoubleSolenoid::kOff:
			break;
		case DoubleSolenoid::kReverse:
			break;
		default:
			break;
	}
	
}

// Make this return true when this Command no longer needs to run execute()
bool cmdReleaseWinch::IsFinished() {
	return TRUE;
}

// Called once after isFinished returns true
void cmdReleaseWinch::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdReleaseWinch::Interrupted() {
}
