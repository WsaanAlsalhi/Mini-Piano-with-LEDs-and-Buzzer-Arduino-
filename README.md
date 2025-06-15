# Mini Piano with LEDs and Buzzer (Arduino)

This project simulates a simple **mini piano** using **push buttons**, **LEDs**, and a **buzzer**. When a button is pressed, a corresponding musical note is played and an LED lights up.

---

##  Features

- Plays 6 musical notes: **Do, Re, Mi, Fa, Sol, La**
- Each note is mapped to:
  - A button (input)
  - An LED (visual feedback)
  - A buzzer (sound output)
- Uses `tone()` to generate sound and `noTone()` to stop it
- Internal **pull-up resistors** are enabled for buttons

---

## Components Required

| Component        | Quantity |
|------------------|----------|
| Arduino Uno/Nano | 1        |
| Push Buttons     | 6        |
| LEDs             | 6        |
| 220Ω Resistors   | 6 (for LEDs) |
| Buzzer (active/passive) | 1   |
| Breadboard + Jumper Wires | –  |

---

##  Wiring

| Button Pin | Arduino Pin |
|------------|--------------|
| Button 1   | D2           |
| Button 2   | D3           |
| Button 3   | D4           |
| Button 4   | D5           |
| Button 5   | D6           |
| Button 6   | D7           |

| LED Pin | Arduino Pin |
|---------|--------------|
| LED 1   | A0           |
| LED 2   | A1           |
| LED 3   | A2           |
| LED 4   | A3           |
| LED 5   | A4           |
| LED 6   | A5           |

| Buzzer | D8 |


