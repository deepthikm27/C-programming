#include <stdio.h>
#include <stdlib.h>

#include "armstrong.h"
int main()
{
    int number, sum = 0;
    printf("\nEnter a number:");
    scanf("%d", &number);
    sum = Armstrong(number);
    // Condition is evaluated for a number to be an armstrong number.
    if (number == sum) {
    printf("\n%d is an Armstrong Number", number);
    }
    else {
    printf("\n%d is not an Armstrong Number", number);
    }
    return (0);
}

