
#include <stdio.h>
#include "operator3.h"
#include <math.h>
float simple_interest(float p, float r, float t){

    float si;
    si = (p * r * t) / 100; //formula
    return si;
}

float compound_interest(float p, float r, float t, int n){

    float ci,a;
    a = p *(pow((1 + r / n),(n * t)));
    ci = a - p;
    return ci;
}
