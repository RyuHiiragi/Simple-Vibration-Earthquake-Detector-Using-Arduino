# Simple Vibration/Earthquake Detector Using Arduino

This repository contains the Arduino code, configuration, and assembly instructions for building a simple vibration/earthquake detector using an accelerometer sensor. The system is designed to detect vibrations or small seismic activities, which can serve as an early warning system for potential earthquakes <button class="citation-flag" data-index="1">. It is ideal for educational purposes, home safety, or small-scale monitoring applications.

---

## Table of Contents
1. [Overview](#overview)
2. [Components Used](#components-used)
3. [System Dimensions](#system-dimensions)
4. [Assembly Instructions](#assembly-instructions)
5. [Arduino Code Explanation](#arduino-code-explanation)
6. [How to Test Without Simulation](#how-to-test-without-simulation)
7. [Contributing](#contributing)
8. [License](#license)

---

## Overview
The vibration/earthquake detector uses an MPU6050 accelerometer to measure acceleration and tilt, detecting vibrations caused by seismic activity <button class="citation-flag" data-index="8">. When a significant vibration is detected, the system triggers an audible alert (buzzer) and visual indicators (LEDs). This project is a simple yet effective way to monitor for potential earthquakes or structural vibrations.

---

## Components Used
To build this vibration/earthquake detector, you will need the following components:
- **Arduino Uno**
- **MPU6050 Accelerometer/Gyroscope**
- **Active Buzzer**
- **Red LED**
- **Green LED**
- **220Ω Resistors**
- **Jumper Wires**
- **Breadboard (Optional)**

---

## System Dimensions
For an ideal vibration/earthquake detector:
- **Height**: 10–15 cm
- **Width**: 10–15 cm
- **Length**: 10–15 cm

These dimensions ensure that the system is compact yet spacious enough to house all components.

---

## Assembly Instructions
Follow these steps to assemble your vibration/earthquake detector:
1. Connect the MPU6050 sensor to the Arduino using I2C communication.
2. Connect the buzzer and LEDs to the appropriate digital pins on the Arduino.
3. Power the system using a USB cable or 9V battery.
4. Secure all components inside a protective enclosure.

---

## Arduino Code Explanation
The provided Arduino code reads data from the MPU6050 sensor and calculates the total acceleration. If the acceleration exceeds a predefined threshold, the system triggers an alert by activating the buzzer and lighting up the red LED. During normal conditions, the green LED remains lit.

---

## How to Test Without Simulation
1. Upload the code to the Arduino using a USB cable.
2. Test the accelerometer by shaking it gently and observing the Serial Monitor for vibration messages.
3. Verify that the buzzer and LEDs respond correctly to detected vibrations.

---

## Contributing
Feel free to fork this repository and contribute improvements or new features. If you have suggestions or find bugs, please open an issue.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

By following this guide, you should be able to build and test your own simple vibration/earthquake detector using Arduino. Happy tinkering! 🚀
