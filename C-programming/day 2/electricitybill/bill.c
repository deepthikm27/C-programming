#include <stdio.h>
#include "bill.h"

int electricity_bill(float unit, float charge){

    if(unit <= 200)
        charge = unit * 1;

    else if(unit <= 300)
        charge = (unit - 200) * 1.5;

    else if(unit > 300)
        charge = unit + 100 * 2;


    return 0;
}
