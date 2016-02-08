#include "Arduino.h"
#include "NumberDisplay.h"

NumberDisplay::NumberDisplay(const int pins[]){
  //Setup all the pins as outputs
  _pins = pins;
  int i;
  for(i=0;i<8;i++){
    pinMode(pins[i], OUTPUT);
  }    
}

void NumberDisplay::output(int num) {
  //Map Numbers to Bytes (using hexadecimal to keep it short)
  //Note that 0x7E is in binary: 01111110
  const byte numBytes[] = {0x7E, 0x30, 0x6D, 0x79, 0x33, 0x5B, 0x5F, 0x70, 0x7F, 0x7B, 0x80};
  
  byte code = numBytes[num];
  byte mask;
  int index = 0;
  for(mask = 1; mask > 0; mask <<=1){
    if(code & mask){
      digitalWrite(_pins[index],HIGH);
    }else{
      digitalWrite(_pins[index],LOW);
    }
    index++;
  }
}