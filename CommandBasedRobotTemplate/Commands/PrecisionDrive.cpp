#include "PrecisionDrive.h"

cmdPrecisionDrive::cmdPrecisionDrive() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);
}

// Called just before this Command runs the first time
void cmdPrecisionDrive::Initialize() {	
}

// Called repeatedly when this Command is scheduled to run
void cmdPrecisionDrive::Execute() {
	//chassis->ToggleDrive();
	driverStationLCDSystem->updateLCD(1,NULL,NULL,NULL,NULL);
}

// Make this return true when this Command no longer needs to run execute()
bool cmdPrecisionDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void cmdPrecisionDrive::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdPrecisionDrive::Interrupted() {
}
