
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
int menu(int ch)
{
int a,b,c;
     printf("=======================");
     printf("\n\tMENU");
     printf("\n=======================");
     printf("\n 1] Addition");
     printf("\n 2] Subtraction");
     printf("\n 3] Multiplication");
     printf("\n 0] Exit");
     printf("\n=======================\n");

     if(ch<=6 && ch>0)
     {
          printf("  Enter Two Numbers\n");
          printf("-----------------------\n");
          printf("Enter First Number  : ");
          scanf("%d", &a);
          printf("\nEnter Second Number : ");
          scanf("%d",&b);
          printf("-----------------------\n");
     }
     switch(ch)
     {
          case 1:
               c=a+b;
               printf("Addition of Numbers =  %d",c);
               break;
          case 2:
               c=a-b;
               printf("Subtraction of Numbers = %d", c);
               break;
          case 3:
               c=a*b;
               printf("Multiplication of Numbers = %d",c);
               break;
          case 0:
               printf("Terminated by Choice");
               exit(0); // For this function include header file stdlib.h
               break;
          default:
               printf("Invalid Choice");
     }
     return 0;
}
