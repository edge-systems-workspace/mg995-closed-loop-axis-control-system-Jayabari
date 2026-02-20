#include <Arduino.h>
#include <Servo.h>

Servo myServo;

void setup() {
    myServo.attach(9);
    Serial.begin(9600);
}

void loop() {
    myServo.write(0);
    delay(400);

    myServo.write(45);
    delay(400);

    myServo.write(90);
    delay(400);

    myServo.write(135);
    delay(400);

    myServo.write(180);
    delay(400);
}