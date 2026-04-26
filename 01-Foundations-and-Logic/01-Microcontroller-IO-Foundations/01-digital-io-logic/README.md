# Exercise 01: Digital I/O Logic and Polling

![Arduino](https://img.shields.io/badge/-Arduino_Mega_2560-00979D?style=flat-square&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/Language-C++-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Proteus](https://img.shields.io/badge/Simulation-Proteus-000000?style=flat-square&logo=circuit-board&logoColor=white)

## Project Overview
This project demonstrates the basics of digital input and output control. It reads a signal from a push-button and turns an LED on or off in real-time based on the button's state.

---

## Hardware Specifications

**Microcontroller:** Arduino Mega 2560 (ATmega2560)

| Component | Pin | Description |
| :--- | :---: | :--- |
| **Push-Button** | `D7` | Digital Input (Active-High) |
| **Status LED** | `D13` | Digital Output (with 220Ω resistor) |

---

## How it Works
The program runs a continuous loop to monitor the push-button in real-time. 

* **Button Pressed:** The Arduino reads a `HIGH` signal on Pin D7 and turns the LED ON.
* **Button Released:** The signal drops to `LOW`, and the LED turns OFF.

*Result:* The LED directly mirrors the state of the button.

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
*Project developed for the IoT and Microcontrollers course.*

