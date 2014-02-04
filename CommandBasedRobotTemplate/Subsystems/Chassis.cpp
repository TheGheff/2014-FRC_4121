#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/DriveWithJoystick.h"
#include "RobotDrive.h"

Chassis::Chassis() : Subsystem("Chassis") {
//This is the Chassis Constructor.	
	frontLeftMotor = new Jaguar(DRIVEMOTORLEFT);
	frontRightMotor = new Jaguar(DRIVEMOTORRIGHT);
	robotDrive = new RobotDrive(frontLeftMotor, frontRightMotor);
	
	// Reverse the motors because they were installed backwards
	robotDrive->SetInvertedMotor(robotDrive->kFrontLeftMotor, true);
	robotDrive->SetInvertedMotor(robotDrive->kFrontRightMotor, true);
	robotDrive->SetSafetyEnabled(false);
	DriveState=false;
	
	// Create the DigitalOutput objects for the brake/coast header control system
//	rightFrontBrake = new DigitalOutput(DIGITAL_MODULE_RIGHT,3);
//	rightRearBrake = new DigitalOutput(DIGITAL_MODULE_RIGHT,4);
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveWithJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Chassis::driveWithJoystick(Joystick *stickL, Joystick *stickR) {
	//Purpose:
		//Using the driver station joysticks to drive the robot.	
	//Inputs:   Are Instances of the Joystick class.
	
	//true precision drive
	//false standard drive
	
		robotDrive->TankDrive(stickL, stickR,  DriveState);
//		driverStationLCDSystem->PrintfLine(DriverStationLCD::kUser_Line1, "Precision Drive:", DriveState);
//		driverStationLCDSystem->UpdateLCD();
}

void Chassis::autoDriveSystem(float left, float right) {
	// Purpose:
		//To drive the Robot in autounomous mode.
	//Inputs: left,right - takes a floating point value from -1 to 1, with 1 indicating full speed and .5 half speed.
	robotDrive->TankDrive(left, right);
}


void Chassis::ToggleDrive(){
	DriveState = !DriveState;
	//true precision drive
	//false standard drive
}
void Chassis::StopEverything(){
	frontLeftMotor->Set(0);
	frontRightMotor->Set(0);
}
	
	


