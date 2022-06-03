// C program for implementation of selection sort
#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void  is_reverse_sorted(int arr[], int n)
{
	int i, j, min_idx;


	for (i = 0; i < n-1; i++)
	{

		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] > arr[min_idx])
			min_idx = j;


		swap(&arr[min_idx], &arr[i]);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
	int arr[] = {3, 4, 2, 5, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	 is_reverse_sorted(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
