#include <Arduino.h>

// Led in NodeMCU at pin GPIO16 (D0).
#define LED_BUILTIN D0

void setup()
{
  Serial.begin(14400);

  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  Serial.println("Node MCU blink!");
  // turn the LED on (the built-in led on a Node MCU board is active low)
  digitalWrite(LED_BUILTIN, LOW);
  // wait for a second
  delay(1000);
  // turn the LED off (the built-in led on a Node MCU board is active low)
  digitalWrite(LED_BUILTIN, HIGH);

  // wait for a second
  delay(1000);
}