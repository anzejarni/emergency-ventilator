# Processing
For reasons of multiplatform compatibility, two processing modes can be used:
- Threaded model (recommended)
- Loop model (only and absolutely only if threaded not supported by platform and there is not a threading capable platform available)

# Threaded model
Multiple threads will be open to handle multiprocessing of this application.
Thread functions will be spawned and runned in a loop.
*All sensor and actuator data should be protected by mutexes.*

# Loop model
Loop model will consist of a single function running in a loop. This function will traverse through all module thread functions.
The execution of all module thread functions combined should not exceed 50ms.

# Module thread functions
Functions should be non-blocking for the loop model to work. This is especially important within breathing control and server socket functions.

# Modules using threads
- Sensors (acquiring data)
- Actuators (assisting breathing)
- Control Algorithm (controlling breathing parameters)
- Alarms (processing acquired data and warning)
- Failsafes (providing immediate shutdown procedure in case of SW/HW failure)
- Watchdog (providing alarm in 500ms of device failure)
- UI API (providing data from sensors to display operation)

