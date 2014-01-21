#include "DriverStationLCDSystem.h"
#include "../Robotmap.h"

DriverStationLCDSystem::DriverStationLCDSystem() : Subsystem("DriverStationLCDSystem") {
	dsLCD = DriverStationLCD::GetInstance();
}
    
void DriverStationLCDSystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void DriverStationLCDSystem::ClearLCD(void) {		
	dsLCD->PrintfLine(DriverStationLCD::kMain_Line6, "F.I.R.E. Team #0322");
	dsLCD->PrintfLine(DriverStationLCD::kUser_Line1, "");
	dsLCD->PrintfLine(DriverStationLCD::kUser_Line2, "");
	dsLCD->PrintfLine(DriverStationLCD::kUser_Line3, "");
	dsLCD->PrintfLine(DriverStationLCD::kUser_Line4, "");
	dsLCD->PrintfLine(DriverStationLCD::kUser_Line5, "");
	dsLCD->PrintfLine(DriverStationLCD::kUser_Line6, "");
	dsLCD->UpdateLCD();
}

void DriverStationLCDSystem::UpdateLCD(int type, Gyro* gyro, Encoder* leftEncoder,
		Encoder* rightEncoder, ADXL345_I2C* accel) {	
	dsLCD->PrintfLine(DriverStationLCD::kMain_Line6, "F.I.R.E. Team #0322");
	switch(type) {
		default:
			dsLCD->PrintfLine(DriverStationLCD::kUser_Line1, "Gyro Angle: %7.3f", gyro->GetAngle());
			dsLCD->PrintfLine(DriverStationLCD::kUser_Line2, "%f",leftEncoder->GetDistance());
			dsLCD->PrintfLine(DriverStationLCD::kUser_Line3, "%f",rightEncoder->GetDistance());
			dsLCD->PrintfLine(DriverStationLCD::kUser_Line4, "X-Axis Acc = %f", accel->GetAcceleration(accel->kAxis_X));
			dsLCD->PrintfLine(DriverStationLCD::kUser_Line5, "Y-Axis Acc = %f", accel->GetAcceleration(accel->kAxis_Y));
			dsLCD->PrintfLine(DriverStationLCD::kUser_Line6, "Z-Axis Acc = %f", accel->GetAcceleration(accel->kAxis_Z));
			dsLCD->UpdateLCD();
		break;
	}
}
