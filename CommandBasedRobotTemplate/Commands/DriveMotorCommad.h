#ifndef DRIVEMOTORCOMMAND_H
#define DRIVEMOTORCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveMotorCommand: public CommandBase {
public:
	DriveMotorCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
