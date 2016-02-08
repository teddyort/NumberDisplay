/*
  NumberDisplay.h - Library for displaying a number on a seven segment display.
  Created by Teddy Ort
*/
#ifndef NumberDisplay_h
#define NumberDisplay_h

#include "Arduino.h"

class NumberDisplay
{
  public:
    NumberDisplay(const int pins[8]);
    void output(int num);
  private:
    const int* _pins;
};

#endif