#include "AutonomousScheduler.h"
#include "AutoDoNothing.h"

cmdAutonomousScheduler::cmdAutonomousScheduler() {
	// Use requires() here to declare subsystem dependencies
}

// Called just before this Command runs the first time
void cmdAutonomousScheduler::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void cmdAutonomousScheduler::Execute() {
	switch(autonomousModeSwitches->GetMode())
	{
	case 0:
		autonCommand = new autocmdDoNothing();
		break;
	default:
		autonCommand = new autocmdDoNothing();
		break;
	}
	
	autonCommand->Run();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdAutonomousScheduler::IsFinished() {	
	return FALSE;
}

// Called once after isFinished returns true
void cmdAutonomousScheduler::End() {
	autonCommand->Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdAutonomousScheduler::Interrupted() {
	End();
}



