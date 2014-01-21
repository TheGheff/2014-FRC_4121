#ifndef DRIVER_STATION_LCD_SYSTEM_H
#define DRIVER_STATION_LCD_SYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class DriverStationLCDSystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	DriverStationLCD *dsLCD;
public:
	DriverStationLCDSystem();
	void InitDefaultCommand();
	void ClearLCD(void);
	void UpdateLCD(int, Gyro*, Encoder*, Encoder*, ADXL345_I2C*);
};

#endif
