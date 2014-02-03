#ifndef ACTIVATE_LOADER_H
#define ACTIVATE_LOADER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class ActivateLoader: public CommandBase {
public:
	ActivateLoader();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
