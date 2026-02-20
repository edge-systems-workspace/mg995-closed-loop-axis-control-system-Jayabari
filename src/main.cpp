#include <Arduino.h>
#include <Servo.h>

Servo myServo;

const int servoPin = 9;
void setup() {
    myServo.attach(servoPin);
    Serial.begin(9600);
}

void loop() {
    Serial.println("Moving to 0°");
    myServo.write(0);
    delay(400);

    Serial.println("Moving to 45°");
    myServo.write(45);
    delay(400);

    Serial.println("Moving to 90°");
    myServo.write(90);
    delay(400);
}