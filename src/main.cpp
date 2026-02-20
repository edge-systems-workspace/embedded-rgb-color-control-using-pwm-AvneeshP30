#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Avneesh Pandey
 * @date 20-02-2026
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

int redPin = 9;
int greenPin = 10;
int bluePin = 11;


void setup() {
    pinMode(red,OUTPUT);
    pinMode(green,OUTPUT);
    pinMode(blue,OUTPUT);

}

void loop() {

    // DIGITAL MODE
    digitalWrite(redPin, HIGH);
    delay(500);
    digitalWrite(redPin, LOW);

    //  ANALOG (PWM) MODE
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
    delay(500);

    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
    delay(500);

    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
    delay(500);
}