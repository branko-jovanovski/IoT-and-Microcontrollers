/*
 * ================================================================
 * Project: Analog Input Potentiometer
 * Exercise: 02
 * Course: IoT and Microcontrollers
 * ---------------------------------------------------------------
 * Description:
 * This program reads a variable analog voltage from a potentiometer 
 * and converts it into a digital value (0–1023) using the built-in 
 * Analog-to-Digital Converter (ADC). The result is then displayed 
 * on the Serial Monitor.
 
 * Hardware Configuration:
 * - MCU: Arduino Mega 2560 (ATmega2560)
 * - Input: Potentiometer connected to Analog Pin A0
 * - Setup: Outer pins to 5V and GND, middle pin to A0
 * ================================================================
 */


// --- Pin Definitions ---
const int ANALOG_PIN = A0;    // Analog input pin for potentiometer

// --- Global Variables ---
int sensorValue = 0;          // Stores the analog value (0 - 1023)


void setup() {
  // Initialize serial communication for debugging/monitoring
  Serial.begin(9600);
}

void loop() {
  // 1. Read the analog value from the potentiometer
  sensorValue = analogRead(ANALOG_PIN);

  // 2. Print the value to the Serial Monitor
  Serial.println(sensorValue);

  // 3. Small delay for stable readings
  delay(10);
}
