#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <stdbool.h>
#include "helperFunctions.h"

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}

#endif // BUBBLESORT_H