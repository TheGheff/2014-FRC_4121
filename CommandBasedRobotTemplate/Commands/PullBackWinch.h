#ifndef PULL_BACK_WINCH_H
#define PULL_BACK_WINCH_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class cmdPullBackWinch: public CommandBase {
private:
	DriverStationLCDSystem *dsLCDSystem;
public:
	cmdPullBackWinch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
