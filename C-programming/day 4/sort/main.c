#include <assert.h>
#include <stdio.h>
#include "sort.h"

#define SIZE 5
int main()
{
    int arr[SIZE] = {7,2,5,8,2};
    //int result;
    //result = store_elements_array(arr, SIZE);
    //assert(result == 1);

    assert(asc_sort(SIZE, arr)==0);
    assert(desc_sort(SIZE, arr)==0);

    assert(my_swap(2,3)==0);
    assert(my_swap(8,6  )==0);

    assert(get_min_array(arr, SIZE) == 2);
    assert(get_max_array(arr, SIZE) == 8);
}
