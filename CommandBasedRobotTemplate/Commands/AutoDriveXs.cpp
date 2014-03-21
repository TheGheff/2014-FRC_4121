#include "AutoDriveXs.h"
autocmdDriveXs::autocmdDriveXs(int driveTimeInS/*, bool direction*/) {
	// Use requires() here to declare subsystem dependencies
	driveTime = driveTimeInS;
	//isForward = direction;
	SetTimeout(driveTime);
}

// Called just before this Command runs the first time
void autocmdDriveXs::Initialize() {
	
	
}

// Called repeatedly when this Command is scheduled to run
void autocmdDriveXs::Execute() {
	chassis->autoDriveSystem(.5,.5);
}

// Make this return true when this Command no longer needs to run execute()
bool autocmdDriveXs::IsFinished() {
	//printf("IsFinished\n");
	return IsTimedOut();
}

// Called once after isFinished returns true
void autocmdDriveXs::End() {
	chassis->autoDriveSystem(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void autocmdDriveXs::Interrupted() {
	printf("Interrupted\n");
	//loaderSubsystem->StopEverything();
}



