#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/DriveWithJoystick.h"
#include "RobotDrive.h"

Chassis::Chassis() : Subsystem("Chassis") {
	
	frontLeftMotor = new Jaguar(DRIVEMOTORLEFT);
	frontRightMotor = new Jaguar(DRIVEMOTORRIGHT);
	robotDrive = new RobotDrive(frontLeftMotor, frontRightMotor);
//	robotDrive->SetInvertedMotor(robotDrive->kFrontLeftMotor, true);
//		robotDrive->SetInvertedMotor(robotDrive->kFrontRightMotor, true);
//		robotDrive->SetSafetyEnabled(false);
	
	// Create the DigitalOutput objects for the brake/coast header control system
//	rightFrontBrake = new DigitalOutput(DIGITAL_MODULE_RIGHT,3);
//	rightRearBrake = new DigitalOutput(DIGITAL_MODULE_RIGHT,4);
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	robotDrive->SetInvertedMotor(robotDrive->kFrontLeftMotor, true);
	robotDrive->SetInvertedMotor(robotDrive->kFrontRightMotor, true);
	robotDrive->SetSafetyEnabled(false);
	
	SetDefaultCommand(new DriveWithJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Chassis::driveWithJoystick(Joystick *stickL, Joystick *stickR) {
	robotDrive->TankDrive(stickL, stickR, TRUE);
	
}

void Chassis::autoDriveSystem(float left, float right) {
	robotDrive->TankDrive(left, right);
}

void Chassis::precisionDriveSystem(Joystick *stickL, Joystick *stickR) {
	robotDrive->TankDrive(stickL, stickR, FALSE);
}

//void Chassis::brake() {
////	leftFrontBrake->Set(1);
////	rightFrontBrake->Set(1);
////	leftRearBrake->Set(1);
////	rightRearBrake->Set(1);
//}

//void Chassis::coast() {
////	leftFrontBrake->Set(0);
////	rightFrontBrake->Set(0);
////	leftRearBrake->Set(0);
////	rightRearBrake->Set(0);
//}
