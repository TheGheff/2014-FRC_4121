#include "CommandBase.h"
#include "Robotmap.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/DriverStationLCDSystem.h"
#include "Subsystems/Chassis.h"
#include "Commands/Scheduler.h"
#include "Subsystems/WinchSubsystem.h"
#include "Subsystems/CameraSubsystem.h"
#include "Subsystems/AutonomusModeSwitches.h"

CommandBase::CommandBase(const char *name) : Command(name) {

}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
AutonomusModeSwitches* CommandBase::autonomousModeSwitches = NULL;
WinchSubsystem* CommandBase::winchSubsystem = NULL;
DriverStationLCDSystem* CommandBase::driverStationLCDSystem = NULL;
LoaderSubsystem* CommandBase::loaderSubsystem = NULL;
Chassis* CommandBase::chassis = NULL;
OI* CommandBase::oi = NULL;
CameraGimble* CommandBase::driveCamera = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	autonomousModeSwitches = new AutonomusModeSwitches();
	driverStationLCDSystem = new DriverStationLCDSystem();
	winchSubsystem = new WinchSubsystem();
	loaderSubsystem = new LoaderSubsystem();
	chassis = new Chassis();	
	oi = new OI();
//	driveCamera = new CameraGimble();
}
