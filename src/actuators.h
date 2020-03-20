/*
Module Name: Actuators
Package Name: Emergency Ventilator
License: GNU GPL v3
Author: Anže Jarni (Atelje IT)
Architecture: C
Standards compliance: ?

Description:
Actuator module responsible to generate apropriate pressure towards the patient

Two possible pressure generation modes:
- Constant pressure with a limiter valve (compressor)
- Variable pressure high response generator (ambu bag)

TODO:
-

Known bugs:
-
*/ 

#ifndef	_EVACTUATORS_
#define	_EVACTUATORS_

ev_result_t ev_act_gen_pressure(uint8_t u8_tgt_pressure);

ev_result_t ev_act_in_limit_valve(uint8_t u8_percent);
ev_result_t ev_act_out_limit_valve(uint8_t u8_percent);

#endif