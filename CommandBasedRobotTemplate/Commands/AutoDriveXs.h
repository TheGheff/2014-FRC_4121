#ifndef AUTO_DRIVE_Xs_H
#define AUTO_DRIVE_Xs_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class autocmdDriveXs: public CommandBase {
private:
	int driveTime;
	//bool isForward;
public:
	autocmdDriveXs(int driveTimeInS/*, bool direction*/);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
