#ifndef HOLD_WINCH_H
#define HOLD_WINCH_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class cmdHoldWinch: public CommandBase {
public:
	cmdHoldWinch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
