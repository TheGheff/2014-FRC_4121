#ifndef LOADER_SUBSYSTEM_H
#define LOADER_SUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Vaughn
 */
class LoaderSubsystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	Jaguar *feederMotor;
	Relay  *extendSolenoid, *retractSolenoid;

public:
	LoaderSubsystem();
	void InitDefaultCommand();
	void LoaderOn();
	void LoaderOff();
	void RelayExtend();
	void RelayRetract();
	void StopEverything();
	
};

#endif
