#include "AutoDriveXs.h"
autocmdDriveFowardXs::autocmdDriveFowardXs(int driveTimeInS) {
	// Use requires() here to declare subsystem dependencies
	SetTimeout(driveTimeInS);
	//seconds = driveTimeInS;
	//timer = new Timer();
}

// Called just before this Command runs the first time
void autocmdDriveFowardXs::Initialize() {
	//timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void autocmdDriveFowardXs::Execute() {
	chassis->autoDriveSystem(.6,.6);
}

// Make this return true when this Command no longer needs to run execute()
bool autocmdDriveFowardXs::IsFinished() {
	//printf("IsFinished\n");
	if(IsTimedOut()/*||timer->Get()>=seconds*/){
		return true;
	}
	return false;
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



