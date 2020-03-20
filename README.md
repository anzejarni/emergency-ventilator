# Emergency Ventilator C

*CURRENT STATE: Project definition*

Is a response to the COVID-19 coronavirus response in 2019-2020 for the urgent global need for medical ventilators.
This software can be used and modified freely for non-commercial use under the GPL v3 license.

Code is written in C so it is suitable for most microcontrollers.

Please be aware that it is very much still a work in progress and any help would be much appreciated:
- Pulmonologists / doctor with experience of ARDS / ventilators
- Fellow C developers / enginners
- Embedded engineers
- UI/UX designers
- Hardware hackers

Message me on anze.jarni@codeart.si

Even though the highest precautions will be taken for the safety, 
I TAKE NO RESPONSIBILITY FOR THE USE OF THIS SOFTWARE. IT SHOULD BE THOROUGHLY TESTED BEFORE USE ON PATIENTS.

The software is intended to be used on various hardware which can be built quickly from parts available in the region.
There will be a basic testing suite to enable testing of sensors and actuators (pressure generator), but is not a guarantee
of safety.

The software is modular and will cover:
- Sensors (pressure, flow, voltage, possibly O2, CO2)
- Actuators (inspiration valve, expiration valve, pressure generator)
- Breathing algorithms (Pressure Control, Volume Control, Pressure Asist, Volume Asist,...)
- Alarms (pressure, volume, voltage, plateau pressure, loose hose, obstruction, breath stacking)
- Testing Suite (desired volume, desired pressure, desired flow)
- UI API Connectivity (socket, serial, etc connection)
- Failsafes (automatic shutdown if thresholds are exceeded)

UI will probably not be part of this software, so that his software can be installed on bare microcontrollers and interfaced
with other devices capable of displaying UI (graphs, mode, volume, pressure, flow, peep controls).

Target devices: Raspberry PI, ESP32, Arduino 
