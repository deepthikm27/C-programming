#include <stdio.h>
#include "sumofseries.h"

int sum_of_series(int n){

    int i;
    long sum = 0, t = 1;
    for(i = 0;i <= n;i++)
    {
       printf("%ld  ",t);
       if (i < n)
      {
          printf("+ ");
      }
       sum = sum + t;
       t = (t * 10) + 1;
    }
    printf("\nThe Sum is : %ld\n",sum);
    return 0;
}

