#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
// 20ml minimo, 1 segundo, maximo
const byte pulsador = 2;
const byte pulsador2 = 3;
const byte leds[] = {5, 6, 7, 8, 9, 10};
long tiempo = 0;
void setup()
{
    
    for(byte led: leds){
        pinMode(led,OUTPUT);
    }

    pinMode(pulsador, INPUT);
    pinMode(pulsador2, INPUT);

    attachInterrupt(digitalPinToInterrupt(pulsador), aumento, RISING);
    attachInterrupt(digitalPinToInterrupt(pulsador2), disminucion, FALLING);

}

void loop()
{
    delay(2000);
}

void aumento()
{
    if (millis() > (tiempo + 20))
    {
        estado = !estado;
        digitalWrite(led, estado);
        Serial.println("Cabmio de estado: " + String(estado));
    }
    tiempo = millis();
}
void disminucion(){

}
