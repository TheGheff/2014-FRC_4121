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
	//RelaySubsystem->Off();
	winchSubsystem->StopEverything();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdEmergencyStop::IsFinished() {
	//printf("IsFinished\n");
	return TRUE;
}

// Called once after isFinished returns true
void cmdEmergencyStop::End() {
	printf("End\n");
	//winchSubsystem->Release();
	//loaderSubsystem->StopEverything();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdEmergencyStop::Interrupted() {
	printf("Interrupted\n");
	//loaderSubsystem->StopEverything();
}



