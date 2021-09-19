#include <stdio.h>
#include <stdlib.h>

#include "operator2.h"
int main()
{
    float radius;

    printf("enter the radius of circle: ");
    scanf("%f",&radius);

    printf("The area of circle: %.2f", areaOfcircle(radius));

    return 0;
}
