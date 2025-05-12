#include <Servo.h>  // Include the Servo library

Servo myServo;  // Create a Servo object

void setup() {
  myServo.attach(9);  // Attach the servo to pin 9
}

void loop() {
  // Sweep from 0° to 180°
  for (int pos = 0; pos <= 180; pos++) {
    myServo.write(pos);  // Move the servo to the current position
    delay(15);  // Wait 15ms for the servo to reach the position
  }

  // Sweep from 180° to 0°
  for (int pos = 180; pos >= 0; pos--) {
    myServo.write(pos);  // Move the servo to the current position
    delay(15);  // Wait 15ms for the servo to reach the position
  }
}
