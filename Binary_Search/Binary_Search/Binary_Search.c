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

int binary_search(int arr[], int low, int high, int search)
{

	if (low <= high)
	{
		int mid;
		mid = (low + high) / 2;

		if (arr[mid] == search)
		{
			return mid;
		}
		else if (search < arr[mid])
		{
			return binary_search(arr, low, mid - 1, search);
		}
		else if (search > arr[mid])
		{
			return binary_search(arr, mid + 1, high, search);
		}
	}

	return -1;
}


int main()
{
	int search;
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

	printf("\nEnter the number you want to serach : ");
	scanf_s("%d", &search);

	int index = binary_search(arr, 0, n - 1, search);

	if (index == -1)
	{
		printf("Element not found\n");
	}
	else
	{
		printf("Element found at %d index", index);
	}
	return 0;
}