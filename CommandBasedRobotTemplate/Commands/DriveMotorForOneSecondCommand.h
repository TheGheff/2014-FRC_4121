#ifndef DRIVEMOTORFORONESECONDCOMMAND_H
#define DRIVEMOTORFORONESECONDCOMMAND_H

#include "../CommandBase.h"

class DriveMotorForOneSecondCommand: public CommandBase {
private:
	Timer *timer;
public:
	DriveMotorForOneSecondCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
