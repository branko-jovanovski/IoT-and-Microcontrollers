/*
 * ================================================================
 * Project: Digital I/O Logic Control
 * Exercise: 01
 * Course: IoT and Microcontrollers
 * ---------------------------------------------------------------
 * Description:
 * This program demonstrates basic digital I/O operations.
 * It reads the state of a push-button and controls an LED 
 * based on the input state.
 *
 * Hardware Configuration:
 * - MCU: Arduino Mega 2560 (ATmega2560)
 * - Input: Push-button connected to Digital Pin 7
 * - Output: Status LED connected to Digital Pin 13
 * ================================================================
 */


// --- Pin Definitions ---
const int LED_PIN = 13;        // LED output pin (on-board or external LED)
const int BUTTON_PIN = 7;      // Push-button input pin

// --- Global Variables ---
int buttonState = 0;          // Stores the current button state (HIGH or LOW)


void setup() {
  // Initialize LED_PIN as a digital output
  pinMode(LED_PIN, OUTPUT);
  
  // Initialize BUTTON_PIN as a digital input
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  // 1. Read the current state of the button
  buttonState = digitalRead(BUTTON_PIN);

  // 2. Update the LED state based on the button
  // If the button is pressed (HIGH), the LED turns ON
  // If the button is not pressed (LOW), the LED turns OFF
  digitalWrite(LED_PIN, buttonState);
}
