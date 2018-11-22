#ifndef BUTTON_PRESS_H
#define BUTTON_PRESS_H

class ButtonPress
{
    public:
	ButtonPress(int pin);
	void begin( void );
	bool pressed( void );
    private:
        int _pin;
	int _lastState;
};	

#endif // BUTTON_PRESS_H
