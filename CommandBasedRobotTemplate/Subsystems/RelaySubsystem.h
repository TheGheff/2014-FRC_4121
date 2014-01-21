#ifndef RELAY_SUBSYSTEM_H
#define RELAY_SUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class RelaySubsystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	Relay *relay;
public:
	RelaySubsystem(char relay_channel);
	void InitDefaultCommand();
	void On();
	void Off();
};

#endif
