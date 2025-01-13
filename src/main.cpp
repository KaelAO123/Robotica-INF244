#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
byte red = 8, green = 9, blue = 10;

byte PULS1 = 7;
byte PULS2 = 6;
int num;

byte POTEN = A1;
int val = 0;
void setup()
{
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
}

void loop()
{
    int cont = 0;
    int valorPuls1 = digitalRead(PULS1);
    int valorPuls2 = digitalRead(PULS2);

    if (valorPuls1)
    {
        num = random(0, 6);
        for (size_t i = 0; i < num; i++)
        {
            digitalWrite(red, 1);
            digitalWrite(green, 0);
            digitalWrite(blue, 0);

            delay(500);
            
            digitalWrite(red, 0);
            digitalWrite(green, 0);
            digitalWrite(blue, 0);

            delay(500);

            digitalWrite(red, 0);
            digitalWrite(green, 1);
            digitalWrite(blue, 0);

            delay(500);

            digitalWrite(red, 0);
            digitalWrite(green, 0);
            digitalWrite(blue, 0);

            delay(500);

            digitalWrite(red, 0);
            digitalWrite(green, 1);
            digitalWrite(blue, 1);

            delay(500);

            digitalWrite(red, 0);
            digitalWrite(green, 0);
            digitalWrite(blue, 0);

            delay(500);

        }
    }
    else if (valorPuls2)
    {
        num = random(0, 6);
        for (size_t i = 0; i < num; i++)
        {
            digitalWrite(red, 1);
            digitalWrite(green, 1);
            digitalWrite(blue, 0);

            delay(500);
            
            digitalWrite(red, 0);
            digitalWrite(green, 0);
            digitalWrite(blue, 0);

            delay(500);

            digitalWrite(red, 1);
            digitalWrite(green, 0);
            digitalWrite(blue, 1);

            delay(500);

            digitalWrite(red, 0);
            digitalWrite(green, 0);
            digitalWrite(blue, 0);

            delay(500);

            digitalWrite(red, 0);
            digitalWrite(green, 1);
            digitalWrite(blue, 1);

            delay(500);

            digitalWrite(red, 0);
            digitalWrite(green, 0);
            digitalWrite(blue, 0);

            delay(500);

        }
    }
}