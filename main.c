#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"

int main()
{
    int arr1[] = {64, 34, 25, 12, 22, 90, 11};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("\n");
    printf("-----------BUBBLE SORT-----------\n");
    printf("Unsorted array: \n");
    printArray(arr1, size1);

    bubbleSort(arr1, size1);
    printf("Sorted array: \n");
    printArray(arr1, size1);

    return 0;
}