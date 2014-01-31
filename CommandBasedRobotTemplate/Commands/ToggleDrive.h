
#ifndef TOGGLE_DRIVE_H
#define TOGGLE_DRIVE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class ToggleDrive: public CommandBase {
public:
	ToggleDrive();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
