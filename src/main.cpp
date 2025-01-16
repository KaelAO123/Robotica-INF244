#include <Arduino.h>
byte Ain1=7, Ain2=8, Bin1=4, Bin2=5;
byte PWMA=9, PWMB=6;
void setup(){
    pinMode(Ain1, OUTPUT);
    pinMode(Ain2, OUTPUT);
    pinMode(Bin1, OUTPUT);
    pinMode(Bin2, OUTPUT);
  	pinMode(PWMA, OUTPUT);
    pinMode(PWMA, OUTPUT);
}

void loop(){
  digitalWrite(Ain1, 0);
    digitalWrite(Ain2, 1);
    digitalWrite(Bin1, 0);
    digitalWrite(Bin2, 1);
    analogWrite(PWMA, 255);
    analogWrite(PWMB, 255);
    delay(2000);
    digitalWrite(Ain1, 1);
    digitalWrite(Ain2, 0);
    digitalWrite(Bin1, 1);
    digitalWrite(Bin2, 0);
    analogWrite(PWMA, 255);
    analogWrite(PWMB, 255);
    delay(2000);
    
    digitalWrite(Ain1, 0);
    digitalWrite(Ain2, 1);
    digitalWrite(Bin1, 1);
    digitalWrite(Bin2, 0);
    analogWrite(PWMA, 0);
    analogWrite(PWMB, 255);
    delay(2000);
    digitalWrite(Ain1, 1);
    digitalWrite(Ain2, 0);
    digitalWrite(Bin1, 0);
    digitalWrite(Bin2, 1);
    analogWrite(PWMA, 255);
    analogWrite(PWMB, 0);
    delay(2000);

    digitalWrite(Ain1, 0);
    digitalWrite(Ain2, 0);
    digitalWrite(Bin1, 0);
    digitalWrite(Bin2, 0);
    analogWrite(PWMA, 0);
    analogWrite(PWMB, 0);
    delay(2000);
    
}