# Hardware
The hardware should consist of the following components:
- Controlling unit (Raspberry PI, Arduino, ARM, x86) capable of GPIO
- Relay board for controlling actuators (3.3V or 5V capable, depending on the GPIO outputs)
- Pressure generator
- Inspiration controlling valve
- Expiration controlling valve
- Inspiration flow rate meter
- Inspiration pressure meter
- Expiration flow rate meter
- Inspiration pressure meter

# Controlling unit
Controlling unit should be able to process all thread module function in a maximum time of 50ms.

# Pressure generator
Pressure generator could be a device capable of fast pressure response, or constant (compressor) where pressure is controlled by a controlling valve.
Pressure generator should be capable of providing 100L/min, the pressure resolution should be 1 cm H2O which is equal to 0.98067 millibar and 0,014223343334285 psi.

# Inspiration/Expiration valves
The valves should have a fast response (ms order) and capable of limiting pressure.
- Minimum pressure: 0 cm H20 = 0 milibar = 0 psi
- Maximum pressure: 40 cm H2O = 39.2266 milibar = 0,5689337333714 psi
- Resolution: 1 cm H2O = 0.98067 millibar = 0,014223343334285 psi

# Flow meters
The flow meter should have a fast reading (ms order)
- Minimum flow: 0 mL/s = 0 cm3/s
- Maximum flow: 2000 mL/s = 2000 cm3/s
- Resolution: 50 mL/s = 50 cm3/s

# Pressure meters
The flow meter should have a fast reading (ms order)
- Minimum pressure: 0 cm H2O = 0 milibar = 0 psi
- Maximum pressure: 40 cm H2O = 39.2266 milibar = 0,5689337333714 psi
- Resolution: 1 cm H2O = 0.98067 millibar = 0,014223343334285 psi
