#ifndef RELEASE_WINCH_H
#define RELEASE_WINCH_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class ReleaseWinch: public CommandBase {
public:
	ReleaseWinch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
