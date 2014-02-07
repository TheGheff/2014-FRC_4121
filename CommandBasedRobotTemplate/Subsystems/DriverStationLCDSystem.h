#ifndef DRIVER_STATION_LCD_SYSTEM_H
#define DRIVER_STATION_LCD_SYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Deus Ex Machina
 */
class DriverStationLCDSystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	// DriverStationLCD *dsLCD;
public:
	DriverStationLCDSystem();
	void InitDefaultCommand();
	void ClearLCD(void);
	void updateLCD(int, Gyro*, Encoder*, Encoder*, ADXL345_I2C*);
	void testUpdate(char*);
};

#endif
