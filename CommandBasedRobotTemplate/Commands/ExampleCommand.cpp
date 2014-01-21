#include "ExampleCommand.h"

ExampleCommand::ExampleCommand() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize() {
	printf("Inittialize\n");
	SetTimeout(5);
	examplesubsystem->On();
}

// Called repeatedly when this Command is scheduled to run
void ExampleCommand::Execute() {
	printf("Execute\n");
	DriverStationLCD *ds = DriverStationLCD::GetInstance();
	ds->PrintfLine(DriverStationLCD::kUser_Line2, "Execute");
	
}

// Make this return true when this Command no longer needs to run execute()
bool ExampleCommand::IsFinished() {
	printf("IsFinished\n");
	return IsTimedOut();
}

// Called once after isFinished returns true
void ExampleCommand::End() {
	printf("End\n");
	examplesubsystem->Off();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted() {
	printf("Interrupted\n");
	examplesubsystem->Off();
}
