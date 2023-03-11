/*
#include<stdio.h>

void bubble_sort(int arr[], int n)
{
	int i, j, temp;

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void main()
{
	int arr[100], n;

	printf("Enter how many numbers you want to Enter :");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d[i]", &arr[i]);
	}

	printf("Unsorted Array \n");
	printf("[");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("]");
	printf("\n");

	bubble_sort(arr, n);

	printf("sorted Array \n");
	printf("[");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("]");
	printf("\n");


}*/