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
	DoubleSolenoids *sol1, *sol2;
	Jaguar *winchMotor;
	DigitalInput *retractLimitSwitch, *extendLimitSwitch;
public:
	WinchSubsystem();
	void InitDefaultCommand();
	void Retract();
	void RetractHold();
	void Release();
	void StopEverything();
	bool ReadWinchRetractLimitSwitch();
	bool ReadWinchExtendLimitSwitch();
	
};

#endif
