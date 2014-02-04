#ifndef EJECT_LOADER_H
#define EJECT_LOADER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class EjectLoader: public CommandBase {
public:
	EjectLoader();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
