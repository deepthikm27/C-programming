#include <stdio.h>
#include <stdlib.h>

#include <assert.h>
#include "operator5.h"
int main()
{
    assert(is_even_or_odd(1) == ODD);
    assert(is_even_or_odd(22) == EVEN);
    assert(is_even_or_odd(315) == ODD);
    assert(is_even_or_odd(100) == EVEN);
    assert(is_even_or_odd(1024) == EVEN);
    assert(is_even_or_odd(666) == EVEN);
    assert(is_even_or_odd(2121) == ODD);
    assert(is_even_or_odd(99999) == ODD);

    assert(is_leapyear_or_not(1999) == 0);
    assert(is_leapyear_or_not(2020) == 1);
    assert(is_leapyear_or_not(1000) == 0);
    assert(is_leapyear_or_not(1052) == 1);
    assert(is_leapyear_or_not(2036) == 1);


    twopower(30);
}

