#include <algorithm>
#include "AnySort.h"


void CustomTest::QuickSort(int arr[], int first, int last)
{
    int middle = arr[(first + last) / 2];
    int i = first;
    int j = last;
    do
    {
        while (arr[i] < middle)
        {
            i++;
        }
        while (arr[j] > middle)
        {
            j--;
        }
        if (i <= j)
        {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (j > first)
    {
        QuickSort(arr, first, j);
    }
    if (i < last)
    {
        QuickSort(arr, i, last);
    }
}