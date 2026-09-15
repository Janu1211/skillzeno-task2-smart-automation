# Task 2 – Smart Automation

## Objective
To build an automatic temperature-controlled fan system using a sensor and actuator.

## Components Used
- Arduino Uno
- TMP36 Temperature Sensor
- DC Motor
- 2N2222 Transistor
- 1kΩ Resistor
- 1N4007 Diode

## Working
The TMP36 sensor measures the temperature and sends an analog value to Arduino.

Arduino processes the sensor value and calculates the temperature.

When the temperature reaches 30°C or above, the fan turns ON automatically.

When the temperature is below 30°C, the fan remains OFF.

## Automation Logic
Temperature >= 30°C → Fan ON
Temperature < 30°C → Fan OFF

## Simulation
The complete circuit was