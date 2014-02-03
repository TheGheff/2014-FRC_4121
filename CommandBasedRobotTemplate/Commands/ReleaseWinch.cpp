#include "ReleaseWinch.h"

ReleaseWinch::ReleaseWinch() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void ReleaseWinch::Initialize() {
	printf("Initialize\n");
	winchSubsystem->Retract();
}

// Called repeatedly when this Command is scheduled to run
void ReleaseWinch::Execute() {
	printf("Execute\n");
	DriverStationLCD *ds = DriverStationLCD::GetInstance();
	ds->PrintfLine(DriverStationLCD::kUser_Line2, "Execute");
	
}

// Make this return true when this Command no longer needs to run execute()
bool ReleaseWinch::IsFinished() {
	printf("IsFinished\n");
	return TRUE;
}

// Called once after isFinished returns true
void ReleaseWinch::End() {
	printf("End\n");
	winchSubsystem->Release();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReleaseWinch::Interrupted() {
	printf("Interrupted\n");
	winchSubsystem->Release();
}
