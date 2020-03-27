Baseline:
- the pressure in a steady system

Breath is triggered:


- Pressure triggered by patient trying to take a breath (negative pressure triggered, sensitivity is a negative value in cmH2O, such as –0.5, –1.0, or –2.0 cmH2O, virtual pressure threshold below the current PEEP)
 For instance,  if  the  set  PEEP  is  5  cmH2O,  and  the  triggering  sensitivity  is  set  to  –2.0  cmH2O,  the  ventilator starts delivering inspiratory gas if the airway pressure drops to or below 3 cmH2O. The smaller the absolute value of the sensitivity, the more sensitive the triggering, and vice versa. Beware: too sensitive setting can cause auto-triggering.

- Flow triggered by patient when inhaling. The inspiratory valve provides constant pressure through the circuit while expiratory valve is partially closed to provide resistance. The flow is constant until the patient makes a breath and reduces the expiratory flow. This also triggers inspiratory valve to open to predefined settings and then open expiratory valve to provide exhalation

- Manually triggered by a control button that operator can use to trigger breath immediately or at the next possible option

# Potential algorithms
## Pressure Control
* Measure the baseline pressure
* Wait for scheduled breath
* Open inspiration valve to the IPAP limit (possibly start the pressure generator)
* On defined peak inspiratory pressure close the inspiration valve (possibly stop the pressure generator) or inspiration time
* Open expiration valve pressure drops below the baseline
* Close the expiration valve

## Pressure Asist Control
* Measure the baseline pressure
* Wait for drop in pressue (asist) or scheduled breath (control)
* Open inspiratory valve to IPAP limit (possibly start the pressure generator)
* On defined peak inspiratory pressure close the inspiration valve (possibly stop the pressure generator) or inspiration time
* Open expiration valve pressure drops below the baseline
* Close the expiration valve

## Volume Asist Control
* Open inspiratory valve to IPAP limit
* When the tidal volume is provided to the patient, close the inspiratory valve
* Open expiratory valve to allow expiration


Inspiration and Expiration phase are without delay. 
In Control modes, the patient trying to take breath is ignore and breathing is forced periodically
In Asist modes, the RR is used as a backup schedule when the patient misses a breath and is forced

# Definition
- Triggering (when inspiration begins)
- Cycling (when inspiration ends)
- Controlling (how gas is delivered in terms of time, pressure and volume)
- Targeting (how much gas is delivered)

# Safety
All sensors should have a timing contingency, such as timeout. A new breath should override all sensors based on breathing schedule. Such error should sound an alarm and log the event (for example: Volume breath not triggered, Peak Expiratory Pressure not reached, etc.)
This is called Maximum Inspiratory Time (Ti Max) and is a setting in the ventilator safeguarding infinite ventilation.

If pressure on inspriratory pressure sensor too high, immediately shut down pressure generator (or close main valve)

## Ambient State
If ventilator (HW/SW) malfunctions it should immediately and automatically switch to Ambient state.
In ambient state:
- Expiratory valve is opened
- Ambient valve (an extra valve on the inspiratory valve) is opened

# Basic Mechanism
* Breath is triggered by schedule, volume, pressure
* Pressure generator is started and inspiratory valve is opened to defined resistance
* Time to inspiration is controlled by time, volume or pressure
* Pressure generator is stopped and inspiratory valve is closed
* Expiratory valve is opened to defined resistance
* Time to expiration is controlled by time, volume, or pressure
* Expiration time is closed

# Triggering

## Triggering Window
Triggering window is a time window at late expiration, when the ventilator responds to patient's breath.
If the ventilator detects a valid pneumatic signal in this window, a breath asist will be triggered, else a control breath will be triggered.

## Time triggering
In controlled mode, only periodical breaths are made. In Asist mode, the breaths need to be triggered. In Asist Control mode, the breaths are triggered, but if not, they are forced.	
	- Configured by Ti (Inspiration time) in seconds the remainder of BCT time is Te (Expiration time)
	- Configured by %Ti (Inspiration time %) in percent, the remainder of BCT time is Te (Expiration time)
	- Configured by I:E ratio (Inspiration to Expiration ratio) over BCT breath time (1:4, 1:3, 1:2, 1:1, 2:1, 3:1, 4:1)

## Pressure triggering
* At baseline the pressure is monitored
* Detect negative pressure (patient attempt to make a breath) - user settings defined
* Trigger breath

## Flow triggering
* Open inspiratory valve slightly
* Open expiratory valve slightly (base flow is now maintained)
* Maintain apropriate pressure and flow
* Detect increased flow (going into the lungs) on the inspiratory flow sensor  - user settings defined
* Trigger breath

# Cycling
## Time cycling
Simplest form of cycling and is time based - immediately after the expiration time.

### Peak Flow Amount Method
- Peak flow is defined (for example 36L/min)
- Time is calculated depending on target Tidal Volume
- Example: for 300mL (Vt) the inspiration flow will take 0.5s (35L/min = 600mL/s, so 300mL is filled in 0.5s )
- Peak pressure is monitored and if/when reached it cycles to expiration, that could result in smaller Ti and smaller Vt then in settings. Alarms triggered: high airway pressure, low tidal volume, and low minute volume.

## Flow cycling
Is a key feature of supported breaths.
The subject is the descending part of the inspiratory flow. Peak Inspiration Flow is regardless of it's absolute height taken as 100%.
Ventilator cycles to expiration when the inspiratory flow falls to a preset percentage. That is fixed at 25% for some ventilators, other have a setting in %.
A flow cycling control enables influencing Ti in support breaths to a certain extent. The higher the percentage, the lower the Ti.
This feature optimizes patient-ventilator synchrony in spontaneously breathing patients.
Backup time cycling is absolutely necessary here, because a leak could cause the PIF not to return to the preset percentage and cause infinite inspiration.

## Pressure cycling
Typically pressure cycling is used as protection in a volume breath, because persistent pressure can cause barotrauma.
To prevent this, the set upper limit of peak airway pressure serves not only as an alarm threshold but also the treshold for pressure cycling.
When the pressure is reached, the ventilator will immediately cycle to expiration. This will result in a shorter Ti and a smaller VT than the settings. In this case,
three alarms may be active: high airway pressure, low tidal volume, and low minute volume.

# Controlling
At any given time, the ventilator can control volume, or pressure but not both. Pressure controlling has a variant called adaptive controlling. 
Some ventilators use hybrid controlling.

## Volume (Flow) Controlling
- Three primary parameters: Vt, Ti and Peak Flow. Typically we set Vt and Ti or Vt and Peak Flow.
- Secondary parameter is the flow pattern: waveform. The most common is the sqare flow, but some newer ventilators have other waveform options (accelearating, decelerating, sine)
- Volume Ventilation provides steady tidal and minute volumes
- The ventilator must compensate the hose elasticity and provide more tidal volume then set
- It is problematic for: patient-machine asynchronicity, leak compensation is in impossible

## Pressure Controlling
- Two primary parameters: Ti, Inspiratory pressure
- Secondary parameter: Pressure Ramp or Rise Time (time required to achieve airway target pressure) - this is the speed of pressurization
- Inspiratory pressure is defined as additional pressure ontop of PEEP
- Requires easing of the pressure (if far off the target pressure increase pressure significantly, if just little of increase slightly, on target pressure stop)
- Automatic leak compensation (if there is a leak, the pressure will automatically be increased by the algorithm)
- Alarms: low tidal volume, minute volume

# Adaptive Controlling
- A variant of pressure controlling, taking watch on the tidal volume
- After every breath algorithm compares tidal volume taken by the patient towards the target tidal volume
	- if the target Vt is below the measured Vt, the pressure is increased
	- If the target Vt is above the measured Vt, the pressure is decreased

# Hybrid Controlling (not so popular, also called VAPS or PLV)
- Switching between volume control and pressure control inside a single breath
- Also called dual control

# PEEP Feature (keeping positive pressure in the system after expiration)
- Keep positive pressure by opening the inspiration valve when approaching the target PEEP pressure on exhalation
- Target pressures inside the system must be recalculated to include PEEP as baseline

# Ventilation Modes
- Conventional (operating exactly to operator settings)
- Adaptive (conventional with one or more settings automatically regulated)
- Biphasic (special CPAP where baseline pressure alternates)

## Volume Control Breath
- Trigger: time
- Cycle: time
- Control: volume

## Volume Asist Breath
- Trigger: pressure or flow
- Cycle: time
- Control: volume

## Pressure support Breath
- Trigger: pressure or flow
- Cycle: flow
- Control: pressure

## Pressure Control Breath
- Trigger: time
- Cycle: time
- Control: pressure

## Pressure Asist Breath
- Trigger: pressure or flow
- Cycle: time
- Control: pressure

## Spontaneous breath
- Trigger: pressure or flow
- Cycle: flow

## Adaptive Control Breath
- Trigger: time
- Cycle: time
- Control: adaptive

## Adaptive Asist Breath
- Trigger: pressure or flow
- Cycle: time
- Control: adaptive

## Adaptive Support Breath
- Trigger: pressure or flow
- Cycle: flow
- Control: adaptive

## Conventional Ventilation Modes

### Volume asist/control (A/C) mode
This mode allows two breath types: volume control breaths and volume asisted breaths.
Operator sets the settings:
- Tidal Volume
- Rate
- Ti (or I:E ratio or Peak Flow)
- Pressure trigger type and sensitivity
- PEEP
- FiO2
- Flow pattern (if supported by ventilator)

Leak undetectable in this mode.
Trigger window is supported.

### Pressure asist/control (A/C) mode
Operator set the settings:
- Inspiratory pressure
- Rate
- Ti (or I:E)
- Patient trigger type or sensitivity
- PEEP
- FiO2
- Rise time (if supported by ventilator)

Leak is detectable and compensated in this mode.
Tidal Volume can not be controlled in this mode, so alarms should be set.
Trigger window is supported.
PEEP is constant.

### Pressure support ventilation (PSV) mode
This mode functions to allow support breath.
Operator sets the settings:
- Inspiratory pressure (support pressure
- Patient trigger type and sensitivity
- PEEP
- FiO2
- Flow Cycling Criteria
- Rise time (if supported by ventilator)

Intended for active patients only.
Comfortable, because the patient can influence actual rate, inspiratory rate, inspiratory time, inspiratory flow and tidal volume.
Apnoea (backup) ventilatorion should be activated in this mode. This enables compansation for moderate leaks. This is also known as CPAP + PSV.

#### Spontaneous breaths
Intended for active patients, most likely the ones in the weaning trials.
Pressure suport is close to zero or zero. PEEP is at moderate level.
Technically challenging due to high sensitivity requirement.

#### Pressure supported breaths (PSV)
With pressure support to 10 cm H2O or higher, patient's breath is considered supported.
Intended for active patients who's efforts are inadequate to meet the required ventilatory demand.
In PSV mode, the breath is only delivered when pressure or flow triggered.
Due to no automatic breathing support, it is recommended to enable apnoea (backup) feature.

### Volume SIMV mode (Synchronized Intermittent Mandatory Ventilation)
SIMV is replacing IMV entirely.

Operator sets the settings:
- a. Tidal volume
- b. Rate (SIMV rate)
- c. Ti (or I:E)
- d. Psupport (pressure support)
- e. Patitent trigger type and sensitivity
- f. Flow cycling
- g. Rise time (if supported)
- h. PEEP
- i. FiO2

Three modes:
- Volume SIMV
	- volume control breath (settings: a, b, c)
	- volume assist breath (settings: a, c, e)
	- pressure support breath (d, e, f, g)
- Pressure SIMV
- Adaptive SIMV 













