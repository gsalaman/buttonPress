#include "arduino.h"
#include "buttonPress.h"

ButtonPress::ButtonPress(int pin)
{
    _pin = pin;
}

void ButtonPress::begin( void )
{
    pinMode(_pin, INPUT_PULLUP);
    _lastState = HIGH;
}

bool ButtonPress::pressed( void )
{
    int  currentState;
    bool pressed;

    currentState = digitalRead(_pin);
    
    if ((currentState == LOW) && (_lastState == HIGH))
    {
	pressed = true;
    }
    else
    {
	pressed = false;
    }

    _lastState = currentState;
    return(pressed);
}

