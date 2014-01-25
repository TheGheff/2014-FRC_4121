#ifndef PULL_BACK_WINCH_H
#define PULL_BACK_WINCH_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class PullBackWinch: public CommandBase {
public:
	PullBackWinch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
