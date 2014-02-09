#ifndef AUTO_DO_NOTHING_H
#define AUTO_DO_NOTHING_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class autocmdDoNothing: public CommandBase {
private:
	Command* autonCommand;
public:
	autocmdDoNothing();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
