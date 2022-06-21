#include "Arduino.h"
#include "Led.h"

using namespace std;

void Led::Setup(const int LedPin){
    _LedPin = LedPin;
    pinMode(LedPin, OUTPUT);
}

void Led::turnON(){
    digitalWrite(_LedPin, HIGH);
}

void Led::turnOFF(){
    digitalWrite(_LedPin, LOW);
}