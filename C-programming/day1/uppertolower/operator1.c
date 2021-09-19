#include <stdio.h>
#include "operator1.h"

void stringlowercase(char *s)
{
	int i;

    	for(i=0;s[i];i++)
        {
          if(s[i]>=65 && s[i]<=90)
          s[i]+=32;
 	    }

}


