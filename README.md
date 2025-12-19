# Temperature Monitor 🌡️

> [!NOTE]
> 🚧 Currently, this project is under development.

This project demonstrates a basic setup using an **LM35 temperature sensor** and 3 LEDs as visual indicators. The goal of the project is to work with `analog sensor`, `ADC conversion` and `conditional logic` in embedded systems. In this version instead of using display or application interface, the system provides immediate feedback through LEDs and the Serial Monitor. **This version shows the initial implementation** of the project and can be expanded in the future with features such as display, alert system or IoT connectivity.

---
### Hardware Requirements

1. Arduino Uno (or compatible board)
2. LM35 Temperature Sensor
3. Breadbooard and jumper wires
4. Resistors (Lower than 1K Ω)
5. RGB LEDs
   - Blue (Low temperature)
   - Green (Normal temperature)
   - Red (High temperature)

 ---

### Pin Configuration 


|Component | Arduino Pin | 
|--|--|
|LM35 Output | A0 |
|Blue LED | D3 |
|Green LED | D5 |
| Red LED | D7 |

---

### How does it work?

The system operates by continuously measuring the ambient temperature using the LM35 sensor and processing this data within the Arduino. The LM35 generates an analog output voltage that is directly proportional to the surrounding temperature, with a scale factor of **10 mV per degree Celsius (°C)**. This analog signal is connected to the Arduino’s **A0 pin**, where it is read using the built-in Analog-to-Digital Converter (ADC).

The ADC converts the analog signal into a digital value ranging from **0 to 1023**, based on the Arduino’s 10-bit resolution. This digital value is then converted back into voltage using the reference voltage of the board (5V), according to the following formula : 

```Cpp
voltage = TempValue *(5.00 / 1023.00);
```

Once the voltage is calculated, it is converted intotemperature in degrees Celsuis. Since the LM35 output 0.01 volts per degree Celsuis, the temperature is obtained using :

```cpp
Temperature(°C) = voltage * 100;
``` 
After calculating the temperature, the program evaluates its value using conditional statements to determine the current temperature range. Based on this evaluation, one of the three LEDs is activated to provide an immediate visual indication of the thermal condition. At the same time, the measured temperature is sent to the Serial Monitor, allowing the user to observe real-time readings. This process is repeated every three seconds, ensuring periodic and stable temperature updates.



### Example Output  (Serial Monitor)

```
Temperature : 26.50 C
```

---

### Future Improvements 🚀
This project can be further enhanced in several ways to improve its functionality, accuracy, and usability. One possible improvement is adding `PWM control` to the LEDs, allowing their brightness to change gradually based on temperature variations rather than simple ON/OFF behavior. This would **provide a smoother and more intuitive visual representation** of temperature changes.

Another enhancement would be integrating a `display module`, such as an **LCD or OLED**, to show the temperature directly without relying on the Serial Monitor. This would make the system more practical for standalone use. Additionally, implementing `audio or visual alerts`, such as a **buzzer or blinking patterns**, could help notify users when the temperature exceeds predefined thresholds.

For higher accuracy, the system could be improved by applying `sensor calibration` and averaging multiple readings to reduce noise and fluctuations. Finally, the project could be extended into an `IoT-based temperature monitoring system` by adding **wireless communication modules**, enabling remote monitoring, data logging, and real-time analysis.

---

### Licence ⚖️

This project is released under the [MIT License](https://github.com/Rohibakhsh-Niloofar/Temperature-Monitor/blob/main/LICENSE)

---


