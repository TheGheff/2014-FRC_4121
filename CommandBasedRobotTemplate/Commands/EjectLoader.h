#ifndef EJECT_LOADER_H
#define EJECT_LOADER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class cmdEjectLoader: public CommandBase {
public:
	cmdEjectLoader();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
