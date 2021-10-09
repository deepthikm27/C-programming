#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "set.h"

#define SIZE1 5
#define SIZE2 3
int main()
{
    int arr1[SIZE1] = {7,2,5,8,2};
    int arr2[SIZE2] = {1,2,3};

    assert(set_union(arr1,arr2,SIZE1,SIZE2)==0);
    assert(set_intersection(arr1,arr2,SIZE1,SIZE2)==0);

    assert(set_difference(arr1,arr2,SIZE1,SIZE2)==0);
}
