#include <stdio.h>
#include "operator4.h"
float  celsiusToFahrenheit (float celsius){

    return (celsius * 1.8f) + 32;   //F = (C * 1.8) + 32
}
float fahrenheitTocelsius (float fahrenheit){

    return (fahrenheit - 32) / 1.8f;    //C = (F - 32) / 1.8

}
