# Arduino LED Blink Project

## Overview
This project demonstrates how to blink an LED using an Arduino board. The LED turns ON for 1 second and OFF for 1 second continuously.

## Components Required
- Arduino Board
- LED (Optional if using built-in LED)
- 220 Ohm Resistor
- Breadboard
- Jumper Wires

## Circuit Connection
- Connect the LED positive leg (long leg) to digital pin 13.
- Connect the LED negative leg (short leg) to GND through a 220 Ohm resistor.

> Note: Most Arduino boards already have a built-in LED connected to pin 13, so external wiring is optional.

## Code Explanation
- `pinMode(ledPin, OUTPUT)` sets pin 13 as an output.
- `digitalWrite(ledPin, HIGH)` turns the LED ON.
- `digitalWrite(ledPin, LOW)` turns the LED OFF.
- `delay(1000)` waits for 1000 milliseconds (1 second).

## How to Run
1. Open Arduino IDE.
2. Connect your Arduino board to the computer.
3. Copy the code into Arduino IDE.
4. Select the correct board and COM port.
5. Click **Upload**.
6. Observe the LED blinking every second.

## Expected Output
The LED blinks continuously:
- ON for 1 second
- OFF for 1 second
