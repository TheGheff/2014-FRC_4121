#include "ExampleCommand.h"

cmdExampleCommand::cmdExampleCommand() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void cmdExampleCommand::Initialize() {
	printf("Initialize\n");
	SetTimeout(5);
	examplesubsystem->On();
}

// Called repeatedly when this Command is scheduled to run
void cmdExampleCommand::Execute() {
	printf("Execute\n");
	DriverStationLCD *ds = DriverStationLCD::GetInstance();
	ds->PrintfLine(DriverStationLCD::kUser_Line2, "Execute");
	
}

// Make this return true when this Command no longer needs to run execute()
bool cmdExampleCommand::IsFinished() {
	printf("IsFinished\n");
	return IsTimedOut();
}

// Called once after isFinished returns true
void cmdExampleCommand::End() {
	printf("End\n");
	examplesubsystem->Off();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdExampleCommand::Interrupted() {
	printf("Interrupted\n");
	examplesubsystem->Off();
}
