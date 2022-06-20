#include <Arduino.h>

#include "NewPing.h"

// Hook up HC-SR04 with Trig to Arduino Pin 9, Echo to Arduino pin 10
#define TRIGGER_PIN D6
#define ECHO_PIN D5
#define LED_BUILTIN D0

// Maximum distance we want to ping for (in centimeters).
#define MAX_DISTANCE 400

// NewPing setup of pins and maximum distance.
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

int distance;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  Serial.print("Distance = ");
  Serial.print(sonar.ping_cm());
  Serial.println(" cm");
  delay(500);
  distance = (sonar.ping_cm());
  if (distance >= 10)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
}