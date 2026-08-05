# Ultrasonic Sensor with Servo Motor and LED using Arduino

## Project Description
This project uses an HC-SR04 ultrasonic sensor to detect the distance of an object When an object is detected between **2 cm and 10 cm**, the servo motor rotates to **90°** and the LED turns on When the object moves away, the servo returns to **0°** and the LED turns off

## Components
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires

## Circuit Connections

### HC-SR04
- VCC → 5V
- GND → GND
- TRIG → D9
- ECHO → D10

### Servo Motor
- Signal → D6
- VCC → 5V
- GND → GND

### LED
- Anode (+) → D3 through 220Ω resistor
- Cathode (-) → GND

## How It Works
1. The ultrasonic sensor continuously measures the distance
2. If the distance is between **2 cm and 10 cm**:
   - Servo rotates to **90°**
   - LED turns ON
3. If the object moves farther than 10 cm:
   - Servo returns to **0°**
   - LED turns OFF

## Arduino Code
The project is programmed using the Arduino IDE with the **Servo** library

## Expected Output
- Object detected (2–10 cm):
  - Servo rotates to 90°
  - LED turns ON
- Object moves away:
  - Servo returns to 0°
  - LED turns OFF

## Author
Aryam Aseiri
