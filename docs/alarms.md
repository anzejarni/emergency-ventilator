# Alarms
The following alarms should be triggered which should produce loud sound and possibly also visual warning on the UI component.
Sound is essential for warning the medical personnel and should be heard even in a busy medical environment.

- Sound generating hardware component (siren, speaker) should be installed directly near the control unit
- Visual alarm can be received via the UI API

## Sound generated alarm types
- Notice (user has triggered specific function - one time alarm)
- Alarm (specific change in the system where medical team needs to be warned - periodical alarm)
- Critical (critical change in the system where immediate medical response is needed - constant alarm)

## Alarm trigger types
There are two types of alarms:
- Automatic alarms (alarms triggered by abnormal states such as breath stacking, breath not taken/given, etc.)
- User set alarms (set by medical personnel)
- User triggered alarms (due to enabling/disabling specific function)

### Automatic alarms
- Breath not taken/give for X seconds
- Breath stacking
- High Plateau pressure
- Low Plateau pressure
- Absolute volume maximum (overinflation - possible sensor or pressure generator error)
- Absolute volume minimum (underinflation - possible sensor or pressure generator error)
- Absolute pressure maximum (possible sensor or control valve error)
- Absolute pressure minimum (possible sensor or control valve error)
- Absolute flow maximum (possible breathing aparatus error - loose hose)
- Absolute flow minimum (obstruction in the breathing aparatus or COPD)
- Lung incompliancy, stiffness (volume in the lung does not change significantly, when the pressure is increased)
- Switching from asist to control mode (if breath not taken for a period of time, it will be given by the device - see control modes)

### User set alarms
- Flow minimum alarm
- Flow maximum alarm
- Volume minimum alarm
- Volume maximum alarm
- Pressure minimum alarm
- Pressure maximum alarm
- Inspiratory/Expiratory ratio change alarm
- Breathing rate minimum alarm (in asist mode)
- Breathing rate maximum alarm (in asist mode)

- 