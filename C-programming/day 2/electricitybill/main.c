#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "bill.h"
int main()
{
    assert(electricity_bill(80) == 80);
    assert(electricity_bill(250)==275);
    assert(electricity_bill(301)==352);
    assert(electricity_bill(-1)==0);


}
