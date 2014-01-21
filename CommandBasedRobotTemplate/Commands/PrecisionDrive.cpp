#include "PrecisionDrive.h"

PrecisionDrive::PrecisionDrive() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);
}

// Called just before this Command runs the first time
void PrecisionDrive::Initialize() {	
}

// Called repeatedly when this Command is scheduled to run
void PrecisionDrive::Execute() {
	chassis->precisionDriveSystem(oi->getDriveStickL(), oi->getDriveStickR());
}

// Make this return true when this Command no longer needs to run execute()
bool PrecisionDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PrecisionDrive::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PrecisionDrive::Interrupted() {
}
