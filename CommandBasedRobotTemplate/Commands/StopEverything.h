#ifndef STOP_EVERYTHING_H
#define STOP_EVERYTHING_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class StopEverything: public CommandBase {
public:
	StopEverything();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
