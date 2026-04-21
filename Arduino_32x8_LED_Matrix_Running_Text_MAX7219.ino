/*
========================================================
PROJECT NAME:
Arduino 32x8 LED Matrix Running Text (MAX7219)

DESCRIPTION:
This project displays smooth scrolling text on a 32x8 LED
matrix using MAX7219 modules. The text scrolls continuously
from right to left with adjustable speed and brightness.

COMPONENT LIST:
- Arduino UNO / Nano
- 4x MAX7219 LED Matrix Module (FC-16, 8x8 each)
- Jumper wires
- Optional: External 5V power supply

WIRING:
MAX7219    -> Arduino
VCC        -> 5V
GND        -> GND
DIN        -> D11 (MOSI)
CLK        -> D13 (SCK)
CS (LOAD)  -> D10

NOTE:
- Connect OUT of first module to IN of next module
- Total modules used: 4 (32x8 display)

LIBRARIES REQUIRED:
- MD_Parola
- MD_MAX72XX
- SPI
========================================================
*/

#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

// ========================
// Hardware Configuration
// ========================
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES   4

#define DATA_PIN  11
#define CLK_PIN   13
#define CS_PIN    10

// Create display object
MD_Parola display = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

// ========================
// Text Configuration
// ========================
char message[] = "HELLO WORLD - ARDUINO RUNNING TEXT 32X8 ";

// ========================
// Setup
// ========================
void setup() {
  display.begin();

  display.setIntensity(5);   // Brightness (0-15)
  display.setSpeed(50);      // Scroll speed (lower = faster)
  display.setPause(1000);    // Pause time (ms)

  display.displayText(
    message,
    PA_LEFT,
    50,
    1000,
    PA_SCROLL_LEFT,
    PA_SCROLL_LEFT
  );
}

// ========================
// Main Loop
// ========================
void loop() {
  if (display.displayAnimate()) {
    display.displayReset();
  }
}