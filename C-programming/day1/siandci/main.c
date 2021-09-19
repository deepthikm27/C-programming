#include <stdio.h>
#include <stdlib.h>

#include "operator3.h"
int main()
{
    float a,b,c;
    int n;
    float simple_int, compound_int;

    printf("\n Enter Principle: ");
    scanf("%f",&a);
    printf("\n Enter Rate: ");
    scanf("%f",&c);
    printf("\n Enter year: ");
    scanf("%f",&b);    // taking all 3 values p,r and t
    printf("\n Enter the number of times in a year the interest gets compounded: ");
    scanf("%d",&n);

    simple_int = simple_interest(a,b,c);
    printf("\nSimple Interest = %.2f \n", simple_int);

    compound_int = compound_interest(a,b,c,n);
    printf("Compound interest = %.2f ",compound_int);

    return 0;


}
