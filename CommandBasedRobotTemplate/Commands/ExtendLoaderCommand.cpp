#include "ExtendLoaderCommand.h"

ExtendLoaderCommand::ExtendLoaderCommand() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void ExtendLoaderCommand::Initialize() {
	printf("Initialize\n");
	//SetTimeout(5);
	//loaderRelay->On();
}

// Called repeatedly when this Command is scheduled to run
void ExtendLoaderCommand::Execute() {
	
	while(!loaderSubsystem->ReadLoaderExtendLimitSwitch()){
		loaderSubsystem->LowerLoader();
	}
	End();
}

// Make this return true when this Command no longer needs to run execute()
bool ExtendLoaderCommand::IsFinished() {
	printf("IsFinished\n");
	return TRUE;//IsTimedOut();
}

// Called once after isFinished returns true
void ExtendLoaderCommand::End() {
	
	loaderSubsystem->StopLoader();
//	extendRelay->Off();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExtendLoaderCommand::Interrupted() {
	printf("Interrupted\n");
//	extendRelay->Off();
}
