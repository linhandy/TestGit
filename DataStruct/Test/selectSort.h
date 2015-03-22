#include "swap.h"
void selectSort(int A[], int n)
{
    int minIndex = 0;
    for (int i = 0; i< n; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[minIndex])
            {
                minIndex = j;
            }
        }
        swap(A, i, minIndex);
    }
}