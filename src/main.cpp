#include <Arduino.h>

const int LEDS[3] = {7, 6, 5};

const int PULS_4 = 11;
const int PULS_3 = 10;
const int PULS_2 = 9;
const int PULS_1 = 8;

void setup()
{
  Serial.begin(9600);
  for (int i = 0; i < 3; i++)
  {
    pinMode(LEDS[i], OUTPUT);
  }

  pinMode(PULS_1, INPUT);
  pinMode(PULS_2, INPUT);
  pinMode(PULS_3, INPUT_PULLUP);
  pinMode(PULS_4, INPUT_PULLUP);
}

void loop()
{
  for (int i = 0; digitalRead(PULS_1) && i < 3; i++)
  {
    digitalWrite(LEDS[i], HIGH);
  }

  for (int i = 0; digitalRead(PULS_2) && i < 3; i++)
  {
    digitalWrite(LEDS[i], LOW);
  }

  if (!digitalRead(PULS_3))
  {
    for (int i = 3; i >= 0; i--)
    {
      digitalWrite(LEDS[i], HIGH);
      delay(250);
    }
    for (int i = 0; i < 3; i++)
    {
      digitalWrite(LEDS[i], LOW);
      delay(250);
    }
  }

  if (!digitalRead(PULS_4))
  {
    digitalWrite(LEDS[2], HIGH);
    delay(2000);
    digitalWrite(LEDS[2], LOW);
    digitalWrite(LEDS[1], HIGH);
    delay(1000);
    digitalWrite(LEDS[1], LOW);
    digitalWrite(LEDS[0], HIGH);
    delay(2000);
    digitalWrite(LEDS[0], LOW);
  }
}