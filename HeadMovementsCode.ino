// Define the servo pin
const int servoPin = 9;

// Define the servo library
#include <Servo.h>

// Create a servo object
Servo myServo;

void setup() {
  // Attach the servo to the servo pin
  myServo.attach(servoPin);
}

void loop() {
  // Rotate from 0 to 60 degrees
  for (int angle = 0; angle <= 25; angle++) {
    myServo.write(angle);
    delay(30); // wait for the servo to reach the position
  }
  delay(2000); // wait for 60 seconds

  // Rotate from 60 to 120 degrees
  for (int angle = 25; angle <= 90; angle++) {
    myServo.write(angle);
    delay(30); // wait for the servo to reach the position
  }
  delay(500); // wait for 500 milliseconds

  // Rotate anticlockwise from 120 to 0 degrees
  for (int angle = 90; angle >= 25; angle--) {
    myServo.write(angle);
    delay(30); // wait for the servo to reach the position
  }
  delay(2000);
   for (int angle = 25; angle >= 0; angle--) {
    myServo.write(angle);
    delay(30); // wait for the servo to reach the position
  }
  delay(500);
}