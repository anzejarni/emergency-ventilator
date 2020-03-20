/*
Module Name: Sensors
Package Name: Emergency Ventilator
License: GNU GPL v3
Author: Anže Jarni (Atelje IT)
Architecture: C
Standards compliance: ?

Description:
Sensor module tracks the live values from the sensors in the device

TODO:
-

Known bugs:
-
*/ 

#ifndef	_EVSENSORS_
#define	_EVSENSORS_

ev_result_t ev_sensors_get_in_pressure(uint32_t* in_pressure);
ev_result_t ev_sensors_get_in_flow(uint32_t* in_flow);

ev_result_t ev_sensors_get_out_pressure(uint32_t* out_pressure);
ev_result_t ev_sensors_get_out_flow(uint32_t* out_flow);

ev_result_t ev_get_voltage(uint32_t voltage);

#endif