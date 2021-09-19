#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "operator1.h"
int main()
{
    char s[1000];
    int i;

    printf("Enter  the string: ");
    gets(s);

    stringlowercase(s);

    printf("string in lowercase = %s \n",s);
}
