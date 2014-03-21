#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/AutonomousScheduler.h"
#include "CommandBase.h"
#include "Robotmap.h"

#include "Commands/EmergencyStop.h"
class CommandBasedRobot : public IterativeRobot {
private:
	Command *autonomousCommand;
	Compressor *mainCompressor;
	
	virtual void RobotInit() {
		CommandBase::init();
		mainCompressor = new Compressor(COMPRESSOR_PRESSURE_SWITCH, COMPRESSOR_RELAY);// COMPRESSOR_RELAY);
		autonomousCommand = new cmdAutonomousScheduler();	//DEFINE COMMANDS HERE
		mainCompressor->Start();
		CommandBase::loaderSubsystem->LowerLoader();
		CommandBase::winchSubsystem->Retract();
	}
	
	virtual void AutonomousInit() {
		//addSequential(new cmdAutonomousScheduler);
		//addSequential(new cmdAutonomousSchedulerReverse);
		autonomousCommand->Start();
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		autonomousCommand->Cancel();
		
		cmdEmergencyStop(); //make sure everything is off and in a netral state when teleop starts.
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

