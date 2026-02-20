#include <Arduino.h>
#include <Servo.h>

Servo myServo;

const int servoPin = 9;
void setup() {
    myServo.attach(servoPin);
    Serial.begin(9600);
}

void loop() {
    myServo.write(0);
    delay(600);

    myServo.write(45);
    delay(600);

    myServo.write(90);
    delay(600);

    myServo.write(135);
    delay(600);

    myServo.write(180);
    delay(600);
}