#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/MotorControlSubsystem.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
MotorControlSubsystem* CommandBase::motorcontrolsubsystem = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
//	motorcontrolsubsystem = new MotorControlSubsystem();
	
//	DriverStationLCD *ds = DriverStationLCD::GetInstance();
//	ds->PrintfLine(DriverStationLCD::kUser_Line1, "CommandBase::init");
	
	oi = new OI();
}
