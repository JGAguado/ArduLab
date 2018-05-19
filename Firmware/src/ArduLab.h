/******************************************************************************

ArduLab.h
Library for managing ArduLab board.
Created by J.G.Aguado
May 18, 2018  
https://github.com/SpaceDIY/ArduLab

This code is released under the [MIT License](http://opensource.org/licenses/MIT).
Please review the LICENSE.md file included with this example. If you have any questions 
or concerns with licensing, please contact techsupport@sparkfun.com.
Distributed as-is; no warranty is given.

******************************************************************************/

#ifndef ArduLab_h
#define ArduLab_h
 
#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class ArduLab{
    public:
        ArduLab(char Mod, char Comms);
        void RGB(int r, int g, int b);
        void Beep();
        bool PushButton();
        float Battery();
        float Light();
        void MotorA(int dir);
        void MotorB(int dir);
    private:
    	int _mod = 0;
    	int _comms = 0;
    	
    	int _buzzer = 4;
    	int _red = 13;
    	int _green = 5;
    	int _blue = 6;
    	int _pushbutton = 16;
    	int _battery = A0;
    	int _ldr = A5;

    	int _motor_b_1 = 9;
    	int _motor_b_2 = 10;
    	int _motor_a_1 = 11;
    	int _motor_a_2 = 12;
};
#endif