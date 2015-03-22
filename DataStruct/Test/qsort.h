#include "swap.h"

int getPivot(int low, int high)
{
	return (low + high)/2;
}
int partion(int A[], int low, int high, int pivot)
{
	while(low < high)
	{
		while(A[low] < pivot) low++;
		while(A[high] > pivot) high--;
		swap(A, low, high);
	}
	// reverse last
	swap(A, low, high);

	return low;
}
void qsort(int A[], int low, int high)
{
	if (low >= high)
	{
		return;
	}
	// find the pivot
	int pivotIndex = getPivot(low, high);
	
	//put pivot at the end
	swap(A, pivotIndex, high);

	// k is first in right array
	int k = partion(A, low, high, A[high]);

	// put privot in place
	swap(A, k, high);

	qsort(A, low, k-1);
	qsort(A, k, high);
}