/*
Module Name: Limits
Package Name: Emergency Ventilator
License: GNU GPL v3
Author: Anže Jarni (Atelje IT)
Architecture: C
Standards compliance: ?

Description:
Module define limits

TODO:
-

Known bugs:
-
*/

#ifndef	_EVLIMITS
#define	_EVLIMITS

/* User defined settings */

//Absolute shutoff settings to protect the patient
#define EV_CRITICAL_MAX_PRESSURE 26 // (cm H2O)
#define EV_CRITICAL_MAX_VOLUME 1500 // (mL)
#define EV_CRITICAL_MAX_FLOW 110 // (L/min)

//Inspiratory pressure setting (cm H20)
#define EV_SETTING_MIN_IPAP 5
#define EV_SETTING_MAX_IPAP 24
#define EV_SETTING_DEFAULT_IPAP 10

//Expiratory pressure setting (cm H20)
#define EV_SETTING_MIN_EPAP 5
#define EV_SETTING_MAX_EPAP 24
#define EV_SETTING_DEFAULT_EPAP 5

//Positive End Expiratory Pressure setting (cm H2O)
#define EV_SETTING_MIN_PEEP 5
#define EV_SETTING_MAX_PEEP 20
#define EV_SETTING_DEFAULT_PEEP 5

//Breating rate (br/min) setting
#define EV_SETTING_MIN_RATE 10
#define EV_SETTING_MAX_RATE 20
#define EV_SETTING_DEFAULT_RATE 14

//Flow Setting
#define EV_SETTING_MIN_FLOW 10
#define EV_SETTING_MAX_FLOW 100
#define EV_SETTING_DEFAULT_FLOW 60

//Volume (mL) setting
#define EV_SETTING_MIN_VOLUME 50
#define EV_SETTING_MAX_VOLUME 1000
#define EV_SETTING_DEFAULT_VOLUME 450

//Oxigen (%) setting
#define EV_SETTING_MIN_O2 21
#define EV_SETTING_MAX_VOLUME 100
#define EV_SETTING_DEFAULT_VOLUME 100

/* End User Defined Settings */

//Breath hold (sec)
#define EV_BREATH_MIN_HOLD 0.5
#define EV_BREATH_MAX_HOLD 1.5

#define EV_ALARM_MAX_PRESSURE
#define EV_ALARM_MIN_PRESSURE

#define EV_MIN_RATE
#define EV_MAX_RATE

#define EV_MAX_VOLUME
#define EV_MAX_FLOW

#define EV_ALARM_PLATEAU_HIGH
#define EV_ALARM_PLATEAU_LOW

#define EV_ALARM_MIN_FLOW
#define EV_ALARM_MAX_FLOW

#define EV_ALARM_MIN_VOLUME
#define EV_ALARM_MAX_VOLUME




#endif