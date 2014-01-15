#include "MotorControlSubsystem.h"
#include "../Robotmap.h"
#include "../Commands/DriveMotorCommand.h"

MotorControlSubsystem:MotorControlSubsystem() : Subsystem("MotorControlSubsystem") {
	motorJaguar = new Jaguar(1);
}

void MotorControlSubsystem:InitDefaultCommand() {
	SetDefaultCommand(new DriveMotorCommand());
}

void MotorControlSubsystem::Drive(float speed) { // Sets speed of the Motor based on floating number.
	motorJaguar->Set(speed);
}