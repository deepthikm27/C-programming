#include <stdio.h>
#include "sort.h"

int asc_sort(int n, int arr[]){

    int i, j, temp;
    for(i=0;i<n;i++)  // loop for sorting array in ascending order
    {
        for(j=i+1;j<n;j++)
        { if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return 0;
}

int desc_sort(int n, int arr[]){

    int p,q,temp1;
    for(p=0;p<n;p++) // loop for sorting array in descending order
    {
        for(q=p+1;q<n;q++)
        {
            if(arr[p]<arr[q])
            {
                temp1=arr[p];
                arr[p]=arr[q];
                arr[q]=temp1;
            }
        }
    }
    return 0;
}

int my_swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;

    return 0;
}

int get_min_array(int arr[], int size)
{
    int i, min;

    if(size < 0)
        return -1;

    min = arr[0]; // 4,2,6,1,7

    for(i=1 ; i< size; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}

int get_max_array(int arr[], int size)
{
    int i, max;

    max = arr[0];

    for(i=0; i<size; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    return max;
}


