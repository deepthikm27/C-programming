#include <stdio.h>
#include <stdlib.h>
#include "amicable.h"
#include <assert.h>
int main()
{
    assert(amicable(220,284) == 0);
    assert(amicable(1184,1210) == 0);
    assert(amicable(350,764) == 1);
    assert(amicable(5022,5564) == 1);
    assert(amicable(10744, 10856) == 0);
}
