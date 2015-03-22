#include "swap.h"
void insertSort(int A[], int n)
{
    for (int i = 1; i < n; i++)
        for(int j = i; j > 0 ;j--)
        {
            if (A[j] < A[j-1])
            {
                swap(A, j, j-1);
            }
         }
}