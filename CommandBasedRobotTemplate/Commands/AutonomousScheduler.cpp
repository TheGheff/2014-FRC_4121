#include "AutonomousScheduler.h"
#include "AutoDoNothing.h"
#include "AutoDriveXs.h"
#include "PullBackWinch.h"

cmdAutonomousScheduler::cmdAutonomousScheduler() {
	// Use requires() here to declare subsystem dependencies
}

// Called just before this Command runs the first time
void cmdAutonomousScheduler::Initialize() {
	timer = new Timer();
	timer->Start();
	autonCommand = new autocmdDriveXs(3/*,true*/);//insert arbitrary number for now
	seconds = 3.0;
	
}

// Called repeatedly when this Command is scheduled to run
void cmdAutonomousScheduler::Execute() {
	
	autonCommand->Run();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdAutonomousScheduler::IsFinished() {	
	return timer->Get()>seconds?true:false;//seconds go here
}

// Called once after isFinished returns true
void cmdAutonomousScheduler::End() {
	timer->Stop();
	timer->Reset();
	autonCommand->Cancel();
	//autonCommand = new cmdPullBackWinch();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdAutonomousScheduler::Interrupted() {
	End();
}



