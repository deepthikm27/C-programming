#include <stdio.h>
#include <stdlib.h>

#include "operator4.h"
int main()
{
    float celsius = 0,fahrenheit = 0;
    printf("enter the degree C: ");
    scanf("%f", &celsius);
    float equal = celsiusToFahrenheit(celsius);
    printf("\n It is %f F in fahrenheit",equal);

    printf("\n enter the degree F: ");
    scanf("%f", &fahrenheit);
    equal = fahrenheitTocelsius(fahrenheit);
    printf("\n It is %f C in Celsius",equal);
}
