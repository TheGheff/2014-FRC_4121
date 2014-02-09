#include "CameraSubsystem.h"
#include "../Robotmap.h"

CameraGimble::CameraGimble(char verticalServoChannel, char horizontalServoChannel ) : Subsystem("CameraGimble") {
//This is the Chassis Constructor.	

	verticalServo = new Servo(verticalServoChannel);
	horizontalServo = new Servo(horizontalServoChannel);
// Create the DigitalOutput objects for the brake/coast header control system
//	rightFrontBrake = new DigitalOutput(DIGITAL_MODULE_RIGHT,3);
//	rightRearBrake = new DigitalOutput(DIGITAL_MODULE_RIGHT,4);
}
    
void CameraGimble::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}



// Put methods for controlling this subsystem
// here. Call these from Commands.
void CameraGimble::moveCamearaUp_1Degree()
{
	verticalServo->SetAngle(((verticalServo->GetAngle())+1));
	
}
void CameraGimble::moveCamearaDown_1Degree()
{
	verticalServo->SetAngle(((verticalServo->GetAngle())-1));
}
void CameraGimble::moveCamearaLeft_1Degree()
{
	verticalServo->SetAngle(((horizontalServo->GetAngle())+1));
}
void CameraGimble::moveCamearaRight_1Degree()
{
	verticalServo->SetAngle(((horizontalServo->GetAngle())-1));
}
 
void CameraGimble::positionHomeCamera()
{
	
}
 
void CameraGimble::positionAimCamera()
{
	
} 
void CameraGimble::positionLoaderCamera()
{
	
}
	



