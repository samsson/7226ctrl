#include <Arduino.h>
extern int gear;         
extern int cSolenoid;  
extern int vehicleSpeed;
extern unsigned long lastSensorTime;
extern int spcSetVal;
extern int spcPercentVal;
extern unsigned long n2SpeedPulses;
extern unsigned long n3SpeedPulses;
extern unsigned long vehicleSpeedPulses;
extern unsigned long vehicleSpeedRevs;
extern int n2Speed;
extern int n3Speed;
extern int atfSensorFilterWeight; 
extern int atfSensorNumReadings; 
extern int atfSensorAverage;            
extern int shiftDropPressure;
extern int maxBoostPressure;
extern unsigned long int shiftStartTime;
extern unsigned long int shiftDuration;
extern int cSolenoidEnabled;
extern int lastMapVal,lastXval,lastYval;
extern boolean incar;
extern boolean stick;
extern boolean manual;
extern boolean trans;
extern boolean sensors;
extern boolean tpsSensor;
extern boolean boostSensor;
extern boolean shiftBlocker;
extern boolean health;
extern boolean debugEnabled;
extern boolean fullAuto;
extern boolean boostLimit;
extern boolean drive;
extern boolean datalogger;
extern boolean wirespeedo;
extern int wantedGear;
extern int newGear;