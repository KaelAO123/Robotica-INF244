#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>   // Incluimos la libreria SoftwareSerial
SoftwareSerial Bluetooth(10,11);    // Definimos los pines RX=11 y TX=10 del Arduino conectados al Bluetooth
void setup()
{
  Bluetooth.begin(38400);       // Fijamos la velocidad de comunicacion del arduino con el Bluetooth 
  Serial.begin(9600);   // Fijamos la velocidad de comunicacion de el arduido con la PC

  Serial.println("Innovadores");
}
 
void loop()
{ 
  if(Bluetooth.available())    // Si llega un dato por el puerto Bluetooth se imprime en el monitor serial
  {
    Serial.write(Bluetooth.read());
  }
  if(Serial.available())  // Si se escribe y envia un dato por el monitor serial, se le manda al Bluetooth 
  {
     Bluetooth.write(Serial.read());
  }
}