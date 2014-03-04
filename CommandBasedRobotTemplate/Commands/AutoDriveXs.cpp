#include "AutoDriveXs.h"
autocmdDriveFowardXs::autocmdDriveFowardXs(char driveTimeInS) {
	// Use requires() here to declare subsystem dependencies
	char driveTime = driveTimeInS;
	SetTimeout(driveTime);
}

// Called just before this Command runs the first time
void autocmdDriveFowardXs::Initialize() {
	
	
}

// Called repeatedly when this Command is scheduled to run
void autocmdDriveFowardXs::Execute() {
	chassis->autoDriveSystem(1,1);
}

// Make this return true when this Command no longer needs to run execute()
bool autocmdDriveFowardXs::IsFinished() {
	//printf("IsFinished\n");
	return IsTimedOut();
}

// Called once after isFinished returns true
void autocmdDriveFowardXs::End() {
	chassis->autoDriveSystem(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void autocmdDriveFowardXs::Interrupted() {
	printf("Interrupted\n");
	//loaderSubsystem->StopEverything();
}



