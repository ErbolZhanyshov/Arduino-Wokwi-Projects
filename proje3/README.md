# Smart Thermostat Control System

Arduino and Wokwi-based hysteresis temperature control simulation using an analog sensor (LM35 / Slide Potentiometer).

### Components
- Arduino Uno
- Analog Temperature Sensor (LM35 / Slide Potentiometer)
- 3 LEDs (Heater, Cooler, Overheat Warning)
- Buzzer
- 220Ω Resistors

### Features
- **Heater Control:** Turns on below 20°C and heats until reaching 25°C.
- **Cooler Control:** Turns on above 30°C and cools until dropping to 27°C.
- **Overheat Alarm:** Triggers warning LED and 1000 Hz buzzer at 40°C or higher.
- **Serial Monitoring:** Prints real-time temperature readings in Celsius.

### Technologies
- Arduino C++
- Wokwi Simulator