Baseline:
- the pressure in a steady system

Breath is triggered:

- Perodically (RR)
In controlled mode, only periodical breaths are made. In Asist mode, the breaths need to be triggered. In Asist Control mode, the breaths are triggered, but if not, they are forced.	
	- Configured by Ti (Inspiration time) in seconds the remainder of BCT time is Te (Expiration time)
	- Configured by %Ti (Inspiration time %) in percent, the remainder of BCT time is Te (Expiration time)
	- Configured by I:E ratio (Inspiration to Expiration ratio) over BCT breath time 

- Pressure triggered by patient trying to take a breath (negative pressure triggered, sensitivity is a negative value in cmH2O, such as –0.5, –1.0, or –2.0 cmH2O, virtual pressure threshold below the current PEEP)
 For instance,  if  the  set  PEEP  is  5  cmH2O,  and  the  triggering  sensitivity  is  set  to  –2.0  cmH2O,  the  ventilator starts delivering inspiratory gas if the airway pressure drops to or below 3 cmH2O. The smaller the absolute value of the sensitivity, the more sensitive the triggering, and vice versa. Beware: too sensitive setting can cause auto-triggering.

- Flow triggered by patient when inhaling. The inspiratory valve provides constant pressure through the circuit while expiratory valve is partially closed to provide resistance. The flow is constant until the patient makes a breath and reduces the expiratory flow. This also triggers inspiratory valve to open to predefined settings and then open expiratory valve to provide exhalation

- Manually triggered by a control button that operator can use to trigger breath immediately or at the next possible option


Inspiration and Expiration phase are without delay. 
In Control modes, the patient trying to take breath is ignore and breathing is forced periodically
In Asist modes, the RR is used as a backup schedule when the patient misses a breath and is forced