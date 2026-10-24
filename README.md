# Smart Irrigation System

A beginner-friendly embedded systems project built using Arduino and Wokwi to automate crop irrigation based on real-time soil moisture levels.

## Project Overview
This project simulates an automated irrigation system. It continuously monitors soil moisture and triggers a water pump indicator when the soil becomes too dry, helping conserve water and maintain optimal crop health.

## Components Used
- Arduino Uno
- Soil Moisture Sensor (Simulated via potentiometer in Wokwi)
- Water Pump Indicator (Simulated via LED and resistor)

## Code Logic
- The analog sensor data is read on pin A0.
- If the moisture value falls below 500 (threshold), the system flags the soil as dry and turns the pump indicator ON.
- Otherwise, the soil is considered wet, and the pump remains OFF.

## How to Test the Simulation
You can view and run the complete live circuit simulation directly on Wokwi:
https://wokwi.com/projects/478683005753532417
