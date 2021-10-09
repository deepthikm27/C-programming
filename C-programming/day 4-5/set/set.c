#include <stdio.h>
#include "set.h"

void display(int arr[30],int no)
{
    int i;
    printf("{");
    for(i=0;i<no;i++)
    {
     printf(" %d ",arr[i]); //display set elements
    }
    printf("}");
}

int set_union(int arr1[],int arr2[],int no1,int no2)
{
    int i=0,j=0,k=0,arr3[50],flag=0,temp;
    for(i=0;i<no1;i++)
    {
     arr3[k++]=arr1[i];
    }
    for(i=0;i<no2;i++)
    {
     flag=0;
     for(j=0;j<no1;j++)
      {
              if(arr2[i]==arr1[j])
               {
                flag=1;
               }
      }
      if(flag==0)
       {
               arr3[k++]=arr2[i];
       }
     }

/* using bubble sort technique */
    for(i=1;i<k;i++)
   {
    for(j=0;j<k-i;j++)
     {
      if(arr3[j]>arr3[j+1]) //condition to find out smallest number
       {
                temp=arr3[j];       // we
                arr3[j]=arr3[j+1];  // swapping
                arr3[j+1]=temp;     // elements
       }
     }
   }
    printf("\n\nThe Result of Union is ==>");
    display(arr3,k); //function call

    return 0;
}

int set_intersection(int arr1[],int arr2[],int no1,int no2)
{
    int i=0,j=0,k=0,arr3[50];
    for(i=0;i<no1;i++)  //traverse 1st set element
    {
      for(j=0;j<no2;j++) //traverse 2nd set element
      {
        if(arr1[i]==arr2[j]) //check arr1 is equal to arr2
        {
            arr3[k]=arr1[i]; //assign arr1 to arr3
            k++;
        }
      }
    }

    printf("\n\nThe Result of Intersection is==>");
    display(arr3,k);

     return 0;
}

int set_difference(int arr1[],int arr2[],int no1,int no2)
 {
  int i=0,j=0,k=0,arr3[50],flag=0;
  for(i=0;i<no1;i++)  //traverse 1st set element
      {
       for(j=0;j<no2;j++) //traverse 1st set element
              {
               if(arr1[i]==arr2[j])
                  {
                   flag=0;
                   break;
                  }
               else
                  {
                   flag=1;
                  }
              }
             if(flag==1)
               {
                arr3[k]=arr1[i];  //assign arr1 to arr3
                k++;
               }
            }
     printf("\n\nThe Result of difference is==>");
     display(arr3,k);

     return 0;
}
