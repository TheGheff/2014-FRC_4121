#ifndef WINCH_SUBSYSTEM_H
#define WINCH_SUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class WinchSubsystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Relay *relay1, *relay2;
	Jaguar *winchMotor, *feederMotor;
	DigitalInput *retractLimitSwitch;
public:
	WinchSubsystem();
	void InitDefaultCommand();
	void Retract();
	void RetractHold();
	void Release();
	void StopEverything();
	bool ReadLimitSwitch();
	
};

#endif
