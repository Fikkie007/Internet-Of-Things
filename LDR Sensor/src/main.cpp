#include <Arduino.h>

#define LED_BUILTIN D0

void setup()

{

  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()

{

  unsigned int AnalogValue;

  AnalogValue = analogRead(A0);

  Serial.println(AnalogValue);
  if (AnalogValue <= 1000)
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
}