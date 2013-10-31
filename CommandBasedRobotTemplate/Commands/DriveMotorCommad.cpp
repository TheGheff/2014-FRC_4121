#include "DriveMotorCommand.h"

DriveMotorCommand::DriveMotorCommand() {
	requires(MotorControlSubsystem);
}

void DriveMotorCommand::Initialize() {

}

void DriveMotorCommand::Execute() {
	MotorControlSubsystem->Drive(oi->joystick1->GetY()); // Gets Joystick1's Y vaule and sets it as speed for Drive command in MotorControlSubsytem.
}

bool DriveMotorCommand::IsFinished() {
	return false;
}

void DriveMotorCommand::End() {
	MotorControlSubsytem->Drive(0); // Sets drive speed to 0
}

void DriveMotorCommand::Interrupted() {
	MotorControlSubsytem->Drive(0); // Sets drive speed to 0
}