#ifndef RELEASE_WINCH_H
#define RELEASE_WINCH_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class cmdReleaseWinch: public CommandBase {
public:
	cmdReleaseWinch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
