#include<stdio.h>
void quick_sort(int arr[], int L, int H)
{
	int pivot = arr[L];
	int low = L + 1;
	int high = H;
	int temp;
	while (low <= high)
	{
		while (pivot > arr[low])
		{
			low++;
		}
		while (pivot < arr[high])
		{
			high--;
		}
		if (low < high)
		{
			temp = arr[low];
			arr[low] = arr[high];
			arr[high] = temp;
			low++;
			high--;
		}

	}
	temp = arr[L];
	arr[L] = arr[high];
	arr[high] = temp;
	if (L < high)
	{
		quick_sort(arr, L, high - 1);
	}
	if (low < H)
	{
		quick_sort(arr, low, H);
	}
}


void main()
{
	int arr[100];
	int n, i;
	printf("Enter a how maney element in array\n");
	scanf_s("%d", &n);
	printf("Please enter a array element\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("its a array\n");
	printf("[");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("]");

	quick_sort(arr, 0, n - 1);
	printf("\nQuick sorted sorting array\n");
	printf("[");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("]");
}