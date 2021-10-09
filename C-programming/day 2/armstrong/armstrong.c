#include <stdio.h>
#include "armstrong.h"

int Armstrong(int number) {
  int sum = 0, remainder;
  while (number != 0) {
    remainder = number % 10;    //split each digit
    sum = sum + (remainder * remainder * remainder);    //sum of cube
    number = number / 10;
  }
  return sum;
}



