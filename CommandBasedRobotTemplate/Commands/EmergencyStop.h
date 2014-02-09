#ifndef EMERGENCY_STOP_H
#define EMERGENCY_STOP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class cmdEmergencyStop: public CommandBase {
public:
	cmdEmergencyStop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
