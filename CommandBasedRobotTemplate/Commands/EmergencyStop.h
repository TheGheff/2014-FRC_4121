#ifndef EMERGENCY_STOP_H
#define EMERGENCY_STOP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class cmd: public CommandBase {
public:
	cmd();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
