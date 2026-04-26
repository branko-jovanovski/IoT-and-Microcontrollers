# Exercise 01: Digital I/O Logic and Polling

![Arduino](https://img.shields.io/badge/-Arduino_Mega_2560-00979D?style=flat-square&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/Language-C++-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Proteus](https://img.shields.io/badge/Simulation-Proteus-000000?style=flat-square&logo=circuit-board&logoColor=white)

## Project Overview
This project serves as a foundational exercise in embedded systems design, demonstrating real-time hardware control. It illustrates how to acquire digital input signals and drive digital outputs using a continuous polling architecture.

---

## Hardware Specifications

| Component | Pin Assignment | Description |
| :--- | :---: | :--- |
| **Microcontroller** | N/A | Arduino Mega 2560 (ATmega2560) |
| **Digital Input** | `D7` | Momentary Push-Button (Active-High configuration) |
| **Digital Output** | `D13` | Status LED equipped with a 220Ω current-limiting resistor |

---

## Theory of Operation
The firmware is designed around a continuous polling loop. The execution logic follows these parameters:

1. **Data Acquisition:** The microcontroller continuously monitors the voltage level on Pin D7.
2. **State 1 (Active):** Upon closing the circuit (button press), a `HIGH` logic signal is detected. The firmware immediately asserts a `HIGH` state on Pin D13, illuminating the LED.
3. **State 2 (Idle):** Upon release, the input signal drops to `LOW`, and the microcontroller de-asserts Pin D13, turning the LED off. This creates a direct input-output mirroring effect with minimal latency.

---

## Circuit Schematic
The hardware schematic was designed and simulated utilizing the Proteus Design Suite.

![Circuit Schematic](./01-digital-io-logic-schematic.png)

---

## File Reference
Navigate directly to the project assets:

* **Source Code:** [`01-digital-io-logic.ino`](./01-digital-io-logic.ino)
* **Simulation File:** [`01-digital-io-logic.pdsprj`](./01-digital-io-logic.pdsprj)

---
*Developed for the IoT and Microcontrollers laboratory curriculum.*
