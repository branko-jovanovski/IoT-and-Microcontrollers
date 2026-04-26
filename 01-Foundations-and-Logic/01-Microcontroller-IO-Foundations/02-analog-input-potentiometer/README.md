# Exercise 02: Analog Input Reading

![Arduino](https://img.shields.io/badge/-Arduino_Mega_2560-00979D?style=flat-square&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/Language-C++-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Proteus](https://img.shields.io/badge/Simulation-Proteus-000000?style=flat-square&logo=circuit-board&logoColor=white)

## Project Overview
This project demonstrates the basics of reading analog signals. It reads a varying voltage from a potentiometer and displays the numerical value on the Serial Monitor in real-time.


---

## Hardware Specifications

**Microcontroller:** Arduino Mega 2560 (ATmega2560)

| Component | Pin | Description |
| :--- | :---: | :--- |
| **Potentiometer** | `A0` | Analog Input (Variable voltage 0-5V) |
| **Serial Monitor / Virtual Terminal** | `TX` | Displays output values |

---

## How it Works
The program continuously reads the analog voltage from the potentiometer. The built-in Analog-to-Digital Converter (ADC) converts the input voltage (0–5V) into a digital value (0–1023).

* **Potentiometer at 0%:** The Arduino reads ~0V and prints `0`
* **Potentiometer at 50%:** The Arduino reads ~2.5V and prints ~`512`
* **Potentiometer at 100%:** The Arduino reads ~5V and prints `1023`

*Result:* The values update in real-time as the potentiometer is adjusted.

---

## Circuit Schematic
The hardware schematic was designed and simulated utilizing the Proteus Design Suite.

![Circuit Schematic](./02-analog-input-potentiometer-schematic.png)

---

## File Reference
Navigate directly to the project assets:

* **Source Code:** [`02-analog-input-potentiometer.ino`](./02-analog-input-potentiometer.ino)
* **Simulation File:** [`02-analog-input-potentiometer.pdsprj`](./02-analog-input-potentiometer.pdsprj)

---
*Project developed for the IoT and Microcontrollers course.*
