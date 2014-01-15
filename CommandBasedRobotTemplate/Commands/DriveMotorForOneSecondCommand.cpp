#include "DriveMotorForOneSecondCommand.h"
#include "../Subsystems/MotorControlSubsystem.h"

DriveMotorForOneSecondCommand::DriveMotorForOneSecondCommand() {
	//requires(MotorControlSubsystem)
	timer = new Timer();
}

void DriveMotorForOneSecondCommand::Initialize() {
	timer->Reset();
	timer->Start();
}

void DriveMotorForOneSecondCommand::Execute() {
	motorcontrolsubsystem->Drive(.3);
}

bool DriveMotorForOneSecondCommand::IsFinished() {
	return timer->Get() > 1;
}

void DriveMotorForOneSecondCommand::End() {
	timer->Stop();
	motorcontrolsubsystem->Drive(0);
}

void DriveMotorForOneSecondCommand::Interrupted() {
	timer->Stop();
	motorcontrolsubsystem->Drive(0);
}
