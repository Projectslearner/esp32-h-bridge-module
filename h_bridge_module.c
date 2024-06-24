/*
    Project name : ESP32 H-Bridge Module
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-h-bridge-module
*/

// Define motor control pins
const int motorA_IN1 = 12; // GPIO pin connected to IN1 on H-Bridge
const int motorA_IN2 = 14; // GPIO pin connected to IN2 on H-Bridge

void setup() {
  // Initialize motor control pins as outputs
  pinMode(motorA_IN1, OUTPUT);
  pinMode(motorA_IN2, OUTPUT);
  
  // Set motor initial direction (clockwise)
  digitalWrite(motorA_IN1, HIGH);
  digitalWrite(motorA_IN2, LOW);
}

void loop() {
  // Rotate motor clockwise for 2 seconds
  digitalWrite(motorA_IN1, HIGH);
  digitalWrite(motorA_IN2, LOW);
  delay(2000);
  
  // Stop motor for 1 second
  digitalWrite(motorA_IN1, LOW);
  digitalWrite(motorA_IN2, LOW);
  delay(1000);
  
  // Rotate motor counterclockwise for 2 seconds
  digitalWrite(motorA_IN1, LOW);
  digitalWrite(motorA_IN2, HIGH);
  delay(2000);
  
  // Stop motor for 1 second
  digitalWrite(motorA_IN1, LOW);
  digitalWrite(motorA_IN2, LOW);
  delay(1000);
}
