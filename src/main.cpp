#include <Arduino.h>
#include <Servo.h>
Servo myServo;

#define servoPin 6

void setup() {
    myServo.attach(servoPin);
    Serial.begin(9600);
}

void loop() {
    for (int i=0;i<=180;i++)
    {
        myServo.write(i);
        delay(15);
    }
    for (int i=180;i>=0;i--)
    {
        myServo.write(i);
        delay(15);
    }
}