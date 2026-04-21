# Arduino 32x8 MAX7219 LED Matrix Running Text

A beginner-friendly Arduino project to display smooth scrolling text on a 32x8 LED matrix using MAX7219 modules.

This project demonstrates how to create a running text display with adjustable speed and brightness using simple and widely available components.

---

## 📌 Project Overview

The MAX7219 LED matrix is a popular module for displaying text and animations.

In this project, Arduino controls 4 chained 8x8 LED matrices (32x8 total) to display scrolling text from right to left.

You can easily customize:
- Text message  
- Scroll speed  
- Brightness level  

This project is perfect for beginners who want to learn LED matrix control and basic display animation.

---

## 🧰 Components Required

- Arduino Uno / Nano  
- 4x MAX7219 LED Matrix Module (FC-16)  
- Jumper Wires  
- Optional: External 5V Power Supply  

---

## 🔌 Wiring Connections

| MAX7219 | Arduino |
|--------|--------|
| VCC    | 5V     |
| GND    | GND    |
| DIN    | Pin 11 |
| CLK    | Pin 13 |
| CS     | Pin 10 |

> Connect OUT of one module to IN of the next module.

---

## 📷 Wiring Diagram

![Wiring Diagram](diagram.jpg)

> Follow the wiring diagram above before powering the circuit.

---

## 💻 Arduino Code

You can download the Arduino sketch here:

[Download Arduino Code](Arduino_32x8_LED_Matrix_Running_Text_MAX7219.ino)

Or open the `.ino` file directly inside this repository.

---

## 🚀 Getting Started

1. Connect all components based on the wiring table.
2. Install required libraries:
   - MD_Parola  
   - MD_MAX72XX  
   - SPI  
3. Upload the code to your Arduino board.
4. Power the circuit.
5. The text will scroll automatically on the LED matrix.

---

## 🧠 Learning Concepts

This project helps you understand:

- LED matrix control using MAX7219  
- SPI communication basics  
- Text animation (scrolling effect)  
- Library usage (MD_Parola)  
- Display configuration  

---

## 🎥 Video Tutorial

Watch the full step-by-step tutorial on YouTube:

[![Watch the video](https://img.youtube.com/vi/lcSZJuwPzEA/0.jpg)](https://youtu.be/lcSZJuwPzEA)

In this video, you will see:
- Components overview  
- Wiring diagram explanation  
- Real wiring setup  
- Code upload process  
- Final running text result  

---

## 📄 License

This project is open-source and free to use for educational purposes.

---

Happy Coding 🚀
