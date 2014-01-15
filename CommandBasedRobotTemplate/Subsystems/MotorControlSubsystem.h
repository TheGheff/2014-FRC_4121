#ifndef MOTORCONTROLSUBSYSTEM_H
#define MOTORCONTROLSUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class MotorControlSubsystem: public Subsystem {
private:
	Jaguar *motorJaguar;
public:
	MotorControlSubsystem();
	void InitDefaultCommand();
	void Drive(float speed);
};

#endif
