# 7-Bit Parity Generator (Even / Odd)

Arduino and Wokwi-based 8-bit parity generator simulation using bitwise XOR logic.

### Components
- Arduino Uno
- 8-Position DIP Switch
- 1 LED (Parity Bit Output)
- 220Ω Resistor

### Features
- **7-Bit Data Input:** Reads 7 binary data bits via digital pins `D2`–`D8` using internal `INPUT_PULLUP`.
- **Parity Mode Selection:** Selects Even (`0`) or Odd (`1`) parity calculation via switch 8 (`D9`).
- **XOR Logic Calculation:** Computes the 8th parity bit using bitwise XOR (`^`) operations.
- **LED & Serial Output:** Displays the calculated parity bit on pin `D13` and prints real-time status to the Serial Monitor (9600 baud).

### Technologies
- Arduino C++
- Wokwi Simulator