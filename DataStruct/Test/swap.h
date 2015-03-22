#ifndef _SWAP_H_
#define _SWAP_H_
void swap(int A[], int i, int j)
{
    int tmp  = A[i];
    A[i] = A[j];
    A[j] = tmp;
}
#endif