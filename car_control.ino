#include <AFMotor.h> // Library for Bluetooth communication
#include <SoftwareSerial.h> // Library for L293d Arduino Motor Driver
int incomingByte = 0; // Data received from Bluetooth

// Define motors and their speeds here. Motors can operate in the range of 0–255 speed.
AF_DCMotor motor1(1, 255);
AF_DCMotor motor2(2, 255);
AF_DCMotor motor3(3, 255);
AF_DCMotor motor4(4, 255);

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  Serial.println("WAY!"); // Display "WAY!" on Serial Monitor at the beginning. You can modify this message or leave it empty.
}

void loop() {
  // Define speeds again individually.
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);

  // Read data if available from Serial (greater than 0).
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
  }

  // Implementing functions based on received data using Switch-Case.

  switch (incomingByte) {
    case 'S':
      // All motors stop.
      motor1.run(RELEASE);
      motor2.run(RELEASE);
      motor3.run(RELEASE);
      motor4.run(RELEASE);
      Serial.println("STOP\n");
      incomingByte = '*';
      break;

    case 'F':
      // Motors move forward.
      motor1.run(FORWARD);
      motor2.run(FORWARD);
      motor3.run(FORWARD);
      motor4.run(FORWARD);
      Serial.println("FORWARD\n");
      incomingByte = '*';
      break;

    case 'B':
      // Motors move backward.
      motor1.run(BACKWARD);
      motor2.run(BACKWARD);
      motor3.run(BACKWARD);
      motor4.run(BACKWARD);
      Serial.println("BACKWARD\n");
      incomingByte = '*';
      break;

    case 'R':
      // Motors turn right.
      motor1.run(FORWARD);
      motor2.run(RELEASE);
      motor3.run(FORWARD);
      motor4.run(FORWARD);
      Serial.println("RIGHT\n");
      incomingByte = '*';
      break;

    case 'L':
      // Motors turn left.
      motor1.run(RELEASE);
      motor2.run(FORWARD);
      motor3.run(FORWARD);
      motor4.run(FORWARD);
      Serial.println("LEFT\n");
      incomingByte = '*';
      break;
  }
}
