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
	DigitalInput *retractLimitSwitch, *extendLimitSwitch;
	DoubleSolenoid *loaderSol;
	int counter;

public:
	LoaderSubsystem();
	void InitDefaultCommand();
	void RunLoader();
	void StopEverything();
	void Eject();
	bool ReadLoaderRetractLimitSwitch();
	bool ReadLoaderExtendLimitSwitch();
	void RaiseLoader();
	void LowerLoader();
	void StopLoader();
	DoubleSolenoid::Value GetLoaderPosition();
};

#endif
