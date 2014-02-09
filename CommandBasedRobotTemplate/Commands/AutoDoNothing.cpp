#include "autoDoNothing.h"

autocmdDoNothing::autocmdDoNothing() {
	// Use requires() here to declare subsystem dependencies
}

// Called just before this Command runs the first time
void autocmdDoNothing::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void autocmdDoNothing::Execute() {
	Wait(1);
}

// Make this return true when this Command no longer needs to run execute()
bool autocmdDoNothing::IsFinished() {	
	return FALSE;
}

// Called once after isFinished returns true
void autocmdDoNothing::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void autocmdDoNothing::Interrupted() {
}



