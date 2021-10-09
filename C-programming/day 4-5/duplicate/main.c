#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "duplicate.h"
#define SIZE 8
int main()
{
    int arr[SIZE] = {7,2,5,8,2,2,7,8};
    //int arr1[SIZE] ={4,9,6,3,8,1};
    remove_duplicate_elements(arr,SIZE);

    assert(linear_search_array(arr, SIZE, 1) == 0);
    assert(linear_search_array(arr, SIZE, 2) == 1);
    assert(linear_search_array(arr, SIZE, 9) == 0);
    assert(linear_search_array(arr, SIZE, 7) == 1);
    assert(linear_search_array(arr, SIZE, 6) == 0);

}
