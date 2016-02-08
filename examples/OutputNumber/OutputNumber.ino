/*
  NumberDisplay.h - Library for displaying a number on a seven segment display.
  Created by Teddy Ort
*/

#include <NumberDisplay.h>

/* Create an array that maps arduino pins to the led's they are physically attached to.
*  The array is arranged as follows:
*  [middle, topleft, bottomleft, bottom, bottomright, topright, top, decimal]
*  For example, in the following code the first element of pinMap is a '3' this tells
*  The NumberDisplay class that you arduino pin 3 is plugged into the first led of the 
*  seven segment display in the map above (the middle one). 
*/
const int pinMap[] = {3, 2, 4, 5, A2, A4, A1, A3};
NumberDisplay myDisplay(pinMap);

void setup(){
  //Output the number 0
  myDisplay.output(0);
}

void loop(){
  
}
