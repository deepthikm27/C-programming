#include <stdio.h>
#include "duplicate.h"

#define SIZE 8
#define MAX_SIZE 5
int remove_duplicate_elements(int arr[], int n)
{
    int i, j, k, Size;
    for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < Size; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				Size--;
				j--;
			}
		}
	}

 	printf("\n Final Array after deleting Duplicate Array Elements is:\n");
 	for (i = 0; i < Size; i++)
  	{
 		printf("%d\t", arr[i]);
  	}
 	return 0;

}

int linear_search_array(int arr[], int size, int element)
{
    int i; // int arr[] = 4, 2, 6, 1, 7

    for(i = 0; i< size; i++)
    {
        if(arr[i] == element)
            return 1;
    }
    return 0;
}
