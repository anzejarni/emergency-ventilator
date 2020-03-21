# Limits and Defaults

## Absolute shutoff settings to protect the patient
- Maximum pressure generated (EV_CRITICAL_MAX_PRESSURE):  26 cm H2O
- Maximum volume in the system (EV_CRITICAL_MAX_VOLUME):  1500 mL
- Maximum flow through the system (EV_CRITICAL_MAX_FLOW): 110 L/min

## Inspiratory pressure setting (cm H20)
- Minimum user controlled value of IPAP (EV_SETTING_MIN_IPAP): 5 cm H2O
- Maximum user controlled value of IPAP (EV_SETTING_MAX_IPAP): 24 cm H2O
- Default user setting of IPAP (EV_SETTING_DEFAULT_IPAP): 10 cm H2O

## Expiratory pressure setting (cm H20)
- Minimum user controlled value of EPAP (EV_SETTING_MIN_EPAP): 5 cm H2O
- Minimum user controlled value of EPAP (EV_SETTING_MAX_EPAP): 24 cm H2O
- Default user setting of EPAP (EV_SETTING_DEFAULT_EPAP): 5 cm H2O

## Positive End Expiratory Pressure setting (cm H2O)
- Minimum user controlled value of PEEP (EV_SETTING_MIN_PEEP): 5 cm H2O
- Minimum user controlled value of PEEP (EV_SETTING_MAX_PEEP): 20 cm H2O
- Default user setting of PEEP (EV_SETTING_DEFAULT_PEEP): 5 cm H2O

## Breating rate (br/min) setting
- Minimum user controlled value of Breathing Rate (EV_SETTING_MIN_RATE): 10 br/min
- Minimum user controlled value of Breathing Rate (EV_SETTING_MAX_RATE): 30 br/min
- Default user setting of (EV_SETTING_DEFAULT_RATE): 14 br/min

## Flow Setting (L/min)
- Minimum user controlled value of Flow (EV_SETTING_MIN_FLOW): 10 L/min
- Maximum user controlled value of Flow (EV_SETTING_MAX_FLOW): 100 L/min
- Default user controlled value of Flow (EV_SETTING_DEFAULT_FLOW): 60 L/min

## Volume (mL) setting
- Minimum user controlled value of Volume (EV_SETTING_MIN_VOLUME): 50 mL
- Maximum user controlled value of Volume (EV_SETTING_MAX_VOLUME): 1000 mL
- Default user controlled value of Volume (EV_SETTING_DEFAULT_VOLUME): 450 mL

## Volume per Kg body mass IBU
- Minimum user setting for Volume in mL per Kg IBU Ratio (EV_SETTING_VOL_KG_RATIO): 5
- Maximum user setting for Volume in mL per Kg IBU Ratio (EV_SETTING_VOL_KG_RATIO): 14
- Default user setting for Volume in mL per Kg IBU Ratio (EV_SETTING_VOL_KG_RATIO): 8

## Oxigen (%) setting
- Minimum user controlled value of Oxygen (EV_SETTING_MIN_O2): 21 %
- Minimum user controlled value of Oxygen (EV_SETTING_MAX_VOLUME): 100 %
- Default user controlled value of Volume (EV_SETTING_DEFAULT_VOLUME): 100 %

## Plateau Pressure Detection (https://bmjopen.bmj.com/content/7/5/e015091)
- Minimum breath hold time by patient in seconds (EV_BREATH_MIN_HOLD): 0.5 sec
- Maximum breath hold time by patient in seconds (EV_BREATH_MAX_HOLD): 1.5 sec
- Elevated plateau pressure threshold (EV_BREATH_PLATEAU_THRESHOLD_ELEV): 26 cm H2O (Villar et al)
- Decreased plateau pressure threshold (EV_BREATH_PLATEAU_THRESHOLD_ELEV): ? H2O = ? Hg