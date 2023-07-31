#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <stdbool.h>
#include "helperFunctions.h"

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

#endif // BUBBLESORT_H