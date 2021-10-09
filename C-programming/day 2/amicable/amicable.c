#include <stdio.h>
#include "amicable.h"

int amicable(int number, int check)
{
    int number_sum = 0;
    int check_sum = 0;

    for(int i=1;i<number;i++){
        if(number % i == 0){
           number_sum = number_sum + i;
        }
    }

    for(int i=1;i<check;i++){
        if(check % i == 0){
            check_sum = check_sum + i;
        }
    }

   /* if((number == check_sum) && (check == number_sum)){
        printf("%d and %d are Amicable numbers\n",number,check);
    }else{
        printf("%d and %d are not Amicable numbers\n",number,check);
    }
    */
    if((number == check_sum) && (check == number_sum))
        return 0;
    else
        return 1;


}
