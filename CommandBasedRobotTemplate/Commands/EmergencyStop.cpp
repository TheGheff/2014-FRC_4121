#include "EmergencyStop.h"

EmergencyStop::EmergencyStop() {
	// Use requires() here to declare subsystem dependencies
	Requires(loaderSubsystem);
	Requires(chassis);
	//Requires(relaySubsystem);
	Requires(winchSubsystem);
		
}

// Called just before this Command runs the first time
void EmergencyStop::Initialize() {
	
	
}

// Called repeatedly when this Command is scheduled to run
void EmergencyStop::Execute() {
	loaderSubsystem->StopEverything();
	chassis->StopEverything();
	//RelaySubsystem->Off();
	winchSubsystem->StopEverything();
}

// Make this return true when this Command no longer needs to run execute()
bool EmergencyStop::IsFinished() {
	//printf("IsFinished\n");
	return TRUE;
}

// Called once after isFinished returns true
void EmergencyStop::End() {
	printf("End\n");
	//winchSubsystem->Release();
	//loaderSubsystem->StopEverything();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void EmergencyStop::Interrupted() {
	printf("Interrupted\n");
	//loaderSubsystem->StopEverything();
}



