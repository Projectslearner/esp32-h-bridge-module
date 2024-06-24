# ESP32 H-Bridge Module Project

## Project Overview
This project demonstrates how to control a DC motor using an H-Bridge module with an ESP32 microcontroller. H-Bridge modules allow bidirectional control of motors, enabling them to rotate in both clockwise and counterclockwise directions.

## Components Needed
- ESP32 Microcontroller
- H-Bridge Motor Driver Module (e.g., L298N)
- DC Motor
- Jumper Wires
- Breadboard
- Power Supply (suitable for the motor)

## Block diagram


## Circuit Setup
1. **Connecting the H-Bridge Module to ESP32:**
   - Connect the IN1 pin of the H-Bridge module to GPIO pin 12 on the ESP32.
   - Connect the IN2 pin of the H-Bridge module to GPIO pin 14 on the ESP32.
   - Connect the motor terminals to the OUT1 and OUT2 of the H-Bridge module.
   - Connect the power supply (e.g., 9V battery) to the H-Bridge module to power the motor.

## Instructions
1. **Setup:**
   - Initialize GPIO pins connected to the H-Bridge module (IN1 and IN2) as outputs using `pinMode()` in the `setup()` function.
   - Set the initial direction of the motor by setting IN1 and IN2 accordingly (e.g., clockwise or counterclockwise).

2. **Operation:**
   - In the `loop()` function:
     - Rotate the motor clockwise by setting IN1 high and IN2 low for 2 seconds using `digitalWrite()` and `delay()`.
     - Stop the motor by setting both IN1 and IN2 low for 1 second.
     - Rotate the motor counterclockwise by setting IN1 low and IN2 high for 2 seconds.
     - Stop the motor again for 1 second.
     - Repeat this cycle to create a continuous back-and-forth motion of the motor.

3. **Considerations:**
   - **Motor Power:** Ensure the power supply connected to the H-Bridge module matches the motor's voltage and current requirements.
   - **H-Bridge Module:** Verify the H-Bridge module's specifications and connections to ensure correct motor control.

## Applications
- **Robotics:** Control movement of robot wheels or arms.
- **Automation:** Drive conveyor belts or automated doors.
- **DIY Projects:** Build custom motorized devices with bidirectional motor control.

## Notes
- **Motor Control:** The H-Bridge module allows for bidirectional control of DC motors, essential for many robotics and automation applications.
- **Timing:** Adjust the `delay()` periods to modify motor rotation duration and stopping intervals based on specific project requirements.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 H-Bridge Module](https://projectslearner.com/learn/esp32-h-bridge-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner