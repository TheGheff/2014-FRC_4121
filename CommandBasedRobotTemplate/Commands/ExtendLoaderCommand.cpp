#include "ExtendLoaderCommand.h"

cmdExtendLoaderCommand::cmdExtendLoaderCommand() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void cmdExtendLoaderCommand::Initialize() {
	printf("Initialize\n");
	//SetTimeout(5);
	//loaderRelay->On();
}

// Called repeatedly when this Command is scheduled to run
void cmdExtendLoaderCommand::Execute() {

	loaderSubsystem->LowerLoader();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdExtendLoaderCommand::IsFinished() {
	printf("IsFinished\n");
	return loaderSubsystem->ReadLoaderExtendLimitSwitch();//IsTimedOut();
}

// Called once after isFinished returns true
void cmdExtendLoaderCommand::End() {
	
	loaderSubsystem->StopLoader();
//	extendRelay->Off();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdExtendLoaderCommand::Interrupted() {
	printf("Interrupted\n");
//	extendRelay->Off();
}
