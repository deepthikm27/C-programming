#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include<math.h>

#include "operator.h"

#define concatt(a,b) (a##b)

#define square(a) (a*a)

int main()
{

    assert(b_to_dec(1010)==10);
    assert(d_to_binary(10)==1010);

    assert(sequence(0)==0);
    assert(sequence(1)==1);
    assert(sequence(2)==2);
    assert(sequence(3)==3);
    assert(sequence(6)==4);
    assert(sequence(-3)==-1);

    pattern(5);

    sum_multiple_of_seven();

    assert(base_n_power(0,1)==0);
    assert(base_n_power(-2,7)==-128);
    //printf("\n\n%d\n",base_n_power(-2,3));


    assert(fact(0)==1);
    assert(fact(-2)==0);
    assert(fact(5)==120);
    //printf("\n%d\n",fact(5));


    printf("\n\n%f\n\n ",sumofseries(1,3));


    printf("\n%d\n",concatt(8,9));


    printf("\n\n%d\n\n",square(4));


    menudriven();

    return 0;
}
