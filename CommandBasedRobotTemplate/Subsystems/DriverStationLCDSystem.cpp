#include "DriverStationLCDSystem.h"
#include "../CommandBase.h"

DriverStationLCDSystem::DriverStationLCDSystem() : Subsystem("DriverStationLCDSystem") {
	dsLCDSystem =  CommandBase::oi->getDriverStation();
}
    
void DriverStationLCDSystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void DriverStationLCDSystem::ClearLCD(void) {		
	dsLCDSystem->PrintfLine(DriverStationLCD::kMain_Line6, "wooo! Team #4121");
	dsLCDSystem->PrintfLine(DriverStationLCD::kUser_Line1, "");
	dsLCDSystem->PrintfLine(DriverStationLCD::kUser_Line2, "");
	dsLCDSystem->PrintfLine(DriverStationLCD::kUser_Line3, "");
	dsLCDSystem->PrintfLine(DriverStationLCD::kUser_Line4, "");
	dsLCDSystem->PrintfLine(DriverStationLCD::kUser_Line5, "");
	dsLCDSystem->PrintfLine(DriverStationLCD::kUser_Line6, "");
	dsLCDSystem->UpdateLCD();
}

void DriverStationLCDSystem::updateLCD(int type, Gyro* gyro, Encoder* leftEncoder,
		Encoder* rightEncoder, ADXL345_I2C* accel) {	
	
	//dsLCD->PrintfLine(DriverStationLCD::kMain_Line6, ",Team #4121!");
	
	
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line1, "Gyro Angle: %7.3f", gyro->GetAngle());
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line2, "%f",leftEncoder->GetDistance());
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line3, "%f",rightEncoder->GetDistance());
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line4, "X-Axis Acc = %f", accel->GetAcceleration(accel->kAxis_X));
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line5, "Y-Axis Acc = %f", accel->GetAcceleration(accel->kAxis_Y));
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line6, "Z-Axis Acc = %f", accel->GetAcceleration(accel->kAxis_Z));
		
	dsLCDSystem->PrintfLine(DriverStationLCD::kUser_Line1,"Trial by fire");
	dsLCDSystem->UpdateLCD();
}

void DriverStationLCDSystem::testUpdate(char* text) {	
	
	//dsLCD->PrintfLine(DriverStationLCD::kMain_Line6, ",Team #4121!");
	
	
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line1, "Gyro Angle: %7.3f", gyro->GetAngle());
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line2, "%f",leftEncoder->GetDistance());
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line3, "%f",rightEncoder->GetDistance());
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line4, "X-Axis Acc = %f", accel->GetAcceleration(accel->kAxis_X));
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line5, "Y-Axis Acc = %f", accel->GetAcceleration(accel->kAxis_Y));
//		dsLCD->PrintfLine(DriverStationLCD::kUser_Line6, "Z-Axis Acc = %f", accel->GetAcceleration(accel->kAxis_Z));
		
	dsLCDSystem->PrintfLine(DriverStationLCD::kUser_Line2,text);
	dsLCDSystem->UpdateLCD();
}
