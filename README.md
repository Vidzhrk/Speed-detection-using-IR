# IR Speed Detection using ESP32 and IR Sensors

This project measures the speed of a moving object using two IR sensors and an ESP32. The user enters the distance between the sensors through the Serial Monitor, and the ESP32 calculates the speed from the time taken for the object to travel between them.

## Hardware
- ESP32
- 2 × IR obstacle sensors
- Jumper wires, breadboard
- USB cable for power and Serial Monitor

## How it works
1. User inputs the distance between the sensors.
2. Object cuts the first IR beam → timer starts.
3. Object cuts the second IR beam → timer stops.
4. Speed = distance / time, printed on Serial Monitor.
