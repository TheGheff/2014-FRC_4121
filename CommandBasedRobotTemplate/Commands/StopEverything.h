#ifndef STOP_EVERYTHING_H
#define STOP_EVERYTHING_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class cmdStopEverything: public CommandBase {
public:
	cmdStopEverything();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
