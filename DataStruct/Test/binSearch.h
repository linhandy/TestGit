bool binSearch(int A[], int low, int high, int value)
{
	while(low <= high)
	{
		int mid = (low + high) / 2;
		if (value == A[mid])
		{
			return true;
		}
		else if (value < A[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1 ;
		}
	}
	return false;
}
bool binSearch2(int A[], int low,  int high , int value)
{
	int mid = (low + high ) / 2;
	if (low > high)
	{
		return false;
	}
	else
	{
		if (value == A[mid])
		{
			return true;
		}
		else if(value < A[mid])
		{
			return  binSearch2(A, low, mid - 1, value); // 这里要加return 是因为找到之后要返回而不是还要往后走直接到return false 了
		}
		else 
		{
			return binSearch2(A, mid + 1, high, value);  // 这里要加return 是因为找到之后要返回而不是还要往后走直接到return false 了
		}
	}
}