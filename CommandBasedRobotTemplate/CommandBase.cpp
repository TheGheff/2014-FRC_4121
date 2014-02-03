#include "CommandBase.h"
#include "Robotmap.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/RelaySubsystem.h"
#include "Subsystems/DriverStationLCDSystem.h"
#include "Subsystems/Chassis.h"
#include "Commands/Scheduler.h"
#include "Subsystems/WinchSubsystem.h"

CommandBase::CommandBase(const char *name) : Command(name) {

}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
WinchSubsystem* CommandBase::winchSubsystem = NULL;
RelaySubsystem* CommandBase::extendLoaderRelay = NULL;
RelaySubsystem* CommandBase::retractLoaderRelay = NULL;
DriverStationLCDSystem* CommandBase::driverStationLCDSystem = NULL;
LoaderSubsystem* CommandBase::loaderSubsystem = NULL;
Chassis* CommandBase::chassis = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	extendLoaderRelay = new RelaySubsystem(EXTEND_LOADER_RELAY);
	retractLoaderRelay = new RelaySubsystem(RETRACT_LOADER_RELAY);
	driverStationLCDSystem = new DriverStationLCDSystem();
	winchSubsystem = new WinchSubsystem();
	loaderSubsystem = new LoaderSubsystem();
	chassis = new Chassis();	
	oi = new OI();
}
