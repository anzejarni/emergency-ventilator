# Safety
Safety is essential should in event failure react or warn the medical personnel.

Following failures can occur:
- Sensors failure
- Pressure generator failure
- CPU failure
- Software failure

Safety should be carried out on SW and HW level.

## Software level
- Pressure over threshold automatic shutdown and alarm
- Volume over threshold automatic shutdown and alarm
- Watchdog ping to separate circuit in max 500ms interval
- Standard alarms

## Hardware level
- one-way valve on inspiration to enable the patient to take breath in case of device failure
- one-way valve on expiration to enable the patient to release breath in case of device failure
- separate circuit which receives 500ms pings from the main CPU, otherwise it triggers sound alarm