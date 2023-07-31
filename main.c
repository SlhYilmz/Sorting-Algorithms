#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"
#include "quickSort.h"

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

    int arr2[] = {31, 42, 17, 1, 84, 55, 23};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("\n");
    printf("-----------QUICK SORT-----------\n");
    printf("Unsorted array: \n");
    printArray(arr2, size2);

    quickSort(arr2, 0, size2-1);
    printf("Sorted array: \n");
    printArray(arr2, size2);

    return 0;
}