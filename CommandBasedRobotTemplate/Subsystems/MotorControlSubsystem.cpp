#include "MotorControlSubsystem.h"
#include "../Robotmap.h"
#include "../Commands/DriveMotorCommand.h"

MotorControlSubsystem::MotorControlSubsystem() :Subsystem("MotorControlSubsystem") {
	Jaguar *motorJaguar1 = new Jaguar(DRIVEMOTORRIGHT);
	Jaguar *motorJaguar2 = new Jaguar(DRIVEMOTORLEFT);
	RobotDrive *myRobot = new RobotDrive(*motorJaguar1, *motorJaguar2);
	myRobot->SetInvertedMotor(myRobot->kRearLeftMotor, true);
	myRobot->SetInvertedMotor(myRobot->kRearRightMotor, true);
	myRobot->TankDrive(JOYSTICKLEFT, JOYSTICKRIGHT);
}

void MotorControlSubsystem::InitDefaultCommand() {
	SetDefaultCommand(new DriveMotorCommand());
}

void MotorControlSubsystem::Drive(float speed) { // Sets speed of the Motor based on floating number.
	motorJaguar->Set(speed);
}
