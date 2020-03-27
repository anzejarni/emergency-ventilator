# Apnoea Backup Ventilation
Apnoea is defined as temporary suspension of breathing.
In ventilation it is defined as a failure of the ventilator to detect patient's breathing for a preiod longer than apnoea time.

Two conditions for this feature:
- Patient must be breathing spontaneously
- Apnoea must be possible in the current mode; it must be a support mode or SIMV mode with a very low set rate

It consist of apnoea alarm and apnoea backup ventilation. 
 
## Alarm
Apnoea time is an alarm parameter of time and a maximum acceptable interval between any two consecutive mechanical breaths. Apnoea alarm is positive if it does not detect breah triggering with the defined apnoea time.

## Backup ventilation
If this feature is enabled and alarm is activated the ventilator will provide mechanical breath according to 