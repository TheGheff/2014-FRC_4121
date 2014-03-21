#ifndef AUTONOMOUS_SCHEDULER_Reverse_H
#define AUTONOMOUS_SCHEDULER_Reverse_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class cmdAutonomousSchedulerReverse: public CommandBase {
private:
	Command* autonCommand;
	double seconds;
	Timer* timer;
public:
	cmdAutonomousSchedulerReverse();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
