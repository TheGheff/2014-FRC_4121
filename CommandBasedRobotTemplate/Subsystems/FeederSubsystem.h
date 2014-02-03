#ifndef FEEDER_SUBSYSTEM_H
#define FEEDER_SUBSYSTEM_H
#include "Commands/Feeder.h"
#include "WPILib.h"

class Feeder : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	
	Jaguar *feederMotor;
	Relay  *leftSolenoid, *rightSolenoid;
	
	
public:
	Feeder();
	void InitDefaultCommand();
	void FeederOn(float);
	void FeederOff(float);
	void Extend();
	void Retract();
	void ExtendHold();
	void RetractHold();
	void StopEverything();
	
	
};

#endif
