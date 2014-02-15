#include "EmergencyStop.h"

cmdEmergencyStop::cmdEmergencyStop() {
	// Use requires() here to declare subsystem dependencies
	Requires(loaderSubsystem);
	Requires(chassis);
	//Requires(relaySubsystem);
	Requires(winchSubsystem);
		
}

// Called just before this Command runs the first time
void cmdEmergencyStop::Initialize() {
	
	
}

// Called repeatedly when this Command is scheduled to run
void cmdEmergencyStop::Execute() {
	loaderSubsystem->StopEverything();
	chassis->StopEverything();
	winchSubsystem->StopEverything();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdEmergencyStop::IsFinished() {
	return TRUE;
}

// Called once after isFinished returns true
void cmdEmergencyStop::End() {
	printf("End\n");
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdEmergencyStop::Interrupted() {
}



