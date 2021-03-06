#ifndef PRECISION_DRIVE_H
#define PRECISION_DRIVE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class cmdPrecisionDrive: public CommandBase {
public:
	cmdPrecisionDrive();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
