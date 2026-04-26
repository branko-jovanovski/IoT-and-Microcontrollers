# 🎛️ Exercise 01: Digital I/O Logic & Polling

![Arduino](https://img.shields.io/badge/-Arduino_Mega_2560-00979D?style=flat-square&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/Language-C++-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Proteus](https://img.shields.io/badge/Simulation-Proteus-000000?style=flat-square&logo=circuit-board&logoColor=white)

## 📌 Project Overview
A foundational embedded systems exercise demonstrating real-time hardware control. This project showcases how to read digital input signals and drive digital outputs using a continuous polling method.

---

## 🛠️ Hardware Specifications

| Component | Pin Mapping | Description |
| :--- | :---: | :--- |
| **Microcontroller** | `N/A` | Arduino Mega 2560 (ATmega2560) |
| **Digital Input** | `D7` | Momentary Push-Button (Active-High) |
| **Digital Output** | `D13` | Status LED with 220Ω current-limiting resistor |

---

## ⚙️ Theory of Operation (Logic)
The firmware utilizes a **polling mechanism** within the main loop to continuously monitor the voltage level on Pin 7. 
* **State 1:** When the button is pressed, the circuit closes, providing a `HIGH` logic signal. The microcontroller detects this and immediately sets Pin 13 to `HIGH`, illuminating the LED.
* **State 2:** When released, the signal drops to `LOW`, and the MCU turns the LED off. This creates a direct "Input-Output Mirroring" effect.

---

## 🖼️ Circuit Schematic
*Designed and simulated in Proteus.*

![Circuit Schematic](./01-digital-io-logic-schematic.png)

*(Note: Ensure that the button is properly grounded/pulled-down to prevent floating pin states).*

---

## 📂 Repository Files
Navigate directly to the project files:
* 📝 **[Source Code (.ino)](./01-digital-io-logic.ino)** - *C++ Firmware*
* 🔬 **[Proteus Project (.pdsprj)](./01-digital-io-logic.pdsprj)** - *Simulation File*
