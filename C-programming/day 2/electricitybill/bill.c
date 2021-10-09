#include <stdio.h>
#include "bill.h"

int electricity_bill(float c){

    if(c <= 200 && c >= 0){
        return c;
    }
    else if(c < 0){
        return 0;
    }
    else if(c > 200 && c <= 300){
        return 200 + (c - 200) * 1.5;
    }
    else {
        return 200+(100*1.5)+(c-300)*2;
    }
}
