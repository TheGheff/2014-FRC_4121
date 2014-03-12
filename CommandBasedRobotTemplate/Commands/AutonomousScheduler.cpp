#include "AutonomousScheduler.h"
#include "AutoDoNothing.h"
#include "AutoDriveXs.h"
#include "ReleaseWinch.h"
#include "../CommandBase.h"

cmdAutonomousScheduler::cmdAutonomousScheduler() {
	// Use requires() here to declare subsystem dependencies
	timer = new Timer();
}

// Called just before this Command runs the first time
void cmdAutonomousScheduler::Initialize() {
	timer->Start();
	
	//mode = autonomousModeSwitches->GetMode();
	//driverStationLCDSystem->testUpdate((char*)autonomousModeSwitches->GetMode());
	mode = 0;
		switch(mode)
		{
		case 0:
			seconds = 6.0;
			break;
		case 1:
			seconds = 1.0;
		default:
			seconds = 0.0;
			break;
		}

}

// Called repeatedly when this Command is scheduled to run
void cmdAutonomousScheduler::Execute() {
	
	autonCommand = new autocmdDriveFowardXs(2);
		
	autonCommand->Run();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdAutonomousScheduler::IsFinished() {	
	return timer->Get()>seconds?true:false;
}

// Called once after isFinished returns true
void cmdAutonomousScheduler::End() {
	timer->Stop();
	timer->Reset();
	autonCommand->Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdAutonomousScheduler::Interrupted() {
	End();
}



