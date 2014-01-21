#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
//#include "Subsystems/RelaySubsystem.h"
#include "Subsystems/DriverStationLCDSystem.h"
#include "Subsystems/Chassis.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {

}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
RelaySubsystem* CommandBase::extendRelay = NULL;
RelaySubsystem* CommandBase::retractRelay = NULL;
DriverStationLCDSystem* CommandBase::driverStationLCDSystem = NULL;
Chassis* CommandBase::chassis = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	extendRelay = new RelaySubsystem(4);
	retractRelay = new RelaySubsystem(5);
	driverStationLCDSystem = new DriverStationLCDSystem();
	chassis = new Chassis();	
	oi = new OI();
}
