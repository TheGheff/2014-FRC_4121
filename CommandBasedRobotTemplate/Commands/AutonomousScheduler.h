#ifndef AUTONOMOUS_SCHEDULER_H
#define AUTONOMOUS_SCHEDULER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class cmdAutonomousScheduler: public CommandBase {
private:
	Command* autonCommand;
public:
	cmdAutonomousScheduler();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
