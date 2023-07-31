#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "helperFunctions.h"

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < size; j++)
        {

            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (array[j] < array[minimum])
                minimum = j;
        }

        // put min at the correct position
        swap(&array[minimum], &array[i]);
    }
}

#endif // SELECTIONSORT_H