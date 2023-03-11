/*
#include<stdio.h>

void selection_sort(int arr[], int n)
{
	int i, j,temp;

	for ( i = 0; i < n; i++)
	{
		for ( j = 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[i] = temp;
			}
		}
	}
}

void main()
{
	int arr[100],n;

	printf("Enter how many numbers you want to Enter :");
	scanf_s("%d",&n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d[i]", &arr[i]);
	}

	printf("Unsorted Array \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");

	selection_sort(arr, n);

	printf("sorted Array \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");


}*/