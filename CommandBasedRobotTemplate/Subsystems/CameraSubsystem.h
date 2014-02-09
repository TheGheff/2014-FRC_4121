#ifndef CAMERA_SUBSYSTEM_H
#define CAMERA_SUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class CameraGimble: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Servo *verticalServo, *horizontalServo;
	bool DriveState;
	//DigitalOutput *leftFrontBrake, *leftRearBrake, *rightFrontBrake, *rightRearBrake;	
public:
	CameraGimble(char verticalServoChannel, char horizontalServoChannel);
	void InitDefaultCommand();
	void moveCamearaUp_1Degree();
	void moveCamearaDown_1Degree();
	void moveCamearaLeft_1Degree();
	void moveCamearaRight_1Degree();
	void positionHomeCamera();
	void positionAimCamera();
	void positionLoaderCamera();
};

#endif
