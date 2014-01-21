#ifndef RETRACT_LOADER_COMMAND_H
#define RETRACT_LOADER_COMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class RetractLoaderCommand: public CommandBase {
public:
	RetractLoaderCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
