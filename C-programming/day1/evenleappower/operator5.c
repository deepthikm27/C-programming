#include "operator5.h"
#include <stdio.h>

int is_even_or_odd(int number){

        if(number % 2 == 0)
            return 1;
        else
            return 2;
}
int is_leapyear_or_not(int year){
     if((year%400==0)||((year%4==0)&&(year%100!=0)))
        return 1;
     else
        return 0;
}

void twopower(int power){

     printf("the 2 power of %d = %ld",power,(long) 1 << power);
}

